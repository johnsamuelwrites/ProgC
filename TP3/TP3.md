Année: 2023-2024
----------------

### Travaux pratiques 3

## Objectifs

-   Comprendre les les pointeurs et les structures.
-   Comprendre l'espace occupé par les différentes variables en mémoire en utilisant `sizeof`

## Exercice 3.1 [★]

**Comprendre la taille des types de données**


Écrivez un programme nommé *sizeof.c* pour comprendre la taille des différents types de données en C sur une machine 64 bits avec un système d'exploitation 64 bits. Le programme utilisera l'opérateur `sizeof` pour déterminer la taille en octets de différents types de données.

**Exemple**:
Si vous exécutez le programme, il devrait afficher les tailles en octets de ces types de données sur votre machine 64 bits. Les valeurs exactes peuvent varier en fonction de votre système, mais voici un exemple hypothétique :

```
La taille de int est : 4 octets
La taille de int* est : 8 octets
La taille de int** est : 8 octets
La taille de char* est : 8 octets
La taille de char** est : 8 octets
La taille de char*** est : 8 octets
La taille de float* est : 8 octets
La taille de float** est : 8 octets
La taille de float*** est : 8 octets
```

Remarque: Les tailles réelles peuvent varier en fonction de la machine et du compilateur utilisés.

## Exercice 3.2 [★]

**Trouver le numéro le plus grand et le plus petit dans un tableau**


Écrivez un programme en C nommé *grand_petit.c* qui crée un tableau de 100 entiers et calcule à la fois le numéro le plus grand et le numéro le plus petit dans ce tableau. Le programme doit générer des valeurs aléatoires pour remplir le tableau.

**Instructions**:
- Créez un tableau d'entiers de taille 100.
- Remplissez ce tableau avec des valeurs aléatoires comprises entre 1 et 1000 (inclus).
- Utilisez une boucle pour parcourir le tableau et déterminer le numéro le plus grand et le numéro le plus petit.
- Affichez à l'écran les valeurs du numéro le plus grand et du numéro le plus petit.

**Exemple**:
Si le tableau généré contient les valeurs [534, 209, 756, 92, 387, 650, 124, 978, 315, 48, ...], alors le programme devrait afficher :
```
Le numéro le plus grand est : 978
Le numéro le plus petit est : 48
```


## Exercice 3.3 [★★]


**Tri croissant d'un tableau**


Écrivez un programme nommé *tri.c* qui crée un tableau de 100 entiers, puis trie ces entiers par ordre croissant. Vous pouvez utiliser l'algorithme de tri de votre choix, par exemple, le tri à bulles, le tri par insertion, ou le tri rapide (quicksort). Assurez-vous que le tableau est correctement trié à la fin de l'exécution du programme.

**Exemple**:
Voici un exemple hypothétique de la sortie attendue :

```
Tableau non trié :
-2 9 1 5 8 7 3 6 4 ... (100 entiers au total)

Tableau trié par ordre croissant :
-2 3 4 5 5 6 7 8 9 ... (100 entiers au total)
```

Le programme devrait afficher le tableau initial non trié, puis le tableau trié par ordre croissant. Assurez-vous d'inclure la logique de tri dans votre code.

## Exercice 3.4 [★★]

**Recherche d'un entier dans un tableau**


Écrivez un programme en C nommé *chercher.c* qui crée un tableau de 100 entiers, puis recherche un entier spécifique dans ce tableau. Si l'entier est présent dans le tableau, affichez le message 'entier présent'. Sinon, affichez 'entier absent'.

**Exemple**:
Voici un exemple hypothétique de la sortie attendue :

```
Tableau :
-2 9 1 5 8 7 3 6 4 ... (100 entiers au total)

Entrez l'entier que vous souhaitez chercher : 7

Résultat : entier présent
```

Le programme devrait d'abord afficher le tableau initial, puis demander à l'utilisateur d'entrer l'entier qu'il souhaite chercher. Ensuite, il devrait afficher si l'entier est présent ou absent dans le tableau.

Assurez-vous d'inclure la logique de recherche dans votre code pour déterminer si l'entier est présent ou non.

## Exercice 3.5 [★★]

**Recherche dichotomique dans un tableau trié**


