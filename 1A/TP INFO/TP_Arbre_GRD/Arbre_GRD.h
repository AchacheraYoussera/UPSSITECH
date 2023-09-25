#ifndef Arbre_GRD_H_INCLUS    
#define Arbre_GRD_H_INCLUS    

typedef struct etCellule{
               int element;
               struct etCellule *Cg;
               struct etCellule *Cd;} Cellule;
typedef Cellule *ARBRE;
      
void INIT_ARBRE(ARBRE *arbre);
void  AFFICHE_ARBRE(ARBRE arb);
int ARBRE_VIDE(ARBRE arb);
ARBRE AJOUT_DS_ARBRE(ARBRE arb, int valeur);
int ENLEVER_MIN_DE_ARBRE(ARBRE arb);
ARBRE chercheMinARBRE(ARBRE arb);
int chercheMinValeur(ARBRE arb);
ARBRE ENLEVER_Val(ARBRE arb, int valeur);
#endif
