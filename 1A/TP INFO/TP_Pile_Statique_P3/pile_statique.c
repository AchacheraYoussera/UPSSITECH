#include <stdio.h>
#include <stdlib.h>
#include "pile_statique.h"
#include "element.h"

PILE init_PILE()
{    PILE pile;
     pile.tete=-1;
     return pile;
}


int PILE_estVide(PILE pile){ 
       return(pile.tete==-1);
}

int PILE_estPleine(PILE pile){
    return (pile.tete==MAX-1);}



 PILE emPILE(PILE pile, ELEMENT e)
{
    if(PILE_estPleine(pile)==0)
    {
    (pile.tete)++;
    pile.tab[pile.tete]=e;//affect_ELEMENT(e)
    }
    return pile;
}


PILE dePILE(PILE pile, ELEMENT *e)
{
    if(PILE_estVide(pile)==0)
        {  *e=affect_ELEMENT(pile.tab[pile.tete]);
            pile.tete=pile.tete-1;
         
         }
    else
        fprintf(stderr,"La Pile est Vide");
    return pile;
}

PILE saisir_PILE()
{   int combien,i;
    ELEMENT element;
    PILE pile;
    pile =init_PILE();
    printf("Combien d'element voulez-vous saisir:\n ");
    scanf("%d",&combien);
    printf("veuillez saisir les composants de votre train :  Wagon simple (W), Wagon restaurant (R) ou Locomotive (L)\n"); 
    for(i=0;i<combien;i++){  
             element=saisir_ELEMENT();
             pile=emPILE(pile,element);
                }
    return pile;
}
            
void affiche_PILE1(PILE pile)
{     int i;
      if(pile.tete==-1)
          {printf("\n---\n---\n");}
       else { 
           printf("\nAffichage de la pile:\n");
           for( i=0;i<=pile.tete;i++){
              printf("%c",pile.tab[i]);
              printf("\t");}
         }
}
void affiche_PILE2(PILE pile)
{     int i;
      if(pile.tete==-1)
          {printf("\n---\n---\n");}
       else { 
           printf("\nAffichage de la pile:\n");
           for( i=0;i<=pile.tete;i++){
              printf("%c",pile.tab[i]);
              printf("\n");}
         }
}          
          
               
      
          
                   
         
         
         
        
