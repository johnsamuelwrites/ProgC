Année: 2022-2023
----------------

### Travaux pratiques 1

#### Objectifs

-   Ecrire, compiler et exécuter les programmes C.
-   Utiliser des variables
-   Utiliser différents types de base.
-   Utiliser des opérateurs arithmétiques, logiques et de manipulation de bits. 

#### Exercice 1.1 [★]

 
Créez un fichier *bonjour.c* et écrivez un programme qui affiche
`"bonjour le monde!"` à l'écran. 

Compilez ce fichier en utilisant gcc et exécutez le code en exécutant les commandes suivantes sur le terminal.

```
$ gcc bonjour.c
$ ./a.out
```

Vous pouvez également renommer votre exécutable en utilisant l'option '-o'.

```
$ gcc -o bonjour bonjour.c 
$ ./bonjour
```

Pour voir tous les avertissements (*warnings*) pendant la compilation, vous pouvez utiliser les options `-Wall` et `-Wextra`.

```
$ gcc -Wall -Wextra -o bonjour bonjour.c 
$ ./bonjour
```

#### Exercice 1.2 [★]

 
Écrivez un programme *cercle.c* qui calcule l'aire et le périmètre d'un
cercle

a.  l'aire: Utilisez une variable `rayon` : float ou double

b.  le périmètre: Utilisez une variable `rayon` : float ou double


Compilez *cercle.c* et créez un fichier éxecutable nommé cercle.

Exécutez 'cercle'.


#### Exercice 1.3 [★]

 
Écrivez un programme *sizeof_types.c* qui affiche la taille des
différents types de base (en octets) :

i.  char

ii. short

iii. int

iv. long int

v.  long long int

vi. float

vii. double

viii. long double


N'oubliez pas d'utiliser les versions signées (`signed`) et non-signées (`unsigned`). Testez le
programme (compilez et exécutez).


#### Exercice 1.4 [★★]

 
Écrivez un programme *variables.c* qui affecte et affiche les valeurs
des variables des différents types de base :

i.  char

ii. short

iii. int

iv. long int

v.  long long int

vi. float

vii. double

viii. long double


N'oubliez pas d'utiliser les versions signées (`signed`) et non-signées (`unsigned`). Testez
le programme.


#### Exercice 1.5 [★★]

 
Écrivez un programme *opérateurs.c* qui utilise deux variables
suivantes:

i.  `a` = 16

ii. `b` = 3

et testez les différents opérateurs arithmétiques et logiques.


#### Exercice 1.6 [★★]

 
Écrivez un programme *boucles.c* qui utilise `for`, # et * et qui
affiche un triangle rectangle. La taille du triangle est dependent de la
valeur de la variable `compteur` (`compteur` < 4 inacceptable).
Exemple, si `compteur` = 5, le programme affiche

```
*              
* *               
* # *              
* # # *              
* * * * *
```

Testez le code avec les différentes valeurs de `compteur`. Écrivez une
nouvelle version du code en utilisant `while` ou `do..while`.
Vous pouvez utiliser des branchements conditionnels ( `if`) et inconditionnels (`break`
ou `continue`).

#### Exercice 1.7 [★★]

 
Écrivez un programme *conditions.c* qui utilise les boucles (`for`,
`while` ou `do..while`) et les branchements inconditionnels (`break`
ou `continue`) pour l'affichage de numéros <= 1000 qui sont divisible par:

a.  2 et 15

b.  103 ou 107

c.  7 ou 5, mais pas par 3



#### Exercice 1.8 [★★★]

 
Écrivez un programme *opérateurs2.c* qui utilise trois variables

1.  `num1` (entier)
2.  `num2` (entier)
3.  `op` (un caractère)

La variable `op` contient un de ces différents opérateurs. (+, -, \*,
/, %, &, |, ~). Utilisez `switch` et réutilisez le code de votre exercice précédent (*opérateurs.c*). 
Si c est égal à '+', le programme fait l'addition de
deux variables `num1` et `num2`, si `op` est égal à '&', le
programme fait l'opération ET etc. Rappelez-vous bien que l'on ne peut
pas utiliser chaine de caractères comme condition en `switch`. Testez
votre programme avec différents valeurs de `num1`, `num2`, `op`. 


#### Exercice 1.9 [★★★]

 
Écrivez un programme *binaire.c* qui utilise `for` pour l'affichage
d'une variable `int` en format binaire. Rappelez-vous bien que printf n'a
pas de code de conversion comme x (l'affichage d'un numéro en notation
hexadécimale) ou o (l'affichage d'un numéro en notation octale) pour
l'affichage en notation binaire. Testez votre code avec les 5 numéros
suivants : 0, 4096, 65536, 65535, 1024


#### Astuce

-   Utilisez les boucles dans une boucle et `if` (Exercice 1.6)
-   Pour l'exercice 1.9, pensez à utiliser les opérateurs pour la
    manipulation de bits (&, | ou ~)

#### Fichiers

*binaire.c, bonjour.c, boucles.c, cercle.c, conditions.c, opérateurs2.c,
opérateurs.c, sizeof_types.c, variables.c*

#### Instructions

-   N'oubliez pas les commentaires (nom de fichier, objectif, auteurs
    etc.)
-   Créez un fichier README.md et ajoutez les détails concernant votre premier
    exercice.

#### Exemple

 
##### CONTRIBUTORS.md

```             
 1. NOM Prénom
 2. NOM Prénom
```             


##### README.md

```             
# Bibliothèques:               
* stdio.h               
* ..              

# Références:               
* groupe..               
* http://www.example.com               
* ..              

# Difficulté: ..               
* ..              

# Commentaires               
* commentaire 1               
* commentaire 2               
* ..             
```
