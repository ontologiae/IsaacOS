        ;; ======================
	;; = LOADER x86 - ISAAC =
	;; =    Version 3.0     =
	;; =       01/06        =
	;; = By Sonntag Benoit  =
	;; ======================

	;; Support : Hard-Disk   FAT16,FAT32
	;;           Floppy-Disk FAT12,FAT16

	;; Compilation : 
	;;   tasm -m2 startup.asm
	;;   tlink /t startup
;.486P
	;; ======================
	;; = MACRO              =
	;; ======================
b equ byte ptr
w equ <word ptr>
d equ <dword ptr>
o equ <offset>

OS32 segment use16
	ORG 0100h
assume cs:OS32, es:OS32, ss:OS32

START:  ;; ======================
	;; = START JUMP         =
	;; ======================
	jmp debcom

	;; ======================
	;; = BOOT DATA          =
	;; ======================
DBNomVer    equ 3 +600h	      ; Name & Version
DWOct_Sec   equ 11+600h	      ; Byte / Sector
DBSec_Clu   equ 13+600h	      ; Sector / Cluster
DWSec_Res   equ 14+600h	      ; Nbr Sector Reserved
DBNb_FAT    equ 16+600h	      ; Nbr of FAT
DWE_Rac     equ 17+600h	      ; Nbr Entry in root directory
DWSec_Vol   equ 19+600h	      ; Nbr Sector in Volume
DBDesc_Supp equ 21+600h	      ; Descriptor support
DWSec_FAT   equ 22+600h	      ; Nbr Sector / FAT
DWSec_Pis   equ 24+600h	      ; Nbr Sector / Track (Piste)
DWNb_tet    equ 26+600h	      ; Nbr Head
DDDis_mass  equ 28+600h	      ; Distance of first sector in support.
DDSec_Vol2  equ 32+600h	      ; Nb Sec. =>2500Mo
	
DDSec_FAT2  equ 36+600h	      ; Nbr Sector / FAT - 1
;            equ 40+600h	      ; Flags FAT
;	    equ 42+600h       ; Version FAT
DDRoot_Clu  equ 44+600h	      ; start Root Directory
;	    equ 48+600h	      ; ???
;	    equ 52+600h	      ; +12  

	;; Drive Information
DBDrive     equ 64+600h	      ; Phys. Drive
   ;	    equ 65+600h	      ; Reserv.
   ;	    equ 66+600h	      ; 29h
   ;	    equ 67+600h	      ; Serial Number of Disk
   ;	    equ 71+600h	      ; Name of Volume
   ;	    equ 82+600h	      ; Type FAT

        ;; ======================
	;; = DATA BOOT ISAAC    =
	;; ======================
DDPosClu    equ 90+600h	      ; Position of first Cluster.
DDPosRac    equ 94+600h	      ; Logical Sector of root directory.
DDPosFAT    equ 98+600h       ; Position of FAT.

;******* Address packet for int 13h ******
DBInt13_Size       equ 102+600h
DBInt13_Reserved   equ 103+600h
DWInt13_NbrSector  equ 104+600h
DWInt13_Offset     equ 106+600h
DWInt13_Segment    equ 108+600h
DDInt13_Sector     equ 110+600h
DDInt13_SectorHigh equ 114+600h
	
Invit     db 'dans STARTUP',13,10,0
	;; ======================
	;; = DATA STARTUP       =
	;; ======================
	
old_sector_FAT equ 600h       
	
	;; ======================
	;; = CODE               =
	;; ======================
debcom:
;***************** Test limit 512 bytes ************************
	mov ax,FIN_LIMIT_512
	cmp ax,512
	jb limit_ok
          mov ah,0Eh
	  xor bx,bx
          mov al,'E'
          int 10h
	  jmp $
limit_ok:
        
