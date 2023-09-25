#include <stdio.h>
#include <stdlib.h>
#include "file_dynamique.h"
#include "element.h"


int main (){
int nbticket;
int nbt=0;
int caisse=0;
int prixSce=5;
printf("\nPour aujourd'hui, il y a 3 sceances\n");
MA_FILE sceance[3];

for(int i=0;i<3;i++){
    printf("Veuillez saisir les commande pour votre %d sceance\n",i+1);
    sceance[i]=SAISIR_FILE();
    }
    
 //calculer le prix total a la caisse en fin de journée   
for(int i=0;i<3;i++){
    while(sceance[i].tete!=NULL){
    sceance[i]=DEFILER(sceance[i], &nbticket);
    caisse=caisse+(nbticket*prixSce);
    nbt=nbt+nbticket;}
    }
printf("donc la valeur de la caisse a la fin de la journée est %d €\n",caisse);
printf("le nombre de ticket vendue aujourd'hui : %d\n",nbt);
return 0;
}
