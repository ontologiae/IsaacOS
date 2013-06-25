	;; ======================
	;; =  MULTI-BOOT ISAAC  =
	;; =    Version 3.0     =
	;; =       01/06        =
	;; = By Sonntag Benoit  =
	;; = (Size <= 510Bytes) =
	;; ======================

	;; Support : Hard-Disk   FAT16,FAT32
	;;           Floppy-Disk FAT12,FAT16

	;; Compilation :
	;;   tasm /m2 boot.asm
	;;   tlink /t boot
.386P
	;; ======================
	;; = MACRO              =
	;; ======================
b equ <byte ptr>
w equ <word ptr>
d equ <dword ptr>

ISABOOT segment use16
	ORG 0100h
assume cs:ISABOOT, es:ISABOOT, ss:ISABOOT, fs:ISABOOT

START:  ;; ======================
	;; = START JUMP         =
	;; ======================
	  jmp debcom
	
	;; ======================
	;; = GENERIC DATA       =
	;; ======================
NomVer    db 'ISAAC V1'             ; Name & Version

	;; Bios parameter block (BPB)
Oct_Sec   dw 512                    ; byte / Sector
Sec_Clu   db 8                      ; Sectors / Cluster
Sec_Res   dw 32                     ; Nbr Sectors Reserved
Nb_FAT    db 2                      ; Nbr of FAT
E_Rac     dw 0                      ; Nbr Root Entries
Sec_Vol   dw 0                      ; Nbr of sectors in Volume (under 32MB)
Desc_Supp db 0F8h                   ; Media Descriptor Support
Sec_FAT   dw 0                      ; Nbr Sectors / FAT
Sec_Pis   dw 63                     ; Nbr Sectors / Track
Nb_tet    dw 128                    ; Nbr Heads
Dis_mass  dd 63                     ; Hidden sectors.
Sec_Vol2  dd 004E2241h              ; Nb Sectors (over 32MB)

	;; ( > 32 MB)
Sec_FAT2  dd 00001384h              ; Nbr Sectors by FAT - 1
	  dw 00h                    ; Flags FAT
	  dw 00h                    ; Version FAT
Root_Clu  dd 02h                    ; Start Root Directory (en Cluster)
	  db 01h, 00h, 06h, 00h	    ; ???  
	  db 12 dup (0)

	;; Drive information
Drive 	  db 80h                    ; BIOS Drive
	  db 00h                    ; Reserved (Unused)
	  db 29h                    ; 29h (Ext. boot signature)
	  dd 'SERI'                 ; Volume serial number
	  db 'NO NAME    '          ; 'Volume Label'
	  db 'FAT32   '             ; 'File system'

	;; ======================
	;; = ISAAC DATA         =
	;; ======================
PosClu    dd 10071                  ; Position of first Cluster.
PosRac    dd 10087                  ; Logical Sector of root directory.
PosFAT    dd 95                     ; Position of FAT.

	;; Address packet for new int 13h
Int13_Size       db 10h
Int13_Reserved   db 0
Int13_NbrSector  dw 1
Int13_Offset     dw 7C00h
Int13_Segment    dw 0
Int13_Sector     dd 0
Int13_SectorHigh dd 0

	;;  String.
Isaac     db 'STARTUP SYS'
Msdos     db 'BOOTOLD SYS'
Invit     db 'Isaac: Press [ALT]',13,10,0
;Invit     db 'Isaac Boot',13,10,0
Error     db 'Error. Press key.',13,10,0
	;; ======================
	;; = CODE               =
	;; ======================
debcom:
	xor ax,ax                   ; Init les Regs de Segment.
	mov ss,ax
	mov ds,ax
	mov es,ax
	mov sp,7C00h-2              ; Install la pile
;******************** Copie du Code en 0000h:0600h **************************
	mov di,0600h                ; Destination du Code.
	mov si,7C00h                ; Source (=> Ici)
	mov cx,256                  ; 256 x 2 = 512 o a copier.
	rep movsw                   ; Copie le Code...
	db 0EAh                     ; Jump Far sur NewCode
	dw 500h+offset NewCode
	dw 0000h
NewCode:
;******************************* Invite *************************************
	mov si,500h+offset Invit    ; aff invite
	call Afftxt

	mov bp,500h+Offset Isaac    ; pointe sur STARTUP.SYS (Par Defaut)

;        mov cx,150              ; 
;Touch1:  call LecKey            ; 
;         jnz Touch1             ; 
;Touch2:  call LecKey            ; 
;         jz Touch2              ; 
;        loop Touch1

	;mov bp,500h+Offset Msdos    ; pointe sur BOOTOLD.SYS
