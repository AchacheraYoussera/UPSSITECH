#ifndef file_dynamique_H_INCLUS    /*--  Inclusion conditionnelle --> si pas déjà inclus           */
#define file_dynamique_H_INCLUS    /*--  alors créer la constante symbolique MODULE_IMAGE_H_INCLUS */
#include "element.h"

/* AUTEUR : YOUSSERA ACHACHERA                      */
/* DATE CREATION : 01/12/2022                     */
/*-------------------------------------------------*/

/* DECLARATIONS DES FONCTIONS */

typedef struct Cellule{
        ELEMENT valeur;
        struct Cellule *suiv;}Cellule;

typedef struct MA_FILE{
        Cellule *tete;
        Cellule *queue;}MA_FILE;
        
MA_FILE INIT_FILE(MA_FILE fifo);
void AFFICHE_FILE(MA_FILE fifo);
int FILE_EST_VIDE(MA_FILE fifo);
MA_FILE ENFILER(MA_FILE fifo, ELEMENT e);
MA_FILE DEFILER(MA_FILE fifo, ELEMENT *e);
MA_FILE SAISIR_FILE();
#endif
