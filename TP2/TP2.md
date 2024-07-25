Année: 2024-2025
----------------

### Travaux pratiques 2

## Objectifs

- Comprendre les opérations mathématiques et la manipulation de chaînes de caractères.
- Maîtriser la manipulation de bits et les opérations de masquage.
- Pratiquer la création de boucles pour générer des séquences
- Acquérir des compétences en gestion de données structurées
- Expérimenter la manipulation de variables de base avec des pointeurs.
- Développer des compétences en manipulation de tableaux à l'aide de pointeurs pour accéder et modifier les données.

Ces objectifs couvrent les concepts clés de la programmation en C abordés dans les exercices.

## Exercice 2.1 [★]


**Calcul de la Puissance en C**

L'objectif de cet exercice est d'écrire un programme en C nommé *puissance.c* qui prend deux entiers, *a* et *b*, en entrée et affiche la valeur de *a* élevé à la puissance *b*. Par exemple, si vous exécutez le programme avec les valeurs *a* = 2 et *b* = 3, il doit afficher la valeur 8. Vous devez réaliser ce calcul sans utiliser la fonction `pow()` de la bibliothèque `<math.h>` ni demander à l'utilisateur d'entrer les valeurs.

**Instructions :**

- Déclarez deux variables d'entier (*a* et *b*) et assignez-leur les valeurs pour lesquelles vous souhaitez calculer la puissance.
- Déclarez une variable pour stocker le résultat de la puissance.
- Utilisez une boucle `for` ou une boucle `while` pour calculer la puissance en multipliant *a* par lui-même *b* fois. Vous pouvez utiliser une variable supplémentaire pour maintenir le résultat.
- Affichez le résultat à l'écran en utilisant la fonction `printf`.
- Compilez et exécutez le programme pour vérifier si le résultat affiché est correct pour les valeurs de *a* et *b* que vous avez définies.

Assurez-vous que votre programme fonctionne correctement en calculant la puissance de *a* à la puissance *b* sans utiliser la fonction `pow()` de la bibliothèque `<math.h>`.

## Exercice 2.2 [★]

**Vérification des Bits en C**

L'objectif de cet exercice est d'écrire un programme en C nommé *bits.c* qui vérifie si les 4ème et 20ème bits de gauche d'une variable entière `d` sont à 1 en représentation binaire. Si les deux bits sont 1, le programme doit afficher 1 ; sinon, il doit afficher 0. Vous devez réaliser cette vérification sans utiliser de fonctions et en plaçant toutes les instructions à l'intérieur de la fonction `main()`.

**Instructions :**

- Déclarez une variable entière `d` et initialisez-la avec la valeur pour laquelle vous souhaitez vérifier les bits.
- Utilisez des opérations de manipulation de bits pour extraire les 4ème et 20ème bits de gauche de la variable `d`. Vous pouvez utiliser des opérateurs de décalage et des opérations de masquage.
- Vérifiez si les deux bits extraits sont égaux à 1.
- Affichez le résultat de la vérification à l'écran en utilisant la fonction `printf`. Vous devez afficher 1 si les bits sont égaux à 1 et 0 sinon.
- Compilez et exécutez le programme pour vérifier si le résultat affiché est correct pour la valeur de `d` que vous avez définie.

Assurez-vous que votre programme fonctionne correctement en vérifiant les bits de gauche de la variable `d` et en affichant le résultat.


## Exercice 2.3 [★]

**Génération de la Suite de Fibonacci en C**

La suite de Fibonacci est une séquence d'entiers définie comme suit :

- U0 = 0
- U1 = 1
- Un = Un-1 + Un-2

L'objectif de l'exercice est d'écrire un programme en C nommé *fibonacci.c* qui génère et affiche les n termes de la suite de Fibonacci, c'est-à-dire U0, U1, U2, ..., Un.
À l'intérieur de ce fichier, écrivez un programme en langage C qui génère les n termes de la suite de Fibonacci.
Utilisez une boucle pour calculer les termes de la suite jusqu'à Un en utilisant la formule Un = Un-1 + Un-2.
Affichez les termes générés de la suite de Fibonacci à l'écran.

