#ifndef element_H_INCLUS    /*--  Inclusion conditionnelle --> si pas déjà inclus           */
#define element_H_INCLUS    /*--  alors créer la constante symbolique MODULE_IMAGE_H_INCLUS */


typedef int ELEMENT;

/* AUTEUR : YOUSSERA ACHACHERA                      */
/* DATE CREATION : 17/11/2022                     */
/*-------------------------------------------------*/

/* DECLARATIONS DES FONCTIONS */
void affiche_ELEMENT(ELEMENT e);
void saisir_ELEMENT(ELEMENT val);
void affect_ELEMENT(ELEMENT val, ELEMENT valeur);
void compare_ELEMENT(ELEMENT e1, ELEMENT e2);
#endif
