#include <stdio.h>
#include <stdlib.h>

typedef float ELEMENT;

ELEMENT affiche_ELEMENT(ELEMENT e){printf("%f",e);}
ELEMENT saisir_ELEMENT(){
        ELEMENT e;
        printf("entrer l'element de la pile\n");
        scanf("%f",&e);
        return e;}
ELEMENT affect_ELEMENT(float valeur){
        ELEMENT e;
        e=valeur;
        return e;}
void compare_ELEMENT(ELEMENT e1, ELEMENT e2){
        if(e1>e2)
        printf("le premier element est plus grand\n");
        if(e1<e2)
        printf("le premier element est plus petit\n");
        if(e1==e2)
        printf("le premier element est egale au deuxieme element\n");}
     
     
int main(){
ELEMENT e1,e2;
e1=saisir_ELEMENT();
printf("e1=%f",e1);
e2=affect_ELEMENT(4);
compare_ELEMENT(e1,e2);
return 0;}   