stload:
;************************** Lecture de la Racine ***************************
	mov ebx,[500h+PosRac]	; FAT16
	or w [500h+E_Rac],0
	jnz LecSuite
	  mov ebx,[500h+Root_Clu]
	  jmp CluFAT32	  
LecSuite:
;*************************** Recherche du fichier **************************
	mov dh,[500h+Sec_Clu]
	
SecSui:	 		; Begin loop in sector.
	 push dx
	 call LecSec
	 mov di,7C00h
	
Bcl:      mov si,bp		; Begin loop Entry
	  mov cx,11
	  or b es:[di],0
	   jz MessErr
	  repe cmpsb
	   jz trouv
	  add di,21
	  add di,cx
	  test di,200h
	  jz Bcl		; End loop Entry
	
	 pop dx
	 inc ebx		; Next sector.
	 dec dh
	 jnz SecSui		; End loop in sector.
	
	or w [500h+E_Rac],0
	jnz LecSuite                ; FAT 16 : Next Sector.
	 mov ebx,[500h+Root_Clu]    ; FAT 32 : Next Cluster.
	 shl ebx,2                   ; x 4 : Addr. du Cluster suivant.
	 mov di,bx
	 and di,01FFh                ; => Offset ds le secteur.
	 shr ebx,9
	 add ebx,[500h+PosFAT]       ; Cherche le bon Secteur.
	 call LecSec
	 mov ebx,es:[di+7C00h]       ; Read new/next Cluster.
CluFAT32:
	 call AddrClu
	 jmp LecSuite
MessErr:                            ; 'pop ebx' => Pas utile !
	mov si,500h+Offset Error    ; Affiche Err.
	call Afftxt
ReBoot:
  ; on boot en force
  xor ax,ax                   ; Attend une touche
	int 16h
	int 19h                     ; Reboot
trouv:                              ; 'pop ebx' => Pas utile !
	mov bx,es:[di+14h-11]
	shl ebx,16
	mov bx,es:[di+1Ah-11]       ; Lecture du cluster.
	call AddrClu
	call LecSec

	db 0EAh                     ; Jump Far sur Le fichier ...
	dw 7C00h
	dw 0000h
;******************** Lecture Clavier *************************************
LecKey: in al,60h
	cmp al,56                   ; Press [ALT]
	jz stload
	mov dx,03DAh                ; Wait VBL
	in al,dx
	test al,8
       Ret
;******************** Aff txt *********************************************
Afftxt:
	mov ah,0Eh
	xor bx,bx
bclaff: lodsb
	or al,al
	jnz aff0
       Ret
aff0:   int 10h
	jmp bclaff
;********************** Lecture Sector Logique ******************************
; EBX : Secteur Logique.
LecSec:
	mov [500h+Int13_Sector],ebx      ; Charge le N� Sector
	mov si,500h+offset Int13_Size    ; DS:SI=Addr. du Packet (Int 13h)
        mov dl,b [500h+Drive]            ; Drive.
        test dl,80h
         jz floppy
	mov ah,42h		         ; Read Sectors O/I
	int 13h
         jc MessErr
       Ret
floppy:
	push bx
	
	mov ax,bx
        mov bl,b [500h+Sec_Pis]
	push bx
        shl bl,1                         ; Sec_Pis * Nb_Tet
        div bl
        mov ch,al                        ; Piste = sec / (Sec_Pis * Nb_Tet)

        shr ax,8
	pop bx
        div bl
        mov dh,al                        ; Head

        mov cl,ah
        inc cl                           ; Sector

        mov ax,0201h
        mov bx,7C00h
        int 13h
         jc MessErr
	
	pop bx  
       Ret
	
;********************* Cluster -> Secteur Logique ***************************
; ebx : Cluster -> EBX : Secteur Logique
AddrClu:
	mov [500h+Root_Clu],ebx	    ; Save new cluster 
	movzx eax,b [500h+Sec_Clu]  ; Nbr de secteur / Cluster.
	mul ebx
	mov ebx,eax
	add ebx,[500h+PosClu]       ; Calcul le bon Secteur.
       Ret

;********************* Display buffer 7C00h *********************************

;print_buf:                      ; 
;        push es                 ; 
;        pusha                   ; 
;        mov ax,0B800h           ; 
;        mov es,ax               ; 
;        mov si,07C00h           ; 
;        xor di,di               ; 
;        mov ah,15               ; 
;        mov ecx,512             ; 
;next_car:                       ; 
;        lodsb                   ; 
;        stosw                   ; 
;        loop next_car           ; 
;        popa                    ; 
;        pop es                  ; 
;       Ret
	
ISABOOT ends
end START



