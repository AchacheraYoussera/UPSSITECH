#include <stdio.h>
#include <stdlib.h>
#include "file_dynamique.h"
#include "element.h"

/*typedef struct Cellule{
        ELEMENT valeur;
        struct Cellule *suiv;}Cellule;

typedef struct MA_FILE{
        Cellule *tete;
        Cellule *queue;};MA_FILE;*/
         
MA_FILE INIT_FILE(MA_FILE fifo){
      fifo.tete=NULL;
      fifo.queue=NULL;
      return fifo;
      }
      
void AFFICHE_FILE(MA_FILE fifo){
      if(FILE_EST_VIDE!=0) printf("La file est vide\n");
      printf("Les elements de votre pile sont\n");
               while((fifo.tete)!=NULL){
                  printf("%d\n",(fifo.tete)->valeur);
                  fifo.tete=(fifo.tete)->suiv;}
           
}
         
int FILE_EST_VIDE(MA_FILE fifo){ return (fifo.tete==NULL);}

MA_FILE ENFILER(MA_FILE fifo, ELEMENT e){
      Cellule *temp=(Cellule *) malloc (sizeof(Cellule));
      temp->valeur=affect_ELEMENT(e);
      temp->suiv=NULL;
      if(fifo.tete==NULL) fifo.tete=temp;
      else fifo.queue->suiv=temp;
      fifo.queue=temp;
      return fifo;
      }
 
MA_FILE DEFILER(MA_FILE fifo, ELEMENT *e){
      if(FILE_EST_VIDE(fifo)) {
             printf("vote file est vide\n");
             return fifo;}
       *e=fifo.tete->valeur;
       Cellule *temp=fifo.tete;
       fifo.tete=fifo.tete->suiv;
       free(temp);
       return fifo;
       }
       
MA_FILE SAISIR_FILE(){
       int i;
       ELEMENT element;
       MA_FILE fifo;
       fifo=INIT_FILE(fifo);
       int cc;
       printf("combien de client pour cette sceance\n");
       scanf("%d",&cc);
       for(i=0;i<cc;i++){  
            printf("Combien de tickets pour le %d client : ",i+1);
            element=saisir_ELEMENT();
            fifo=ENFILER(fifo,element);}
       return fifo;
}
             
      
      
      
        
      
     
