Année: 2024-2025
----------------

### Travaux pratiques 4

## Objectifs

-   Comprendre les fonctions, les fonctions récursives, la manipulation
    des fichiers et les listes.
-   Débogage à l'aide de gdb.

## Fichier main.c
Le fichier `main.c` est partagé par trois exercices différents (4.1, 4.2, 4.7). Créez un programme générique capable de résoudre ces trois exercices en utilisant une seule fonction `main()`. Utilisez des structures conditionnelles (`if-else`, `switch`, etc.) pour gérer les spécificités de chaque exercice.

1. Créez une fonction d’entrée pour chaque exercice.
2. Appelez ces fonctions depuis la fonction `main()`.
3. Demandez à l’utilisateur de choisir l’exercice à résoudre avant de l’exécuter.

## Exercice 4.0 [★]

Jusqu'à présent, nous avons utilisé `printf` pour identifier les sources d'erreurs. Avant de poursuivre les travaux pratiques, veuillez compléter [cet exercice](../gdb/README.md) simple pour apprendre à déboguer le code en utilisant **gdb**.

## Exercice 4.1 [★]

**Calcul avec opérateurs**


Dans ce programme, nous allons créer un ensemble de fonctions de calcul (somme, différence, produit, quotient, modulo, 'et', ou, négation) en utilisant des fichiers d'en-tête et de code source distincts. Les opérations seront effectuées sur deux variables numériques, num1 et num2. La sélection de l'opérateur se fera à l'aide d'une variable op contenant l'un des différents opérateurs (+, -, \*, /, %, &, |, ~). Le programme principal testera ces fonctions avec différentes valeurs de num1, num2 et op.

**Instructions**
- Créez un fichier d'en-tête *operator.h* dans lequel vous déclarez les prototypes des fonctions suivantes : somme, différence, produit, quotient, modulo, 'et', ou et négation. Assurez-vous que ces fonctions prennent en paramètres deux entiers (num1 et num2) et renvoient un entier correspondant au résultat de l'opération.
- Créez un fichier source *operator.c* dans lequel vous implémentez ces fonctions en utilisant une structure switch pour sélectionner l'opérateur approprié.
- Dans *main.c*, incluez le fichier d'en-tête *operator.h*.
- Dans la fonction principale (main), demandez à l'utilisateur de saisir deux entiers, num1 et num2, ainsi que l'opérateur souhaité (op).
- Utilisez la structure switch pour appeler la fonction appropriée en fonction de la valeur de op et affichez le résultat.
- Testez votre programme en utilisant différentes valeurs pour num1, num2 et op.

Voici un exemple d'exécution du programme :
```
Entrez num1 : 10
Entrez num2 : 5
Entrez l'opérateur (+, -, *, /, %, &, |, ~) : +
Résultat : 15
```

Assurez-vous de répéter ces étapes pour chaque opérateur pris en charge (+, -, \*, /, %, &, |, ~) et affichez le résultat correspondant à chaque opération. 


## Exercice 4.2 [★]

**Gestion de fichiers**

Ce programme a pour but de gérer des fichiers en utilisant deux fonctions définies dans les fichiers `fichier.c` et `fichier.h`. Les fonctions `lire_fichier` et `ecrire_dans_fichier` requièrent le nom d'un fichier en entrée. La fonction `lire_fichier` affiche le contenu du fichier à l'écran, tandis que `ecrire_dans_fichier` permet également à l'utilisateur de saisir un message qui sera ensuite enregistré dans le fichier.

**Instructions**
- Créez un fichier d'en-tête `fichier.h` où vous déclarez les prototypes des fonctions `lire_fichier` et `ecrire_dans_fichier`. Assurez-vous que `lire_fichier` prend une chaîne de caractères `nom_de_fichier` en entrée et `ecrire_dans_fichier` prend deux chaînes de caractères, `nom_de_fichier` et `message`.
- Créez un fichier source `fichier.c` dans lequel vous implémentez ces fonctions.
- Dans le fichier `main.c`, incluez le fichier d'en-tête `fichier.h`.
- Dans la fonction `main`, demandez à l'utilisateur s'il souhaite lire ou écrire dans un fichier.
- Si l'utilisateur choisit de lire un fichier, demandez-lui le nom du fichier à lire et appelez la fonction `lire_fichier` avec ce nom.
- Si l'utilisateur choisit d'écrire dans un fichier, demandez-lui le nom du fichier dans lequel il souhaite écrire et le message à écrire. Appelez ensuite la fonction `ecrire_dans_fichier` avec ces informations.
- Testez le programme en utilisant différents fichiers et messages.

