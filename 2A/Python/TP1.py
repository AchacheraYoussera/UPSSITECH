#  1 ERE PARTIE
import string
import re
# stop_words = set("""one the a some no not is be are has have been had must can do may might and of in i you we she he it they what if s ll t m re
# as out to at with her his their theirs our ours its your my mine did an was on as for this that who when were would me herself himself themselves just 
# could should all but or so very what about there then them by any well don haven weren isn ' like into
# """.split())


# def lire_fichier(chemin):
#     fichier = open(chemin, "r", encoding="utf8")
#     texte1 = fichier.read()
#     text2=texte1.lower()
#     text= re.sub(r"'s\b", '', text2)    
#     text = text.translate(str.maketrans('', '', string.punctuation))
#     liste = text.split()
#     occurence = {}
#     for i in liste:
#         if i in occurence and i not in stop_words:
#             occurence[i] = occurence[i]+1
#         else:
#             occurence[i] = 1
#     return occurence
    

# def mot_reccurent(dic):
#     sorted_d = sorted(dic.items(), key=lambda x: x[1], reverse=True)
#     for (element, num) in sorted_d[:10]:
#             print(element," : ",num)


# occurence={}
# occurence=lire_fichier("tp1.txt.txt")
# resultat=mot_reccurent(occurence)

# 2 EME PARTIE
stop_words = set("""one the a some no not is be are has have been had must can do may might and of in i you we she he it they what if s ll t m re
as out to at with her his their theirs our ours its your my mine did an was on as for this that who when were would me herself himself themselves just 
could should all but or I n't so very what , ; ? . : - ! & ' ( ) * " about there then them by any well don haven weren isn ' like into
""".split())


# def lire_fichier(chemin):
#     dic={}
#     liste_mot=[]
#     fichier2 = open(chemin, "r", encoding="utf8")
#     liste_ligne = fichier2.readlines()
#     for ligne in liste_ligne:
#         if len(liste_mot)<1:
#             liste_mot=[ligne.split()]
#         else:
#             liste_mot.append(ligne.split())
#     for mot,types,lemme in liste_mot:
#         if lemme in dic and lemme not in stop_words and lemme!="<unknown>":
#             dic[lemme]=dic[lemme]+1
#         elif lemme not in dic and lemme not in stop_words and lemme!="<unknown>":
#             dic[lemme]=1
#         elif lemme=="<unknown>" and lemme not in dic:
#             dic[mot]=1
#         elif lemme=="<unknown>" and lemme in dic:
#             dic[mot]=dic[mot]+1
#     return dic

# def mot_reccurent(dic,n):
#     sorted_d = sorted(dic.items(), key=lambda x: x[1], reverse=True)
#     for (element, num) in sorted_d[:n]:
#             print(element," : ",num)


# occurence2=lire_fichier("tp1_2.utf8.conll.txt")
# mot_reccurent(occurence2,30)


# 3 EME PARTIE

def lire_fichier(chemin,n):
    occurence = {}
    fichier = open(chemin, "r", encoding="utf8")
    texte1 = fichier.read()
    text2=texte1.lower()
    text= re.sub(r"'s\b", '', text2)    
    text = text.translate(str.maketrans('', '', string.punctuation))
    liste = text.split()
    liste_sequence=[]
    for i in range (len(liste)-n+1):
        liste_sequence.append(tuple(liste[i:i+n]))
    for i in liste_sequence:
        if i in occurence :
            occurence[i] = occurence[i]+1
        else:
            occurence[i] = 1
    return occurence 
   
    

def mot_reccurent(dic):
    sorted_d = sorted(dic.items(), key=lambda x: x[1], reverse=True)
    for (element, num) in sorted_d[:10]:
            print(element," : ",num)


occurence={}
occurence=lire_fichier("tp1.txt.txt",3)
resultat=mot_reccurent(occurence)
    
