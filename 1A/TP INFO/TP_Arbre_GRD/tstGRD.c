#include <stdio.h>
#include <stdlib.h>
#include "Arbre_GRD.h"

int main(){
ARBRE arbre;
int valeur;
INIT_ARBRE(&arbre);
printf("on ajoute 65\n");
arbre=AJOUT_DS_ARBRE(arbre, 65);
AFFICHE_ARBRE(arbre);
printf("on ajoute 7\n");
arbre=AJOUT_DS_ARBRE(arbre, 7);
printf("on ajoute 3\n");
arbre=AJOUT_DS_ARBRE(arbre, 3);

printf("on ajoute 80\n");
arbre=AJOUT_DS_ARBRE(arbre, 10);
AFFICHE_ARBRE(arbre);

printf("on ajoute 8\n");
arbre=AJOUT_DS_ARBRE(arbre, 8);

printf("on ajoute 100\n");
arbre=AJOUT_DS_ARBRE(arbre, 100);
AFFICHE_ARBRE(arbre);

printf("on ajoute 2\n");
arbre=AJOUT_DS_ARBRE(arbre, 2);
AFFICHE_ARBRE(arbre);

valeur=ENLEVER_MIN_DE_ARBRE(arbre);
printf("valeur %d\n",valeur);
AFFICHE_ARBRE(arbre);

valeur=ENLEVER_MIN_DE_ARBRE(arbre);
printf("valeur %d\n",valeur);
AFFICHE_ARBRE(arbre);
valeur=ENLEVER_MIN_DE_ARBRE(arbre);
printf("valeur %d\n",valeur);
AFFICHE_ARBRE(arbre);

return 0;
}
