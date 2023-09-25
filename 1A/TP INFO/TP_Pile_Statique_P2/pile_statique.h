#ifndef pile_statique_H_INCLUS    /*--  Inclusion conditionnelle --> si pas déjà inclus           */
#define pile_statique_H_INCLUS    /*--  alors créer la constante symbolique MODULE_IMAGE_H_INCLUS */
#include "element.h"
#define MAX 100

/* AUTEUR : YOUSSERA ACHACHERA                      */
/* DATE CREATION : 10/11/2022                     */
/*-------------------------------------------------*/

/* DECLARATIONS DES FONCTIONS */
typedef struct PILE{
        ELEMENT tab[MAX];
        int tete;}PILE;
        
PILE init_PILE();
void affiche_PILE(PILE p);
int PILE_estPleine(PILE p);
int PILE_estVide(PILE p);
PILE emPILE(PILE p, ELEMENT n);
PILE dePILE(PILE p, ELEMENT *n);
PILE saisir_PILE();
#endif