;******************* move this Code to 2800h *********************
 	mov sp,0800h
 	mov di,2800h                ; Destination of Code.
 	mov si,7C00h                ; Source (=> Here)
 	mov cx,256                  ; 256 x 2 = 512 o copy.
 	rep movsw                   ; Copy Code...
 	db 0EAh                     ; Jump Far on NewCode
 	dw offset NewCode-100h
 	dw 280h
NewCode:
	xor ax,ax
	mov fs,ax
	
;*********** Read file 2048 bytes (modulo cluster) *******************
	mov fs:[old_sector_FAT],d -1
	mov bx,280h
	mov dh,fs:[DBSec_Clu]	; Nbr sector/cluster
	movzx cx,dh
	shl cx,5		; Nbr sec/clu * 32  ( 32 = 512/16 )
LecSuite:
	call AddrClu
	mov es,bx
	call LecSec
	add bx,cx
	call CluSuivant	
	cmp bx,300h
	jae SuiteCode	 
	jmp LecSuite
		
;********************* Cluster -> Secteur Logique ***************************
; -> EAX : Secteur Logique
AddrClu:
	push edx
	movzx eax,b fs:[DBSec_Clu]  ; Nbr de secteur / Cluster.
	mul d fs:[DDRoot_Clu]
	add eax,fs:[DDPosClu]       ; Calcul le bon Secteur.
	pop edx
       Ret

;********************* Cherche le cluster suivant ***************************
CluSuivant:
	pushad
        push es
	
	mov ax,100h
	mov es,ax
        mov dh,1		; Nbr de sector a lire
	
	mov ebx,fs:[DDRoot_Clu]
        test b fs:[DBDrive],80h
	jz CluFAT12
	  or w fs:[DWE_Rac],0
	  jnz CluFAT16
CluFAT32:
	shl ebx,2
	mov eax,ebx
	shr eax,9
	add eax,fs:[DDPosFAT]		
	call LecSecFAT
	and bx,1FFh
	mov eax,es:[bx]
	cmp eax,0FFFFFF0h
	jae EndOfFile
	jmp GoodClu
          
CluFAT16:
	shl ebx,1
	mov eax,ebx
	shr eax,9
	add eax,fs:[DDPosFAT]
	call LecSecFAT
	and bx,1FFh
	movzx eax,w es:[bx]
	cmp ax,0FFF0h
	jae EndOfFile
	jmp GoodClu
	
CluFAT12:
        mov eax,ebx
	shr eax,1
	add eax,ebx		; cluster * 1.5
	mov di,ax
	shr eax,9
	add eax,fs:[DDPosFAT]
	inc dh			; 2 sectors a lire
	call LecSecFAT
	and di,1FFh
	mov ax,es:[di]
	test bx,1
	jz FAT12_low
	  shr ax,4
	  jmp FAT12_suite
FAT12_low:	
	and ax,0FFFh
FAT12_suite:
	cmp ax,0FF0h
	jb GoodClu
EndOfFile:
	xor eax,eax	
GoodClu:
	mov fs:[DDRoot_Clu],eax

	pop es
	popad
	ret

;******************** Aff txt *********************************************
; DS:SI = Chaine
;Afftxt:
;	mov ah,0Eh
;	xor bx,bx
;bclaff: lodsb
;	or al,al
;	jnz aff0
;       Ret
;aff0:   int 10h
;	jmp bclaff
;********************** Sector Logique -> Secteur Physique ******************
; EAX : Secteur Logique. ES : Addr. Buf. DH : Nb de secteur.
LecSecFAT:
	cmp eax,fs:[old_sector_FAT]
	jz finLec
	mov fs:[old_sector_FAT],eax
LecSec:
	pushad
	
	mov b fs:[DWInt13_NbrSector],dh         
	mov w fs:[DWInt13_Offset],0
	mov fs:[DWInt13_Segment],es
	mov fs:[DDInt13_Sector],eax      ; Charge le N Sector
	mov si,offset fs:[DBInt13_Size]  ; DS:SI=Addr. du Packet (Int 13h)
	mov dl,fs:[DBDrive]              ; Drive.
        test dl,80h
         jz floppy
	mov ah,42h		         ; Read Sectors O/I
	int 13h
	popad
