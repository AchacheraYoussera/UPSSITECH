#include <stdio.h>
#include <stdlib.h>
#include "pile_statique.h"

int main ()
{
  PILE p;
  int test;
  ELEMENT chiffre;
  printf("TEST\nLa taille max de la pile:%d\n \tintialisation pile.\n",MAX);
  p=init_PILE();
  (p.tete==-1)?printf("\t\tTEST OK.\n"):printf("\t\tTEST NOK.\n");
  printf("\test vide, est pleine et affichage sur une pile vide\n\t\tPile Vide:\n");
  test=PILE_estVide(p);
  (test==1)?printf("\t\tTEST OK.\n\t\tPile Pleine:\n"):printf("\t\tTEST NOK.\n\t\tPile Pleine:\n");
  test=PILE_estPleine(p);
  (test==0)?printf("\t\tTEST OK.\n"):printf("\t\tTEST NOK.\n"); 
  printf("\t\tTest affichage:\n");
  affiche_PILE(p);
  printf("\t emplier element 1,2,3,4,5,6 et affichage\n ");
  p=emPILE(p, 1);
  affiche_PILE(p);
  p=emPILE(p, 2);
  affiche_PILE(p);
  p=emPILE(p, 3);
  affiche_PILE(p);
  p=emPILE(p, 4);
  affiche_PILE(p);
  p=emPILE(p, 5);
  affiche_PILE(p);
  p=emPILE(p, 6);
  affiche_PILE(p);
  printf("\t deplier element 1,2,3 et affichage:\n");
  p=dePILE(p, &chiffre);
  affiche_PILE(p);
  printf("Element supprimé:%d\n",chiffre);
  p=dePILE(p, &chiffre);
  affiche_PILE(p);
  printf("Element supprimé:%d\n",chiffre);
  p=dePILE(p, &chiffre);
  affiche_PILE(p);
  printf("Element supprimé:%d\n",chiffre);
  p=dePILE(p, &chiffre);
  affiche_PILE(p);
  printf("Element supprimé:%d\n",chiffre);
  p=dePILE(p, &chiffre);
  affiche_PILE(p);
  printf("Element supprimé:%d\n",chiffre);
  p=dePILE(p, &chiffre);
  affiche_PILE(p);
  printf("Element supprimé:%d\n",chiffre);
  printf("\t: tester saisir pile:\n");
  p=saisir_PILE();
  affiche_PILE(p);
    return 0;}