Voici un exemple d'exécution du programme :
```
Que souhaitez-vous faire ?
1. Lire un fichier
2. Écrire dans un fichier
Votre choix : 1

Entrez le nom du fichier à lire : fichier.txt
Contenu du fichier fichier.txt :
Hello, world!

Que souhaitez-vous faire ?
1. Lire un fichier
2. Écrire dans un fichier
Votre choix : 2

Entrez le nom du fichier dans lequel vous souhaitez écrire : nouveau.txt
Entrez le message à écrire : Ceci est un nouveau fichier.
Le message a été écrit dans le fichier nouveau.txt.

Que souhaitez-vous faire ?
1. Lire un fichier
2. Écrire dans un fichier
Votre choix : 1

Entrez le nom du fichier à lire : nouveau.txt
Contenu du fichier nouveau.txt :
Ceci est un nouveau fichier.
```

Assurez-vous de gérer les erreurs éventuelles, telles que l'ouverture de fichiers inexistants, de manière appropriée dans votre code. 


## Exercice 4.3 [★★]

**Gestion d'une base de données étudiante**


Ce programme, `etudiant_bd.c`, permet de gérer une base de données d'étudiants en enregistrant leurs noms, prénoms, adresses et notes dans un fichier texte `etudiant.txt`. L'utilisateur est invité à fournir les détails de chaque étudiant via `scanf`, et ces informations sont ensuite stockées dans le fichier `etudiant.txt`.

**Instructions**
- Réutilisez le code de `etudiant2.c` pour la structure et la gestion des données des étudiants.
- Réutilisez également le code de `fichier.c` pour les fonctions de lecture et d'écriture de fichiers.
- Dans la fonction `main`, créez un tableau de structures pour stocker les informations des étudiants. Vous aurez besoin d'un tableau de taille 5.
- Utilisez une boucle `for` pour demander à l'utilisateur de saisir les détails (nom, prénom, adresse, notes) de chaque étudiant à l'aide de `scanf`.
- Après avoir saisi les informations de chaque étudiant, appelez la fonction `ecrire_dans_fichier` pour écrire ces détails dans le fichier `etudiant.txt`. Chaque étudiant occupe une ligne distincte dans le fichier.
- Assurez-vous que les détails sont correctement formatés dans le fichier `etudiant.txt`.
- Testez le programme en ajoutant les informations de 5 étudiants à la base de données. Assurez-vous que les informations sont correctement enregistrées dans le fichier.

Voici un exemple de saisie de données par l'utilisateur :

```
Entrez les détails de l'étudiant.e 1 :
Nom : Dupont
Prénom : Pierre
Adresse : Boulevard du 11 novembre 1918, Villeurbanne
Note 1 : 20
Note 2 : 30

Entrez les détails de l'étudiant.e 2 :
Nom : Martin
Prénom : Marie
Adresse : Rue de la République, Lyon
Note 1 : 18
Note 2 : 25

... (saisie pour les autres étudiants)

Les détails des étudiants ont été enregistrés dans le fichier etudiant.txt.
```

Assurez-vous que les données sont correctement stockées dans le fichier `etudiant.txt` avec le bon format.

## Exercice 4.4 [★★]

**Calculatrice en ligne de commande**


Ce programme, `calcule.c`, est une calculatrice en ligne de commande qui permet à l'utilisateur de réaliser des opérations arithmétiques et logiques simples entre deux nombres en utilisant différents opérateurs. Les opérations possibles sont l'addition (+), la soustraction (-), la multiplication (\*), la division (/), le modulo (%), l'opération ET (&), l'opération OU (|) et la négation (~).

**Instructions**
- Réutilisez le code de `operator.c` pour les fonctions de calcul.
- Dans la fonction `main`, analysez les arguments de la ligne de commande pour extraire l'opérateur et les deux numéros.
- Utilisez une structure de contrôle (par exemple, `switch`) pour sélectionner l'opération en fonction de l'opérateur fourni en ligne de commande.
- Appelez la fonction appropriée du code de `operator.c` en fonction de l'opérateur.
- Affichez le résultat de l'opération.
- Testez le programme en exécutant des commandes telles que :

   ```
   $ ./calcule + 10 5
   ```

   Vous devez afficher le résultat de l'addition (15).

   ```
   $ ./calcule '*' 7 8
   ```

   Vous devez afficher le résultat de la multiplication (56).

Assurez-vous que le programme gère correctement les différentes opérations et affiche les résultats de manière appropriée.

Exemple d'utilisation :

```
$ ./calcule + 15 8
Résultat : 23

$ ./calcule | 5 3
Résultat : 7
```

Le programme doit lire l'opérateur et les numéros depuis la ligne de commande et afficher le résultat de l'opération sélectionnée. 


## Exercice 4.5 [★★]

**Calcul de la factorielle**


Le programme `factorielle.c` implémente une fonction récursive pour calculer la factorielle d'un entier naturel donné. La factorielle d'un nombre n est le produit de tous les entiers de 1 à n. Par exemple, la factorielle de 5 est 5! = 5 x 4 x 3 x 2 x 1 = 120.

