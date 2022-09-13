Année: 2022-2023
----------------

### Travaux pratiques 2

#### Objectifs

-   Comprendre les opérateurs, les tableaux, les pointeurs et les
    structures.
-   Créer, lire et manipuler des chaînes de caractères sans utiliser 
    les bibliothèques standards ou externes.
-   Créer, lire et manipuler des structures de données construites à l'aide de `struct`
-   Créer, lire et manipuler des tableaux
-   Lire et manipuler des variables en utilisant des pointeurs

#### Exercice 2.1 [★]


Écrivez le code *puissance.c* qui prend deux entiers **a** et **b** et
qui affiche la valeur du nombre **a** élevé à une puissance **b**. Par
exemple, puissance(2,3) affiche la valeur 8. N'utilisez pas la fonction
*pow()* (math.h).


#### Exercice 2.2 [★]


Considérez un entier d (**int d ;**). Écrivez le code *bits.c* qui
vérifie si les 4eme et 20eme bits de **gauche** sont 1 (en binaire). Si
les deux bits sont 1, il affiche 1 sinon 0.


#### Exercice 2.3 [★]


La suite de Fibonacci est une suite d'entiers définie comme suit :

-   U0=0
-   U1=1
-   Un= Un-1 + Un-2

Écrivez le code *fibonacci.c* qui affiche les n termes de la suite de
Fibonacci U0, U1, U2,...Un.


#### Exercice 2.4 [★★]


Sans utiliser les bibliothèques standards ou externes (par exemple
string.h), écrivez le code *chaine.c* qui

1.  calcule le nombre de caractères dans une chaine de caractères
2.  copie une chaine de caractères dans une autre chaine de caractère
3.  concatène deux chaines de caractères


#### Exercice 2.5 [★★]


Imaginez que vous gérez les notes de cinq étudiant.e.es. En utilisant
uniquement des tableaux, écrivez un programme *etudiant.c* qui déclare,
initialise et affiche les détails des cinq étudiant.e.es. Pour chaque
étudiant.e, on est intéressé par son nom, son prénom, son adresse, et
ses notes dans 2 modules (Programmation en C, Système d'exploitation).


#### Exercice 2.6 [★★] 

Écrivez un programme *etudiant2.c* pour la gestion de données
étudiant.e.es (5 étudiant.e.es) en utilisant struct. Les détails pour
chaque étudiant.e restent les mêmes comme pour l'exercice précédente
(nom, prénom etc.). Vous pouvez utiliser `strcpy` pour initialiser les
noms, prénoms etc.


#### Exercice 2.7 [★★]


Une couleur en format RGBA contient 4 valeurs : rouge (R), vert (G),
bleu (B) et alpha (A). Chaque valeur est un octet. 

Créez un programme *couleurs.c* en utilisant struct. 
Ensuite, créez et initialisez un
tableau de 10 couleurs. Pensez à initialiser les coleurs en notation
hexadécimale (r : 0xef, g : 0x78 etc.).


#### Exercice 2.8 [★★]


Réutilisez le programme *variables.c* et créez un programme
*ptrvariables.c* qui affecte et affiche les valeurs des variables de
différents types de base (char, short, int, long int, long long int,
float, double, long double) en utilisant leurs adresses. N'oubliez pas
d'afficher l'adresse et la valeur de ces variables avant ou après la
manipulation par leurs adresses (en utilisant les pointeurs).

Par exemple, vous avez les deux variables suivantes:
```
   int i = 0xa47865ff; 
   float f = 1;
```

Vous devez afficher les valeurs des octets en hexadécimal,
comme indiqué ci-dessous
```
   i : a4 78 65 ff; 
   f : 40 0 0 0
```

Pour plus d'informations sur la manière dont les nombres réels sont stockés dans les variables float et double, consultez la norme IEEE 754.



#### Exercice 2.9 [★★★]


Créez un programme *tableauptr.c* et écrivez le code pour créer deux
tableaux différents : int et float. Remplissez les valeurs aléatoires.
Pour les deux tableaux, si l'indice est divisible par 2, multipliez la
valeur à cette position par 3. N'utilisez pas la notation indicielle
pour parcourir les tableaux (par exemple, i [3], i [5] etc.).
Utilisez les pointeurs.


#### Astuce

-   Pour l'exercice 2.5, pensez à utiliser \*(s+i) etc (e.g, si s est
    un pointeur de type int \*).

#### Fichiers

*bits.c, chaine.c, couleurs.c, etudiant2.c, etudiant.c, fibonacci.c,
ptrvariables.c, puissance.c, tableauptr.c*

#### Instructions

-   N'oubliez pas les commentaires (nom de fichier, objectif, auteurs,
    , les lignes importantes de code etc.). Les commentaires sont notés.
-   N'oubliez pas de mettre à jour le fichier README.md et ajouter les
    détails concernant votre deuxième exercice.
-   Compte rendu en format .zip en un seul fichier.