finLec:	
       Ret
floppy:
        mov bl,b fs:[DWSec_Pis]
	push bx
        shl bl,1                         ; Sec_Pis * Nb_Tet
        div bl
        mov ch,al                        ; Piste = sec / (Sec_Pis * Nb_Tet)

        shr ax,8
	pop bx
        div bl
        xchg dh,al                        ; Head

        mov cl,ah
        inc cl                           ; Sector

        mov ah,02h
        xor bx,bx		; ES:BX = Buffer
        int 13h
	popad
       Ret
        
;print_buf:                       
;        push es
;        push ds
;        pusha
; 
;        push es
;        pop ds
;        xor si,si
;        mov ax,0B800h
;        mov es,ax
;        xor di,di
; 
;        mov ah,15
;        mov ecx,512
;next_car:
;        lodsb
;        stosw
;        loop next_car
; 
;        xor ax,ax
;        int 16h
;        popa
;        pop ds
;        pop es
;       Ret

;*************************** Affiche un Nbr *********************************
; AX : Nbr
 affax:  pusha
         push es
         mov bx,0B800h
         mov es,bx
         xor di,di
         mov cx,ax
         mov bp,10000  
 daffnb2:mov ax,cx
         xor dx,dx
         div bp
         mov cx,dx
         add al,48
         mov ah,10
         stosw
         mov ax,bp
         mov bp,10
         xor dx,dx
         div bp
         or ax,ax
         jz qaffnb2
         mov bp,ax
         jmp daffnb2
 qaffnb2:
 	xor ax,ax
 	int 16h
 
 	pop es
         popa
         ret

FIN_LIMIT_512 equ offset $-100h
	
;**************************************************************************
;*               LIMITE DU CODE < 512 Octets                              *
;**************************************************************************
	;; 000000h -+-------------+ ---------
	;;          | IDT 16 Bits |
	;; 000400h -+-------------+
	;;          | Area BIOS   |
	;; 000500h -+-------------+
	;;          |    Free     |   Page 1
	;; 000600h -+-------------+   
	;;          |    Free     |
	;; 000800h -+-------------+
	;;          | IDT 32 Bits |
	;; 001000h -+-------------+ ---------
	;;          |  DATA-CODE  |   
	;;          |   16 Bits   |   Page 2
	;; 001800h -+-------------+   
	;;          | STACK 16Bits|
	;; 002000h -+-------------+ ---------
	;;          |    GDT      |
	;; 002800h -+-------------+   Page 3
	;;          | STARTUP.ASM |-----------> After load. Buffer 16Bits (2Ko).
	;; 003000h -+-------------+ ---------
	;;          |             |
	;;          |    FREE     |   Page 4
	;;          |             |
	;; 09FC00h -+-------------+
	;;          |Area BIOS Ext|	
	;; 0A0000h -+-------------+     .
	;;          |   SCREEN    |
	;;          |     +       |
	;;          |    BIOS     |
	;; 100000h -+-------------+
	;;          | STACK (1Mo) |
	;;          |   32 Bits   |
	;; 200000h -+-------------+
	;;          | CODE 32Bits |
	;;          |   STARTUP   |
	;;          | ----------- |
	;;	    | DATA+BSS 32 |
	;;	    |   STARTUP   |
	;; 400000h -+-------------+
	;;          |   MALLOC    |
	;;          |             |
	;;	    |/\/\/\/\/\/\/|
	;; 
	;;	    |/\/\/\/\/\/\/|
	;;FEC0.0000h+-------------+
	;;          | Various BIOS|
	;;FFFF.FFFFh+-------------+
	
	;;           GDT :
	;; 0000h -+-------------+
	;;        | Link Free   |
	;; 0008h -+-------------+
	;;        | Code 16bits |
	;; 0010h -+-------------+
	;;        | Data 16bits |
	;; 0018h -+-------------+
	;;        | Code 32bits |
	;; 0020h -+-------------+
	;;        | Data 32bits |
	;; 0028h -+-------------+
	;;        |/\/\/\/\/\/\/
	
	;; ======================
	;; = DATA               =
	;; ======================

