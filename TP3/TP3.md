Année: 2022-2023
----------------

### Travaux pratiques 3

#### Objectifs

-   Comprendre les les pointeurs et les structures.
-   Comprendre l'espace occupé par les différentes variables en mémoire en utilisant `sizeof`

#### Exercice 3.1 [★]


Vous êtes sur une machine de 64 bits et vous utilisez également un
système d'exploitation 64 bits. Écrivez un programme *sizeof.c* et
testez le code suivant. Quelle est la valeur renvoyée par chacune des
lignes suivantes ?

1.  sizeof (int)
2.  sizeof (int *)
3.  sizeof (int **)
4.  sizeof (char *)
5.  sizeof (char **)
6.  sizeof (char ***)
7.  sizeof (float *)
8.  sizeof (float **)
9.  sizeof (float ***)


#### Exercice 3.2 [★]


Codez en C un programme *grand_petit.c* qui créer un tableau de 100
entiers et calculer

-   a) Le numéro plus grand
-   b) Le numéro plus petit

N'utilisez pas scanf.


#### Exercice 3.3 [★★]


Écrivez un programme *tri.c* en créant d'abord un tableau de 100
entiers, puis en les triant par ordre croissant.


#### Exercice 3.4 [★★]


Écrivez un programme *chercher.c* en créant un tableau de 100 entiers et
puis en cherchant un entier dans ce tableau. Si l'entier est présent
dans le tableau, affichez le message 'entier présent'.


#### Exercice 3.5 [★★]


Regardez l'article sur la recherche dichotomique:
<https://fr.wikipedia.org/wiki/Recherche_dichotomique>. Écrivez un
programme *recherche_dichotomique.c* en créant un tableau de 100
entiers et puis en cherchant un entier dans le tableau déjà tri en ordre
croissant. Si l'entier est présent dans le tableau, affichez le message
'entier présent'.


#### Exercice 3.6 [★★]


Écrivez un programme en créant le fichier *octets.c* et utilisant char
* et les opérateurs de pointeurs pour voir les octets d'une variable
short, int, long int, float, double et long double.


#### Exercice 3.7 [★★★]


En réutilisant le code de *couleurs.c*, écrivez un programme
*couleur_compteur.c* qui stocke 100 couleurs dans un tableau
et qui affiche les couleurs distinctes et leur nombre dans le tableau. 

Pour cet exercice, il y a trois étapes principales :
1. Tout d'abord, créez une structure pour stocker les détails d'une couleur : R, G, B et A
2. Créez un tableau de 100 couleurs en utilisant la structure ci-dessus.
3. Comptez le nombre de couleurs distinctes.

Par exemple, si le tableau contient les couleurs suivantes:

```
0xff 0x23 0x23 0x45              
0xff 0x00 0x23 0x12              
0xff 0x23 0x23 0x45             
```

Vous devez afficher

```              
0xff 0x23 0x23 0x45 2              
0xff 0x00 0x23 0x12 1.             
```

Vous pouvez créer une nouvelle structure pour stocker les couleurs distinctes et leur compte. 

#### Exercice 3.8 [★★★]


Écrivez un programme *chercher.c* qui créer un tableau de 10 phrases (un
tableau de tableau de caractères). Sans utilisant les fonctions de
bibliothèques standards ou externes, cherchez si une phrase est dans le
tableau ou pas. 


#### Fichiers

*chercher.c, couleur_compteur.c, couleurs.c, grand_petit.c, octets.c,
recherche_dichotomique.c, sizeof.c, tri.c*

#### Instructions

-   N'oubliez pas les commentaires (nom de fichier, objectif, auteurs,
    les lignes importantes de code etc.). Les commentaires sont notés.
-   N'oubliez pas de mettre à jour le fichier README.md et ajouter les
    détails concernant votre deuxième exercice.
-   Compte rendu en format .zip en un seul fichier.


