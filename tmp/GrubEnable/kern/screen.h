#include "types.h"

#ifdef __SCREEN__

#define RAMSCREEN 0xB8000	/* debut de la memoire video */
#define SIZESCREEN 0xFA0	/* 4000, nombres d'octets d'une page texte */
#define SCREENLIM 0xB8FA0

char kX = 0;			/* position courante du curseur a l'ecran */
char kY = 8;
char kattr = 0x07;		/* attributs video des caracteres a afficher */

#else

extern char kX;
extern char kY;
extern char kattr;

#endif				/* __SCREEN__ */

void scrollup(unsigned int);
void putcar(uchar);
void dump(uchar*, int);
void move_cursor(u8, u8);
void show_cursor(void);
void hide_cursor(void);