**Instructions**
- Dans la fonction `main()`, testez la fonction `factorielle` en appelant la fonction avec différentes valeurs d'entiers naturels.
- Affichez le résultat de chaque calcul de factorielle.

Exemple d'utilisation :
```c
#include <stdio.h>

// Définition de la fonction factorielle
int factorielle(int num) {
  if (num == 0) {
    printf("fact(0): 1\n");
    return 1;
  } else {
    int valeur = num * factorielle(num - 1);
    printf("fact(%d): %d\n", num, valeur);
    return (valeur);
  }
}

int main() {
  int n;
  
  // Testez la fonction factorielle avec différentes valeurs d'entiers naturels

  return 0;
}
```

Assurez-vous que les résultats correspondent aux factorielles attendues pour ces nombres.

## Exercice 4.6 [★★★]

 
**Recherche de phrases dans un fichier**


Le programme `chercherfichier.c` permet à l'utilisateur de rechercher une phrase dans un fichier donné. Le programme affiche les lignes du fichier où la phrase est présente, ainsi que le nombre de fois qu'elle apparaît dans chaque ligne.

**Instructions**
- Demandez à l'utilisateur de saisir le nom du fichier dans lequel il souhaite effectuer la recherche.
- Demandez à l'utilisateur de saisir la phrase qu'il souhaite rechercher.
- Ouvrez le fichier en utilisant les fonctions de lecture de fichiers en C (par exemple, `open`, `read`, `fopen`, `fgets`).
- Parcourez chaque ligne du fichier et comptez combien de fois la phrase recherchée apparaît dans chaque ligne.
- Si la phrase est présente dans une ligne, affichez le numéro de la ligne et le nombre de fois qu'elle apparaît dans cette ligne.
- Répétez le processus pour toutes les lignes du fichier.
- Fermez le fichier après avoir terminé.

Exemple d'utilisation:
```
$ ./chercherfichier fichier.txt
Entrez la phrase que vous souhaitez rechercher : exemple de phrase

Résultats de la recherche :
Ligne 10, 2 fois
Ligne 30, 1 fois
```

Assurez-vous que le programme fonctionne correctement en recherchant la phrase spécifiée dans le fichier et en affichant les résultats comme indiqué dans l'exemple ci-dessus.

## Exercice 4.7 [★★★]

**Gestion d'une liste de couleurs**


Le programme `liste.c` et `liste.h` permet de gérer une liste (simplement chaînée) de couleurs RGB. Il offre deux fonctions principales : `insertion` pour ajouter une couleur à la liste et `parcours` pour afficher toutes les couleurs de la liste.

**Instructions**
- Créez un fichier `liste.h` avec les déclarations de structures et de fonctions nécessaires pour gérer une liste de couleurs.
- Implémentez les fonctions `insertion` et `parcours` dans le fichier `liste.c`.
- La fonction `insertion` prend en entrée un pointeur vers une couleur RGB et un pointeur vers une liste de couleurs. Elle insère la couleur dans la liste.
- La fonction `parcours` prend en entrée un pointeur vers une liste de couleurs et affiche toutes les couleurs de la liste.
- Dans le fichier principal `main.c`, créez une liste de 10 couleurs en utilisant la structure `struct couleur` et ajoutez ces couleurs à l'aide de la fonction `insertion`.
- Affichez toutes les couleurs de la liste en utilisant la fonction `parcours`.

Exemple d'utilisation:
```c
#include "liste.h"
#include <stdio.h>

int main() {
    struct liste_couleurs ma_liste;
    init_liste(&ma_liste);

    struct couleur couleur1 = {0xFF, 0x00, 0x00, 0xFF}; // Exemple de couleur (rouge)
    struct couleur couleur2 = {0x00, 0xFF, 0x00, 0xFF}; // Exemple de couleur (vert)

    insertion(&couleur1, &ma_liste);
    insertion(&couleur2, &ma_liste);

    printf("Liste des couleurs :\n");
    parcours(&ma_liste);

    return 0;
}
```

Assurez-vous que le programme fonctionne correctement en ajoutant des couleurs à la liste et en affichant la liste de couleurs comme indiqué dans l'exemple ci-dessus. Vous pouvez ajouter dix couleurs de cette manière pour tester votre code.

## Fichiers

*calcule.c, etudiant_bd.c, fichier.c, liste.c, operator.c,
chercherfichier.c, factorielle.c, fichier.h, liste.h, operator.h*

## Instructions

- N'oubliez pas les commentaires (nom du fichier, objectif, auteurs, lignes importantes de code, etc.). Les commentaires sont notés.
- N'oubliez pas de mettre à jour le fichier README.md et d'ajouter les détails.
- Compte rendu au format .zip en un seul fichier.

