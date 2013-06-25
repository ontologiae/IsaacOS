#include "types.h"


#define __MM__
#include "mm.h"


/*
 * Parcours le bitmap a la recherche d'une page libre et la marque
 * comme utilisee avant de retourner son adresse physique.
 */
char* get_page_frame(void)
{
	int byte, bit;
	int page = -1;

	for (byte = 0; byte < RAM_MAXPAGE / 8; byte++)
		if (mem_bitmap[byte] != 0xFF)
			for (bit = 0; bit < 8; bit++)
				if (!(mem_bitmap[byte] & (1 << bit))) {
					page = 8 * byte + bit;
					set_page_frame_used(page);
					return (char *) (page * PAGESIZE);
				}
	return (char *) -1;
}

/* 
 * Initialise le bitmap memoire et cree le repertoire de pages du kernel.
 * Utilise un identity mapping tel que vaddr = paddr sur 4Mo 
 */
void init_mm(u32 high_mem)
{
	u32 page_addr;
	int i, pg, pg_limit;

	/* Memoire disponible theorique */
	pg_limit = (high_mem * 1024) / PAGESIZE;

	/* Initialisation du bitmap de pages physiques */
	for (pg = 0; pg < RAM_MAXPAGE / 8; pg++)
		mem_bitmap[pg] = 0;

	for (pg = pg_limit / 8; pg < RAM_MAXPAGE / 8; pg++)
		mem_bitmap[pg] = ~0;

	/* Page reservee pour l'IDT et la GDT */
	set_page_frame_used(0);

	/* Pages reservees pour le noyau. On suppose que la taille < 1 Mo */
	for (pg = PAGE(0x100000); pg < PAGE(0x200000); pg++) 
		set_page_frame_used(pg);

	/* Pages reservees pour le hardware */
	for (pg = PAGE(0xA0000); pg < PAGE(0x100000); pg++) 
		set_page_frame_used(pg);


	/* Prend une page pour le Page Directory et une pour la Page Table[0] */
	pd0 = (u32*) get_page_frame();
	pt0 = (u32*) get_page_frame();

	/* Initialisation du Page Directory */
	pd0[0] = (u32) pt0;
	pd0[0] |= 3;
	for (i = 1; i < 1024; i++)
		pd0[i] = 0;

	/* Initialisation de la Page Table[0] */
	page_addr = 0;
	for (pg = 0; pg < 1024; pg++) {
		pt0[pg] = page_addr;
		pt0[pg] |= 3;
		page_addr += 4096;
	}

	asm("	mov %0, %%eax \n \
		mov %%eax, %%cr3 \n \
		mov %%cr0, %%eax \n \
		or %1, %%eax \n \
		mov %%eax, %%cr0"::"m"(pd0), "i"(PAGING_FLAG));
}

/* 
 * code_phys_addr: localisation du code en memoire physique
 * code_size: taille du code
 */
u32* pd_create(u32 * code_phys_addr, unsigned int code_size)
{
	u32 *pd, *pt;
	u32 i, j;
	u32 pages;

	/* Prend et initialise une page pour le Page Directory */
	pd = (u32*) get_page_frame();
	for (i = 1; i < 1024; i++)
		pd[i] = 0;

	/* Espace kernel */
	pd[0] = pd0[0];
	pd[0] |= 3;

	/* Espace u */
	if (code_size % PAGESIZE)
		pages = code_size / PAGESIZE + 1;
	else
		pages = code_size / PAGESIZE;

	for (i = 0; pages; i++) {
		pt = (u32*) get_page_frame();

		pd[(USER_OFFSET + i * PAGESIZE * 1024) >> 22] = (u32) pt;
		pd[(USER_OFFSET + i * PAGESIZE * 1024) >> 22] |= 7;

		for (j = 0; j < 1024 && pages; j++, pages--) {
			pt[j] = (u32) (code_phys_addr + i * PAGESIZE * 1024 + j * PAGESIZE);
			pt[j] |= 7;
		}
	}

	return pd;
}

