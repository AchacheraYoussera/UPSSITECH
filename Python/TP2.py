class Stack:
    def __init__(self):
        self.items = []
    
    def isEmpty(self):
        return len(self.items)==0
    
    def size(self):
        return len(self.items)
    
    def ajouter(self,element):
        self.items.append(element)
        
    def supprimer(self):
        if self.isEmpty():
            print("la pile est deja vide")
            
        else:
            elSupp=self.items.pop()
            return elSupp
        
    def affichage(self):
        for i in self.items:
            print(i)

# # Exemple d'utilisation de la classe Stack
# ma_pile = Stack()

# ma_pile.push(1)
# ma_pile.push(2)
# ma_pile.push(3)

# print("Éléments dans la pile:", ma_pile.items)
# print("Taille de la pile:", ma_pile.size())

# element_retire = ma_pile.pop()
# print("Élément retiré de la pile:", element_retire)
# print("Éléments restants dans la pile:", ma_pile.items)

class Graph:
    def __init__(self):
        self.items = {}
        
    def ajouterArc(self, noeud1, noeud2):
        if noeud1 not in self.items:
            self.items[noeud1] = [noeud2]
        elif noeud2 not in self.items[noeud1]:
            self.items[noeud1].append(noeud2)
        else:
            print("Arc existe déjà")
    
        if noeud2 not in self.items:
            self.items[noeud2] = [noeud1]
        elif noeud1 not in self.items[noeud2]:
            self.items[noeud2].append(noeud1)
        else:
            print("Arc existe déjà")

            
            
    def depth_first(self, noeudBase):
        ma_pile = Stack()
        liste=[]
        parcours=[]
        DejaVu=set()
        DejaVu.add(noeudBase)
        if noeudBase in self.items:
                ma_pile.ajouter(noeudBase)
                parcours.append(noeudBase)
        else :
            print("le noeud n'existe pas dans le graphe")
            
        while ma_pile.size()>0:
            noeudPere=ma_pile.supprimer()
            # print(noeudPere)
            DejaVu.add(noeudPere)
            liste=self.items[noeudPere]
            for i in liste :
                if i not in DejaVu:
                    ma_pile.ajouter(i)
                    parcours.append(i)
            liste.clear()
            return parcours
    def comp_con(self):
        composantConx=[]
        for cle, value in self.items.items():
            for i in value:
                composantConx.append([cle,i])
        print(composantConx)
        return composantConx

graphe=Graph()
graphe.ajouterArc(1,3)
graphe.ajouterArc(2,3)
graphe.ajouterArc(1,6)
graphe.ajouterArc(6,7)
parcours=graphe.depth_first(1)
c=graphe.comp_con()


                    
                    
        