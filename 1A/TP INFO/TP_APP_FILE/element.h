#ifndef element_H_INCLUS    /*--  Inclusion conditionnelle --> si pas déjà inclus           */
#define element_H_INCLUS    /*--  alors créer la constante symbolique MODULE_IMAGE_H_INCLUS */

typedef int ELEMENT;

/* AUTEUR : YOUSSERA ACHACHERA                      */
/* DATE CREATION : 17/11/2022                     */
/*-------------------------------------------------*/

/* DECLARATIONS DES FONCTIONS */
ELEMENT affiche_ELEMENT(ELEMENT e);
ELEMENT saisir_ELEMENT();
ELEMENT affect_ELEMENT(ELEMENT valeur);
void compare_ELEMENT(ELEMENT e1, ELEMENT e2);
#endif
