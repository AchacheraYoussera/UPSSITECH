#include <stdio.h>
#include <stdlib.h>




void affiche_ELEMENT(ELEMENT e){printf("%d\n",e);}
void saisir_ELEMENT(ELEMENT val){
        ELEMENT e;
        printf("entrer l'element de la pile\n");
        scanf("%d",&e);
        *val=e;
        }
void affect_ELEMENT(ELEMENt *val, ELEMENT valeur){
        *val=valeur;
        }
void compare_ELEMENT(ELEMENT e1, ELEMENT e2){
        if(e1>e2)
        printf("le premier element est plus grand\n");
        if(e1<e2)
        printf("le premier element est plus petit\n");
        if(e1==e2)
        printf("le premier element est egale au deuxieme element\n");} 
       
