#include <stdio.h>
#include <stdlib.h>
#include "file_dynamique.h"
#include "element.h"

int main ()
{
  MA_FILE fifo;
  int test;
  ELEMENT chiffre;
  fifo=INIT_FILE(fifo);
  (fifo.tete==NULL)?printf("\t\tTEST OK.\n"):printf("\t\tTEST NOK.\n");

  printf("\t\tTest affichage:\n");
  AFFICHE_FILE(fifo);
  printf("\t enfiler element 1,2,3,4,5,6 et affichage\n ");
  fifo=ENFILER(fifo, 1);
  AFFICHE_FILE(fifo);
  fifo=ENFILER(fifo, 2);
  AFFICHE_FILE(fifo);
  fifo=ENFILER(fifo, 3);
  AFFICHE_FILE(fifo);
  fifo=ENFILER(fifo, 4);
  AFFICHE_FILE(fifo);
  fifo=ENFILER(fifo, 5);
  AFFICHE_FILE(fifo);
  fifo=ENFILER(fifo, 6);
  AFFICHE_FILE(fifo);
  printf("\t defiler element 1,2,3 et affichage:\n");
  fifo=DEFILER(fifo, &chiffre);
  AFFICHE_FILE(fifo);
  printf("Element supprimé:%d\n",chiffre);
  fifo=DEFILER(fifo, &chiffre);
  AFFICHE_FILE(fifo);
  printf("Element supprimé:%d\n",chiffre);
  fifo=DEFILER(fifo, &chiffre);
  AFFICHE_FILE(fifo);
  printf("Element supprimé:%d\n",chiffre);
  fifo=DEFILER(fifo, &chiffre);
  AFFICHE_FILE(fifo);
  printf("Element supprimé:%d\n",chiffre);
  fifo=DEFILER(fifo, &chiffre);
  AFFICHE_FILE(fifo);
  printf("Element supprimé:%d\n",chiffre);
  fifo=DEFILER(fifo, &chiffre);
  AFFICHE_FILE(fifo);
  printf("Element supprimé:%d\n",chiffre);
  printf("\t: tester saisir fifo:\n");
  fifo=SAISIR_FILE();
  AFFICHE_FILE(fifo);
    return 0;}