Référence: [Recherche Dichotomique](https://fr.wikipedia.org/wiki/Recherche_dichotomique>)

Écrivez un programme en C nommé *recherche_dichotomique.c* qui crée un tableau de 100 entiers triés par ordre croissant. Ensuite, utilisez l'algorithme de recherche dichotomique pour rechercher un entier spécifique dans ce tableau. Si l'entier est présent dans le tableau, affichez le message 'entier présent'. Sinon, affichez 'entier absent'.

**Exemple**:
Voici un exemple hypothétique de la sortie attendue :

```
Tableau trié :
-2 3 4 5 6 7 8 9 10 ... (100 entiers au total)

Entrez l'entier que vous souhaitez chercher : 5

Résultat : entier présent
```

Le programme devrait d'abord afficher le tableau trié, puis demander à l'utilisateur d'entrer l'entier qu'il souhaite chercher. Ensuite, il devrait utiliser l'algorithme de recherche dichotomique pour déterminer si l'entier est présent ou absent dans le tableau trié.

Assurez-vous d'inclure l'implémentation de l'algorithme de recherche dichotomique dans votre code pour effectuer la recherche efficacement.


## Exercice 3.6 [★★]

**Affichage des octets de différents types de données**


Écrivez un programme en C nommé *octets.c* qui utilise les opérateurs de pointeurs pour afficher les octets individuels de différentes variables de types de données, y compris short, int, long int, float, double et long double. L'objectif est de visualiser la représentation mémoire de ces types de données en octets.

**Exemple**:
La sortie du programme pourrait ressembler à ceci :

```
Octets de short :
 02 03

Octets de int :
 01 02 03 04

Octets de long int :
 01 02 03 04 05 06 07 08 

Octets de float :
 00 a0 40 11

Octets de double :
 00 00 00 00 00 00 f0 3f

Octets de long double :
 00 00 00 00 00 00 00 00 00 00 f0 7f
```

Le programme doit afficher les octets de chaque type de donnée sous forme de valeurs hexadécimales. Il devrait afficher l'ordre des octets dans la mémoire en fonction de l'architecture de la machine (petit-boutiste ou gros-boutiste). Assurez-vous d'utiliser les opérateurs de pointeurs pour accéder aux octets individuels de chaque variable.

Vous devrez déclarer des variables de chaque type, obtenir leurs adresses et afficher les octets correspondants.

## Exercice 3.7 [★★★]

**Compter les couleurs distinctes dans un tableau**


Écrivez un programme en C nommé *couleur_compteur.c* qui stocke 100 couleurs dans un tableau et affiche les couleurs distinctes avec leur nombre d'occurrences dans le tableau. Une couleur est représentée par quatre valeurs : R (rouge), G (vert), B (bleu) et A (alpha), chacune étant un octet.

**Exemple**:
Supposons que le tableau contienne les couleurs suivantes :

```
ff 0x23 0x23 0x45
ff 0x00 0x23 0x12
ff 0x23 0x23 0x45
```

Le programme doit afficher :

```
ff 0x23 0x23 0x45 : 2
ff 0x00 0x23 0x12 : 1
```

Le programme doit suivre ces étapes principales :
- Créer une structure pour stocker les détails d'une couleur, c'est-à-dire R, G, B et A.
- Créer un tableau de 100 couleurs en utilisant la structure définie.
- Compter le nombre de couleurs distinctes et afficher chaque couleur avec son nombre d'occurrences.

Pour cela, vous pouvez créer une nouvelle structure pour stocker les couleurs distinctes et leur nombre d'occurrences. Parcourez le tableau de couleurs, vérifiez si une couleur existe déjà dans la structure de couleurs distinctes, et mettez à jour le compteur approprié.

Le résultat final doit être l'affichage des couleurs distinctes et de leur nombre d'occurrences dans le tableau initial de couleurs.

## Exercice 3.8 [★★★]

**Rechercher une phrase dans un tableau de phrases**


Écrivez un programme en C nommé *chercher2.c* qui contient un tableau de 10 phrases (tableau de tableaux de caractères) et qui recherche si une phrase donnée est présente dans le tableau. L'objectif est de réaliser cette recherche sans utiliser les fonctions de bibliothèques standards ou externes.

**Exemple**:
Supposons que le tableau contienne les phrases suivantes :

```
 "Bonjour, comment ça va ?"
 "Le temps est magnifique aujourd'hui."
 "C'est une belle journée."
 "La programmation en C est amusante."
 "Les tableaux en C sont puissants."
 "Les pointeurs en C peuvent être déroutants."
 "Il fait beau dehors."
 "La recherche dans un tableau est intéressante."
 "Les structures de données sont importantes."
 "Programmer en C, c'est génial."
```

Si on recherche la phrase "La programmation en C est amusante.", le programme doit afficher "Phrase trouvée". Si on recherche "Je préfère le Python.", le programme doit afficher "Phrase non trouvée".

**Instructions**:
- Créez un fichier *chercher2.c* et ajoutez un tableau de 10 phrases en utilisant un tableau de tableaux de caractères (tableau de pointeurs de caractères).
- Écrivez le code pour rechercher une phrase donnée dans ce tableau.
- Pour rechercher une phrase, comparez chaque caractère de la phrase donnée avec les caractères de chaque phrase dans le tableau. Vous devrez parcourir les caractères un par un.
- Si vous trouvez une correspondance parfaite, affichez "Phrase trouvée". Sinon, continuez à parcourir les phrases du tableau.
- Si vous avez parcouru tout le tableau sans trouver de correspondance, affichez "Phrase non trouvée".

Le programme doit effectuer cette recherche sans utiliser de fonctions de bibliothèques standards ou externes pour la comparaison de chaînes de caractères. Il doit se baser sur la comparaison de caractères individuels pour déterminer si une phrase est présente dans le tableau ou non.

## Fichiers

*chercher.c, chercher2.c, couleur_compteur.c, couleurs.c, grand_petit.c, octets.c,
recherche_dichotomique.c, sizeof.c, tri.c*

## Instructions

- N'oubliez pas les commentaires (nom du fichier, objectif, auteurs, lignes importantes de code, etc.). Les commentaires sont notés.
- N'oubliez pas de mettre à jour le fichier README.md et d'ajouter les détails concernant votre deuxième exercice.
- Compte rendu au format .zip en un seul fichier.

