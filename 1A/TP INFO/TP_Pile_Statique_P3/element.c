#include <stdio.h>
#include <stdlib.h>
#include "element.h"

/*typedef float ELEMENT;*/

ELEMENT affiche_ELEMENT(ELEMENT e){
        printf("%c\n",e);
        }
        
ELEMENT saisir_ELEMENT(){
        ELEMENT e;
        printf("entrer l'element\n");
        scanf("%c",&e);
        printf("%c",e);
        return e;}
ELEMENT affect_ELEMENT(ELEMENT valeur){
        return valeur;}
void compare_ELEMENT(ELEMENT e1, ELEMENT e2){
        if(e1>e2)
        printf("le premier element est plus grand\n");
        if(e1<e2)
        printf("le premier element est plus petit\n");
        if(e1==e2)
        printf("le premier element est egale au deuxieme element\n");} 
