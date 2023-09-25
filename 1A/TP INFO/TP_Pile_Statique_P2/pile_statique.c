#include <stdio.h>
#include <stdlib.h>
#include "pile_statique.h"


PILE init_PILE()
{    PILE pile;
     pile.tete=-1;
     return pile;
}

void affiche_PILE(PILE pile)
{     int i;
      if(pile.tete==-1)
          {printf("\n---\n---\n");}
       else  { printf("\nAffichage de la pile:\n");
       for( i=0;i<=pile.tete;i++)
         {
              affiche_ELEMENT(pile.tab[i]);
         }}
}
int PILE_estVide(PILE pile){ 
       return(pile.tete==-1);
}

int PILE_estPleine(PILE pile){
    return (pile.tete==MAX-1);
}


 PILE emPILE(PILE pile, ELEMENT e)
{   ELEMENT* val;
    if(PILE_estPleine(pile)==0)
    {
    (pile.tete)++;
    affect_ELEMENT(*val, e);
    pile.tab[pile.tete]=*val;
    }
    return pile;
}


PILE dePILE(PILE pile, ELEMENT *e)
{   ELEMENT *val;
    if(PILE_estVide(pile)==0)
        {  ELEMENT e=pile.tab[pile.tete];
           affect_ELEMENT(*val,e)
           *e=&val;
           pile.tete=pile.tete-1;
         
         }
    else
        fprintf(stderr,"La Pile est Vide");
    return pile;
}

PILE saisir_PILE()
{   int combien,i;
    ELEMENT *element;
    PILE pile;
    pile =init_PILE();
    printf("Combien d'element voulez-vous saisir: ");
    scanf("%d",&combien);
                for(i=0;i<combien;i++){  
                   saisir_ELEMENT(*element);
                   pile=emPILE(pile,*element);
                }
    return pile;
}
            
           
          
               
      
          
                   
         
         
         
        