**Exemple :**

Si l'utilisateur saisit la valeur 7 pour n, le programme devrait afficher la suite de Fibonacci jusqu'à U7 : 0, 1, 1, 2, 3, 5, 8.


## Exercice 2.4 [★★]

**Manipulation de Chaînes de Caractères en C**

L'objectif de cet exercice est d'écrire un programme en C nommé *chaine.c* qui effectue trois opérations de base sur des chaînes de caractères, le tout sans utiliser de bibliothèques standard ou externes :

- Calculer le nombre de caractères dans une chaîne de caractères.
- Copier une chaîne de caractères dans une autre chaîne de caractères.
- Concaténer deux chaînes de caractères.

**Instructions :**

- Pour calculer le nombre de caractères dans une chaîne, vous devrez parcourir la chaîne caractère par caractère jusqu'à atteindre la fin (caractère nul `\0`) et compter les caractères.
- Pour copier une chaîne de caractères dans une autre, vous devrez également parcourir la chaîne source caractère par caractère et les copier dans la chaîne de destination.
- Pour concaténer deux chaînes de caractères, vous devrez d'abord trouver la fin de la première chaîne, puis ajouter les caractères de la deuxième chaîne à partir de cet emplacement.

**Exemple :**

Voici un exemple d'utilisation de ce programme :

- Si vous entrez une chaîne de caractères "Hello" et une autre chaîne " World!", le programme devrait être capable de calculer la longueur totale des caractères, de copier la première chaîne dans une autre, et de concaténer les deux chaînes pour obtenir "Hello World!".

Assurez-vous de respecter les consignes en évitant l'utilisation de bibliothèques standard ou externes pour ces opérations.

## Exercice 2.5 [★★]


**Gestion des Données Étudiantes en C**

L'objectif de cet exercice est de créer un programme en C nommé *etudiant.c* qui gère les informations de cinq étudiant.e.s en utilisant des tableaux. Pour chaque étudiant.e, vous devez stocker les informations suivantes : nom, prénom, adresse, et notes dans deux modules (Programmation en C et Système d'exploitation).

**Instructions :**

- Déclarez deux tableaux, un pour les noms et prénoms des étudiant.e.s et un autre pour leurs adresses. Déclarez également deux tableaux pour stocker les notes dans les deux modules.
- Remplissez les tableaux avec les informations de cinq étudiant.e.s. Vous pouvez utiliser des chaînes de caractères pour les noms, prénoms et adresses, ainsi que des nombres à virgule flottante pour les notes. Assurez-vous de respecter l'ordre des données (nom, prénom, adresse, note en programmation, note en système d'exploitation).
- Utilisez une boucle pour parcourir les tableaux et afficher les détails de chaque étudiant.e, y compris le nom, le prénom, l'adresse, et les notes dans les modules. Vous pouvez utiliser la fonction `printf` pour afficher les informations.

Assurez-vous que votre programme fonctionne correctement en stockant et en affichant les détails des étudiant.e.s. 

## Exercice 2.6 [★★] 

**Gestion des Données d'Étudiant.e.s en C avec des Structures**

L'objectif de cet exercice est d'écrire un programme en C nommé *etudiant2.c* qui gère les données de 5 étudiant.e.s en utilisant des structures (`struct`). Les détails pour chaque étudiant.e restent les mêmes que pour l'exercice précédent, comprenant des informations telles que le nom, le prénom, l'adresse, les notes, etc.

**Instructions :**
- Définissez une structure (`struct`) qui représente les informations d'un étudiant.e. La structure devrait inclure des membres pour le nom, le prénom, l'adresse, les notes, etc.
- Utilisez la fonction `strcpy` pour initialiser les noms, prénoms, ou d'autres membres de la structure.
- Créez un tableau de 5 éléments de cette structure pour représenter 5 étudiant.e.s.
- Une fois que les données de tous les étudiant.e.s ont été saisies, affichez-les à l'écran.

