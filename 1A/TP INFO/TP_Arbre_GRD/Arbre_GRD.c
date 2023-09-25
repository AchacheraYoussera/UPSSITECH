#include <stdio.h>
#include <stdlib.h>
#include "Arbre_GRD.h"

               
void INIT_ARBRE(ARBRE *arb){
	*arb=NULL;
      }
      
void  AFFICHE_ARBRE(ARBRE arb){
           if(arb!=NULL){
           	AFFICHE_ARBRE(arb->Cg);
           	printf("%d\n",arb->element);   
           	AFFICHE_ARBRE(arb->Cd);}}
           
int ARBRE_VIDE(ARBRE arb){
        return (arb==NULL);}
        
ARBRE AJOUT_DS_ARBRE(ARBRE arb, int valeur){
        if(ARBRE_VIDE(arb)){
             ARBRE arb=(ARBRE)malloc(sizeof(struct etCellule));
             arb->element=valeur;
             arb->Cg=NULL;
             arb->Cd=NULL;
             return arb;}
         if(arb->element>=valeur) 
         	arb->Cg=AJOUT_DS_ARBRE(arb->Cg,valeur);
         else 
         	arb->Cd=AJOUT_DS_ARBRE(arb->Cd,valeur);
         return arb;
        }
        
int ENLEVER_MIN_DE_ARBRE(ARBRE arb){
	   if(arb!=NULL){
	   	int valeur=chercheMinARBRE(arb)->element;        
	   	arb=ENLEVER_Val(arb,valeur);
	   	return valeur;}}

	
ARBRE ENLEVER_Val(ARBRE arb, int valeur){
	if(arb == NULL){return arb;}
	else if(valeur<arb->element){
		arb->Cg = ENLEVER_Val(arb->Cg,valeur);
				}
	else if(valeur>arb->element){
		arb->Cd = ENLEVER_Val(arb->Cd,valeur);
		}
		
	else{
		if(arb->Cg == NULL){
			ARBRE temp = arb->Cd;
			return temp;
		}
		else if(arb->Cd == NULL){
			ARBRE temp = arb->Cg;
			return temp;
		}		
		else{
			ARBRE temp = chercheMinARBRE(arb->Cd);		
			arb->element = temp->element;
			ENLEVER_Val(arb->Cd, temp->element);
			}
		}
		return arb;
	}

ARBRE chercheMinARBRE(ARBRE arb){
	if(arb->Cg == NULL)
		return arb;
	return chercheMinARBRE(arb->Cg);}
             	

			
             	
             	
             	
             	
             	
             	
             	
             	                          