IDT      dw 07FFh  ; Laisse de la place pour l'ancienne table Interruption...
	 dd 0800h

GDT      dw 07FFh  ; Une petite GDT pour commencer ... (2Ko)
	 dd 2000h  ; Laisse de place pour la table des repertoire de page...

	;; ======================
	;; = CODE               =
	;; ======================
	
SuiteCode:
                
	push bx			; Save for load KERNEL
	push dx
	
;************************* Preparation de la GDT ***************************
	  mov ax,80h
	  mov es,ax
	  xor eax,eax
	  mov di,ax
	  mov ecx,200h
	  rep stosd                     ; Vide IDT

	  mov ax,200h
	  mov es,ax
	  xor eax,eax
	  mov di,ax
	  mov ecx,200h
	  rep stosd                     ; Vide GDT

	;; Intern Linked List in GDT
	  mov ax,200h      ; GDT
	  mov es,ax
	  mov cx,255
	  xor di,di
	  mov ax,1
ListGDT:   mov es:[di],ax
	   add di,8
	   inc ax
	  dec cx
	  jnz ListGDT
	  mov w es:[di],0     ; Fin de la liste.

	  ;***** Les descripteurs essentiel *****
	
	  ; *** CODE 16 Bits ***
	  mov eax,0
	  mov ebx,0FFFFFh    ; desc 08h : CODE segment.
	  mov cx,0809Bh	     ; Code 16 bits (Flat mode).  
	  call desc
  	
	  ; *** DATA 16 Bits ***
	  mov eax,0
	  mov ebx,0FFFFFh     ; desc 10h : DATA 16Bits segment.
	  mov cx,08093h      ; Data Fixe (Flat mode)
	  call Desc

	  ; *** CODE 32 Bits ***
	  mov eax,0
	  mov ebx,0FFFFFh    ; desc 18h : CODE segment.
	  mov cx,0C09Bh	     ; Code 32 bits.  
	  call desc
	
	  ; *** DATA 32 Bits ***
	  mov eax,0
	  mov ebx,0FFFFFh     ; desc 20h : DATA segment.
	  mov cx,0C093h        ; Data Fixe
	  call Desc

	;; Passage en FLAT mode 32Bits :-)
	;; (J'encule le REAL mode pour charger le Kernel en High memory!)
        
	call enablea20		 

;**************************** GDTR ****************************************
	CLI
	lgdt fword ptr cs:[GDT-100h]    ; met ds GDTR

	mov eax,cr0
	or eax,00000001h           ; Passage en mode prot�g� 32 bits.
	mov cr0,eax

	mov ax,10h
	mov es,ax
	mov ds,ax
	mov gs,ax
	mov fs,ax

	;; Protecting Mode -> Real Mode
	mov eax,cr0		; Pass Real Mode
	and eax,7FFFFFFEh
	mov cr0,eax

	sti

;*********** Lecture du fichier KERNEL ISAAC *******************
	pop dx
	pop bx 			; Load info Kernel...
		
	;; Copy modulo Cluster
	xor ax,ax
	mov es,ax
	mov ds,ax
	mov fs,ax
	mov edi,200000h		; 2 Mo
	
	mov esi,3000h
	movzx ebx,bx
	shl ebx,4
KLoop:		
	cmp ebx,esi
	jz ExitKcopy
	mov eax,ds:[esi]
	mov es:[edi],eax
	add esi,4
	add edi,4
	jmp KLoop
ExitKcopy:
	or d fs:[DDRoot_Clu],0
	jz Kfin

	mov ax,300h
	mov es,ax	  
KLecSuite:
	call AddrClu
	call LecSec	
	;; Copy Cluster > 2Mo		
	movzx ecx,dh
	shl cx,7	 	;  Sec/clu * 512 / 4
	
	xor esi,esi		
Kcopy:
	mov eax,es:[esi]		
	mov ds:[edi],eax
	add esi,4
	add edi,4
	loop Kcopy
	
	;; Next Cluster
	call CluSuivant
	or d fs:[DDRoot_Clu],0
	jnz KLecSuite	
Kfin:	
	
;********************* Le passage commence ICI ! **************************
	;; Passage FLAT mode -> PROTECTING MODE
	;; (J'encule le FLAT mode pour le vrai protecting mode 32Bits!)
        
	 CLI
       	lidt fword ptr cs:[IDT-100h]    ; met ds IDTR
        lgdt fword ptr cs:[GDT-100h]    ; met ds GDTR
        
;**************************** Init PIC *************************************
	 mov al,11h           ; ICW1 : Mode attaque / Cascade / ICW4
	 out 20h,al
	 jmp $+2
	 out 0A0h,al
	 jmp $+2
	 mov al,20h           ; ICW2 : N� int Pr IRQ0
	 out 21h,al
	 jmp $+2
	 mov al,28h
	 out 0A1h,al
	 jmp $+2
	 mov al,04h           ; ICW3 : Ligne IRQ Pr Esclave (2nd PIC)
	 out 21h,al
	 jmp $+2
	 mov al,02h
	 out 0A1h,al
	 jmp $+2
	 mov al,01h           ; ICW4 : EOI Manuel / Intel
	 out 21h,al
	 jmp $+2
	 out 0A1h,al
	 jmp $+2
	 mov al,11111111b     ; Autorise Rien pr IRQ0-7
	 out 21h,al
	 jmp $+2
	 mov al,11111111b     ; Autorise Rien pr IRQ8-15
	 out 0A1h,al
	 jmp $+2
        
  	call install_bios_int
        
	  ; *** FIN ***
	  
	  mov eax,1000h
	  mov cr3,eax           ; Pour le repertoire de page ...

       ;	  xor eax,eax
       ;	  mov ax,BIDON_X32
       ;	  or eax,10000h
       ;	  mov ebx,8000h
       ;	  mov cx,009Bh        ; Code 16 Bits.
       ;	  call desc
       ;	  mov cs:[ofs_jmp-100h],dword ptr 0
       ;	  mov cs:[seg_jmp-100h],ax

	  jmp $+2                      ; Vide le Cache.

	;; ======================
	;; = PROTECTING MODE 32 =
	;; ======================
        
;***************************** Flags **************************************
	push d 3002h            ; init le flag IOPL=3 & CLI
	popfd

;*************************** Init Mot d'etat Machine **********************
	mov eax,cr0
	or eax,00000001h           ; Passage en mode protege 32 bits.
	mov cr0,eax

;*************************** Init les registres de segment ****************
	mov ax,20h
	mov es,ax
	mov ds,ax
	mov gs,ax
	mov fs,ax
	mov ss,ax
	mov esp,200000h
     

;***  LE GRAND SAUT !!!  *** => Bonne chance Isaac ...
	db 66h
	db 0EAh    ; JUMP FAR  Execution du STARTUP.EOF
ofs_jmp dd 200000h
seg_jmp dw 18h

	;; ======================
	;; = SUB ROUTINE        =
	;; ======================

aff_eax:
	pushad
	  mov edx,eax
	  xor bx,bx
	  mov cl,28
aff_h:	
	  mov eax,edx
	  shr eax,cl
	  and eax,0Fh
	  cmp al,9
	  ja hex_car
	    add al,48
	    jmp aff_car
hex_car:  add al,'A'-10
aff_car:	
	  mov ah,0Eh	      	  
          int 10h
	  sub cl,4
	  jae aff_h
	  	
	  mov ah,0Eh	  
	  mov al,'h'      
          int 10h
	
	  call wait_key
	  call wait_key
	popad
	ret	

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
	
;********************** Rempli un Descripteur ******************************
;* eax:Addr de base; ebx:Taille du seg; cx:priorit� => ax: n�du desc
Desc:
   push ebx
   push di
   push es
   push dx
   mov di,200h
   mov es,di
   mov di,es:[0]
   shl di,3
   mov dx,es:[di]
   mov es:[0],dx
   mov es:[di],bx    ; 0..15 de la taille
   shr ebx,16
   or bl,ch
   mov es:[di+6],bl  ; 16..19 de la taille
   mov es:[di+2],ax  ; 0..15 de la base
   shr eax,16
   mov es:[di+4],al  ; 16..23 de la base
   mov es:[di+7],ah  ; 24..31 de la base
   mov es:[di+5],cl  ; priorit�
   mov ax,di
   pop dx
   pop es
   pop di
   pop ebx
   ret

;******************************** A20 ***************************************
enablea20:
	pusha
	push fs
	push gs
	cli

	xor ax,ax                       ; set A20 test segments 0 and 0ffffh
	mov fs,ax
	dec ax
	mov gs,ax

	call a20test
	jz a20Fin

	in al,92h                       ; PS/2 A20
	or al,2
	jmp $+2
	jmp $+2
	jmp $+2
	out 92h,al

	call a20test
	jz a20Fin

	call a20kbwait            ; AT A20 enable
	jnz a20f0

	mov al,0d1h
	out 64h,al

	call a20kbwait
	jnz a20f0

	mov al,0dfh
	out 60h,al

	call a20kbwait

a20f0:                          ; wait  A20
	mov cx,800h

a20l0:
	call a20test
	jz a20Fin

	in al,40h                       ; get current tick counter
	jmp $+2
	jmp $+2
	jmp $+2
	in al,40h
	mov ah,al

a20l1:                          ; wait a single tick
	in al,40h
	jmp $+2
	jmp $+2
	jmp $+2
	in al,40h
	cmp al,ah
	je a20l1

	loop a20l0

a20Fin:
	 sti
	 pop gs
	 pop fs
	 popa
	ret

;-----------------------------------------------------------------------------
a20kbwait:
	xor cx,cx
waitl0:
	jmp $+2
	jmp $+2
	jmp $+2
	in al,64h            ; read 8042 status
	test al,2            ; buffer full?
	loopnz waitl0
	ret

;-----------------------------------------------------------------------------
a20test:
	mov al,fs:[0]
	mov ah,al
	not al
	xchg al,gs:[10h]
	cmp ah,fs:[0]
	mov gs:[10h],al
	ret                             ; 0 : A20 OK
	
;----------------------- INT BIOS ---------------------
install_bios_int:
;******************* Deplacement du Code en 1000h *********************
	push di
	push si
	push cx
	push es
	push ds

	xor ax,ax
	mov es,ax
	mov ax,cs
	mov ds,ax
	mov di,1000h                ; Destination du Code.
	mov si,offset begin_call-100h   ; Source (=> Ici)
	
	mov cx,offset end_call-100h
	sub cx,si
	add cx,2
	shr cx,1
	cmp cx,400h
	jb limit_ok2
	  mov ah,0Eh
	  xor bx,bx
          mov al,'e'
          int 10h
	  jmp $
limit_ok2:
	
	rep movsw                  ; Copie le Code...
	
	pop ds
	pop es
	pop cx
	pop si
	pop di
	ret

begin_call_int equ offset $		
begin_call:
	pushad			 
        push ds			
        push es			
                
	mov ax,10h		; Data 16 bits
	mov ds,ax
	mov es,ax
	mov fs,ax		
	mov gs,ax
	
	mov ds:[old_ss  -begin_call_int+1000h],ss   ; Save SS 32bits 
	mov ds:[old_esp -begin_call_int+1000h],esp  ; Save ESP 32 bits 
        
        sgdt fword ptr ds:[GDT_Isa -begin_call_int+1000h]
          
	mov ss,ax		; Install new Stack
	mov esp,2000h-24        

	pop ax		         	          ; Depile Num Interrupt
	mov ds:[num_int -begin_call_int+1000h],al  ; Write Num         
        
        jmp vide_cache		; Flush cash processor (Pipeline)
	
old_ss  dw 0			; Data Save old stack 32 bits
old_esp dd 0
        
GDT_Isa dw 07FFh                ; save old GDT
	dd 2000h
        
vide_cache:		
	;; Protecting Mode -> Real Mode
	mov eax,cr0		; Pass Real Mode 
	and eax,7FFFFFFEh 
	mov cr0,eax
	                                        
        db 0EAh			; Jump Real Mode
	dw offset JumpRM -begin_call_int+1000h
	dw 0
                                       
JumpRM:
        ;;         lidt fword ptr cs:[IDT_Rea -begin_call_int+1000h]
	xor ax,ax
	mov ss,ax		; Stack Real Mode

        popf
        pop ds
        pop es
        popa

	sti
        ;;            int 13h
        ;;          jc erro
        ;;         mov ax,0b800h
        ;;         mov ds,ax
        ;;         mov ds:[160],byte ptr 'B'
        ;;         mov ds:[161],byte ptr 12
        ;;         jmp pas_err
        ;;                 erro:
        ;;         mov ax,0b800h
        ;;         mov ds,ax
        ;;         mov ds:[160],byte ptr 'E'
        ;;         mov ds:[161],byte ptr 12
        ;; pas_err:
        ;; 	jmp $

	db 0CDh			; Int N #
num_int db 0			; num
	
	cli
        
	pusha
	push es
	push ds
	pushf

        lgdt fword ptr cs:[GDT_Isa -begin_call_int+1000h] ; restore GDT

	;; Real Mode -> Protecting Mode (WARNING : PAS de pagination!!)
	mov eax,cr0		
	or eax,00000001h 
	mov cr0,eax
	                                
        db 0EAh			; Jump Protecting Mode 16 bits
        dw offset JumpPM -begin_call_int+1000h
        dw 08h
JumpPM:	
	mov ax,10h		; Data PM 16 bits
	mov ds,ax
		
        mov ss ,ds:[old_ss  -begin_call_int+1000h]
	mov esp,ds:[old_esp -begin_call_int+1000h]
	
fin_int:
	pop es
	pop ds
	popad
	
	db 066h
	Retf
end_call:	

	;; ======================
	;; = DEBUG SUB ROUTINE  =
	;; ======================

;*************************** Affiche un Nbr *********************************
; EAX : Addr
affbuf_bios:
	pushad
	push ds

	mov esi,eax
	xor ax,ax
	mov ds,ax
	mov cx,16
affbb:
	push cx
	
	mov ax,si
	call affax_bios
	xor bx,bx	
	mov ah,0Eh
	mov al,':'	
	int 10h

	mov cx,512
affbl:		
	mov al,ds:[esi]
	inc esi
	cmp al,32
	jb passcar
		
	xor bx,bx	
	mov ah,0Eh	
	int 10h
passcar:	
	loop affbl

	xor bx,bx	
	mov ah,0Eh
	mov al,10	
	int 10h
	xor bx,bx	
	mov ah,0Eh
	mov al,13	
	int 10h
	
	pop cx
	loop affbb

	call wait_key
	call wait_key
	
	pop ds
	popad
	ret
			
;*************************** Affiche un Nbr *********************************
; AX : Nbr
 affax_bios:  
	 pusha                  
         mov cx,ax
         mov bp,10000
         xor bx,bx
 daffnb3:mov ax,cx
         xor dx,dx
         div bp
         mov cx,dx
         add al,48
	 mov ah,0Eh	
	 int 10h         
         mov ax,bp
         mov bp,10
         xor dx,dx
         div bp
         or ax,ax
         jz qaffnb3
         mov bp,ax
         jmp daffnb3
 qaffnb3:
	call wait_key
         popa
         ret

;******************** WaitKey ************************************************
wait_key:
	push ax	
	      in al,60h
	      mov ah,al
   BclTc:    in al,60h
	      cmp al,ah
	      jz BclTc   ; D�tect un changement d'�tat...
	pop ax
	ret
			
;******************** Erreur ************************************************
Erreur:
	      in al,60h
	      mov ah,al
   BclTch:    in al,60h
	      cmp al,ah
	      jz BclTch   ; D�tect un changement d'�tat...

	      db 0EAh    ;   reboot violent
	      dw 0000
	      dw 0FFFFh
	
;******************** Affiche une chaine ************************************
; DS:SI= pointeur sur chaine ASCIIZ; BL= couleur;
affline proc near
       push ax
       push bx
       push dx
       push si
       push di
       push es

	mov dx,3D4h             ; CRT
	mov al,0Eh              ; cursor location high
	out dx,al
	inc dx
	in al,dx
	dec dx
	mov di,ax
	shl di,8
	mov al,0Fh              ; cursor location low
	out dx,al
	inc dx
	in al,dx
	xor ah,ah
	or di,ax                ; addresse du curseur
	shl di,1

	mov ax,0B800h
	mov es,ax
	mov ah,bl
affline00:
	lodsb
	or al,al
	jz afflinefin
	 cmp al,10
	 jne affline01
	  push ax
	  mov ax,di
	  xor dx,dx
	  mov bx,160
	  div bx
	  sub di,dx
	  pop ax
	  jmp affline00
affline01:
	 cmp al,13
	 jne affline02
	  add di,160
	  jmp affline00
affline02:
	 cmp al,9
	 jne affline03
	  add di,16
	  and di,0FFF0h
	  jmp affline00
affline03:
	 call tstecr
	 stosw
	 jmp affline00

afflinefin:
	call tstecr
	shr di,1
	mov dx,3D4h
	mov ax,di
	mov al,0Eh              ; cursor location high
        out dx,ax

        mov ax,di
	mov ah,al
	mov al,0Fh              ; cursor location low
	out dx,ax

	pop es
	pop di
        pop si
	pop dx
	pop bx
	pop ax
       Ret
Tstecr:
	 cmp di,4000
	 jb affline04
	  push ax
	  push ds
	  push si
	  push cx
	  mov ax,di
	  mov bx,160
	  xor dx,dx
	  div bx                ; DI / 160
	  sub ax,24             ; Lin - 25 = Lin saut
	  mov di,dx
	  add di,24*160
	  mul bx                ; Lin saut * 160
	  mov si,ax
	  push es
	  pop ds
	  push di
	   xor di,di
	   mov cx,4000
	   sub cx,si
	   push si
	   rep movsb
	   pop si
	   mov cx,si
	   shr cx,1
	   mov ax,0720h
	   rep stosw
	  pop di

	  pop cx
	  pop si
	  pop ds
	  pop ax
affline04:
	  Ret
endp

;*************************** Affiche un Nbr *********************************
; AX : Nbr
affnb:  pusha
	push es
	mov bx,0B800h
	mov es,bx
	xor di,di
	mov cx,ax
	mov bp,10000
	xor bx,bx
daffnb: mov ax,cx
	xor dx,dx
	div bp
	mov cx,dx
	add al,48
	mov ah,10
	stosw
	mov ax,bp
	mov bp,10
	xor dx,dx
	div bp
	or ax,ax
	jz qaffnb
	mov bp,ax
	jmp daffnb
qaffnb: pop es
	popa
	ret


OS32 ends
end START
