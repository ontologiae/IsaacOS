#include "types.h"

#define	PAGESIZE 	4096
#define	RAM_MAXPAGE	0x100000

#define	KERNEL_BASE	0x100000

#define	VADDR_PD_OFFSET(addr)	((addr) & 0xFFC00000) >> 22
#define	VADDR_PT_OFFSET(addr)	((addr) & 0x003FF000) >> 12
#define	VADDR_PG_OFFSET(addr)	(addr) & 0x00000FFF
#define PAGE(addr)		(addr) >> 12

#define PAGING_FLAG 0x80000000	/* CR0 - bit 31 */
#define USER_OFFSET 0x40000000
#define USER_STACK  0xE0000000

#ifdef __MM__
u32 *pd0;			/* kernel page directory */
u32 *pt0;			/* kernel page table */
u8 mem_bitmap[RAM_MAXPAGE / 8];	/* bitmap allocation de pages (1 Go) */
#else
extern u8 mem_bitmap[];
#endif

struct pd_entry {
	u32 present:1;
	u32 writable:1;
	u32 user:1;
	u32 pwt:1;
	u32 pcd:1;
	u32 accessed:1;
	u32 _unused:1;
	u32 page_size:1;
	u32 global:1;
	u32 avail:3;

	u32 page_table_base:20;
} __attribute__ ((packed));

struct pt_entry {
	u32 present:1;
	u32 writable:1;
	u32 user:1;
	u32 pwt:1;
	u32 pcd:1;
	u32 accessed:1;
	u32 dirty:1;
	u32 pat:1;
	u32 global:1;
	u32 avail:3;

	u32 page_base:20;
} __attribute__ ((packed));


/* Marque une page comme utilisee / libre dans le bitmap */
#define set_page_frame_used(page)	mem_bitmap[((u32) page)/8] |= (1 << (((u32) page)%8))
#define release_page_frame(p_addr)	mem_bitmap[((u32) p_addr/PAGESIZE)/8] &= ~(1 << (((u32) p_addr/PAGESIZE)%8))

/* Selectionne une page libre dans le bitmap */
char *get_page_frame(void);

/* Initialise les structures de donnees de gestion de la memoire */
void init_mm(u32);

/* Cree un repertoire de page pour une tache */
u32* pd_create(u32*, unsigned int);