**Exemple :**

Un exemple d'utilisation de ce programme pourrait être :

- L'utilisateur entre les détails de 5 étudiant.e.s, puis le programme affiche ces informations, par exemple :

  ```
  Étudiant.e 1 :
  Nom : Dupont
  Prénom : Marie
  Adresse : 20, Boulevard Niels Bohr, Lyon
  Note 1 : 16.5
  Note 2 : 12.1

  Étudiant.e 2 :
  Nom : Martin
  Prénom : Pierre
  Adresse : 22, Boulevard Niels Bohr, Lyon
  Note 1 : 14.0
  Note 2 : 14.1

  ...
  ```

Assurez-vous de respecter les consignes en utilisant des structures pour stocker les données des étudiant.e.s.

## Exercice 2.7 [★★]


**Gestion des Couleurs en Format RGBA avec des Structures**

L'objectif de cet exercice est d'écrire un programme en C nommé *couleurs.c* qui utilise des structures (`struct`) pour représenter des couleurs au format RGBA (rouge, vert, bleu, alpha). Chaque composant de couleur est représenté par un octet.

**Instructions :**

- Définissez une structure (`struct`) qui représente une couleur au format RGBA. La structure devrait inclure des membres pour les composants rouge, vert, bleu et alpha.
- Créez un tableau de 10 éléments de cette structure pour stocker 10 couleurs différentes.
- Initialisez les couleurs en utilisant la notation hexadécimale. Par exemple, le composant rouge (R) peut être initialisé à `0xef`, le composant vert (G) à `0x78`, le composant bleu (B) à `0x12`, et le composant alpha (A) à `0xff`.
- Après avoir initialisé le tableau de couleurs, affichez-les à l'écran en affichant les valeurs de chaque composant (R, G, B, A) pour chaque couleur.

**Exemple :**

Un exemple d'utilisation de ce programme pourrait être :

- Le programme affiche les détails des 10 couleurs, par exemple :

  ```
  Couleur 1 :
  Rouge : 239
  Vert : 120
  Bleu : 18
  Alpha : 255

  Couleur 2 :
  Rouge : 44
  Vert : 200
  Bleu : 100
  Alpha : 255

  ...
  ```

Assurez-vous de respecter les consignes en utilisant une structure pour représenter les couleurs et en initialisant les couleurs en notation hexadécimale.

## Exercice 2.8 [★★]

**Manipulation des Variables de Types de Base avec des Pointeurs**

L'objectif de cet exercice est de réutiliser le programme *variables.c* en créant un nouveau programme en C nommé *ptrvariables.c*. Ce programme doit affecter et afficher les valeurs des variables de différents types de base (char, short, int, long int, long long int, float, double, long double) en utilisant leurs adresses avec des pointeurs. En outre, le programme doit afficher à la fois l'adresse et la valeur de ces variables avant et après la manipulation par leurs adresses en utilisant les pointeurs.

**Instructions :**

