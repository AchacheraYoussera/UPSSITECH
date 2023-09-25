#include <stdio.h>
#include <stdlib.h>
#include "pile_statique.h"


typedef struct VOIE_DE_WAGONS {
        PILE pile;
        }VW;
        

int main(){
VW Est, Ouest, Garage;

Est.pile=init_PILE();
Ouest.pile=init_PILE();
Garage.pile=init_PILE();
ELEMENT e;
char W;
ELEMENT wagon;
PILE train;
int taille;
int i=0;
train=saisir_PILE();
taille=train.tete;
affiche_PILE1(train);
Est.pile=train;
printf("\nEst:\n\n");
affiche_PILE1(Est.pile);
//passer les wagons au garage
/*while(Est.pile.tete>-1){
    i++;
    printf("\netape %d:\n\n\n",i);
    dePILE(Est.pile,&e);
    Est.pile.tete--;
    printf("e=%s\n\n\n",e);
    emPILE(Garage.pile,e);
    printf("%s est passer dans le garage\n",e);
    printf("Est:\n\n\n");
    affiche_PILE1(Est.pile);
    printf("\n\nGarage:\n\n\n");
    affiche_PILE2(Garage.pile);} */
    
   
  


return 0;
}