- Réutilisez les variables de différents types de base (char, short, int, long int, long long int, float, double, long double) à partir du programme *variables.c*.
- Utilisez des pointeurs pour stocker les adresses de ces variables.
- Avant la manipulation des variables par leurs adresses, affichez à l'écran l'adresse et la valeur de chaque variable en hexadécimal.
- Effectuez la manipulation des variables en utilisant les pointeurs (par exemple, modifiez la valeur d'une variable via son pointeur).
- Après la manipulation, réaffichez à l'écran l'adresse et la valeur actualisée de chaque variable en hexadécimal.
- Assurez-vous que les valeurs sont affichées en hexadécimal, comme indiqué dans l'exemple.

**Exemple :**

Un exemple d'utilisation de ce programme pourrait être :

- Le programme affiche les adresses et les valeurs des variables avant et après la manipulation par les pointeurs, par exemple :

  ```
  Avant la manipulation :
  Adresse de i : 0x7ffd779efc50, Valeur de i : a47865ff
  Adresse de f : 0x7ffd779efc4c, Valeur de f : 40000000

  Après la manipulation :
  Adresse de i : 0x7ffd779efc50, Valeur de i : a47865fe
  Adresse de f : 0x7ffd779efc4c, Valeur de f : 3f800000
  ```

Assurez-vous de respecter les consignes en utilisant des pointeurs pour manipuler les variables et en affichant les adresses et les valeurs en hexadécimal.

## Exercice 2.9 [★★★]

**Manipulation de Tableaux avec des Pointeurs**

Dans cet exercice, l'objectif est de créer un programme en C nommé *tableauptr.c* pour gérer deux tableaux différents : un tableau d'entiers (int) et un tableau de nombres à virgule flottante (float). Le programme doit remplir ces tableaux avec des valeurs aléatoires. Ensuite, pour les deux tableaux, il doit multiplier par 3 la valeur à chaque position dont l'indice est divisible par 2. La particularité de cet exercice est que vous ne devez pas utiliser la notation indicielle (par exemple, i[3], i[5], etc.) pour parcourir les tableaux, mais plutôt utiliser des pointeurs.

**Instructions :**
- Déclarez deux tableaux, l'un d'entiers (int) et l'autre de nombres à virgule flottante (float).
- Utilisez une boucle pour remplir les tableaux avec des valeurs aléatoires. Vous pouvez utiliser la fonction `rand()` pour générer des valeurs aléatoires. Assurez-vous d'utiliser la fonction `srand(time(NULL))` pour initialiser la graine du générateur de nombres aléatoires.
- Utilisez des pointeurs pour parcourir les tableaux et effectuer la multiplication par 3 sur les valeurs dont l'indice est divisible par 2.
- Assurez-vous que le programme affiche les tableaux avant et après la multiplication par 3.

**Exemple :**

Un exemple d'utilisation de ce programme pourrait être :

- Le programme génère des tableaux aléatoires, par exemple :

  Tableau d'entiers (avant la multiplication par 3) :
  ```
  11, 12, 34, 56, 78, 90, 123, 45, 67, 89, 100
  ```

  Tableau de nombres à virgule flottante (avant la multiplication par 3) :
  ```
  2.9, 1.23, 4.56, 7.89, 0.12, 3.45, 6.78, 9.01, 2.34, 5.67, 8.90
  ```

- Le programme effectue la multiplication par 3 sur les valeurs dont l'indice est divisible par 2 :

  Tableau d'entiers (après la multiplication par 3) :
  ```
  11, 12, 34, 168, 78, 270, 123, 135, 67, 267, 100
  ```

  Tableau de nombres à virgule flottante (après la multiplication par 3) :
  ```
  2.9, 1.23, 4.56, 23.67, 0.12, 10.35, 6.78, 27.03, 2.34, 17.01, 8.90
  ```

Assurez-vous que le programme fonctionne correctement en utilisant des pointeurs pour parcourir les tableaux et effectuer la multiplication par 3 sur les valeurs appropriées.

## Astuce

-   Pour l'exercice 2.5, pensez à utiliser \*(s+i) etc (e.g, si s est
    un pointeur de type int \*).

## Fichiers

*bits.c, chaine.c, couleurs.c, etudiant2.c, etudiant.c, fibonacci.c,
ptrvariables.c, puissance.c, tableauptr.c*

## Instructions

- N'oubliez pas les commentaires (nom du fichier, objectif, auteurs, lignes importantes de code, etc.). Les commentaires sont notés.
- N'oubliez pas de mettre à jour le fichier README.md et d'ajouter les détails concernant votre deuxième exercice.
- Compte rendu au format .zip en un seul fichier.

