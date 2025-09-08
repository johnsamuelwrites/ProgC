Année: 2025-2026
----------------

# Travaux pratiques 1

## Objectifs
- Introduction aux bases de la programmation en C.
- Manipulation de variables et de types de données.
- Utilisation d'opérateurs arithmétiques et logiques.
- Maîtrise des boucles et des branchements conditionnels.
- Affichage d'informations complexes et conversion.
- Calculs mathématiques simples et utilisation de bibliothèques standard.

## Exercice 1.1 [★]

**Affichage de "Bonjour le Monde" en C**

Écrivez un programme C à l'intérieur du fichier *bonjour.c* qui affiche la chaîne de caractères "Bonjour le Monde!" à l'écran. Compilez le fichier *bonjour.c* en utilisant le compilateur GCC en exécutant la commande suivante dans le terminal :

   ```
   $ gcc bonjour.c
   ```

   Cela générera un fichier exécutable par défaut appelé *a.out*.

Exécutez le programme en utilisant la commande suivante :

   ```
   $ ./a.out
   ```

   Vous devriez voir le message "Bonjour le Monde!" affiché à l'écran.

Vous pouvez également renommer votre exécutable en utilisant l'option '-o' lors de la compilation. Voici comment faire :

   ```
   $ gcc -o bonjour bonjour.c
   ```

   Cela générera un exécutable nommé *bonjour*.

Exécutez le programme avec le nouveau nom d'exécutable :

   ```
   $ ./bonjour
   ```

Si vous souhaitez voir tous les avertissements (*warnings*) pendant la compilation, vous pouvez utiliser les options `-Wall` et `-Wextra` lors de la compilation. Voici comment faire :

   ```
   $ gcc -Wall -Wextra -o bonjour bonjour.c
   ```

   Cela générera également un exécutable nommé *bonjour*, mais vous serez averti de tout problème potentiel dans votre code lors de la compilation.

Exécutez le programme avec les avertissements activés :

   ```
   $ ./bonjour
   ```

## Exercice 1.2 [★]

**Calcul de l'aire et du périmètre d'un cercle en C**

À l'intérieur du fichier *cercle.c*, écrivez un programme en C qui calcule à la fois l'aire et le périmètre d'un cercle. Utilisez une variable `rayon` de type `float` ou `double` pour stocker le rayon du cercle.

À l'intérieur de la fonction `main()`, effectuez les opérations suivantes :
- Mettez la valeur du rayon du cercle.
- Calculez l'aire du cercle en utilisant la formule aire = pi * rayon * rayon (où pi peut être approximé à 3.14159).  Vous pouvez utiliser la constante M_PI de <math.h> pour la valeur de pi (π), si vous le souhaitez (ce n'est pas obligatoire).
- Calculez le périmètre du cercle en utilisant la formule périmètre = 2 * pi * rayon.

Affichez les valeurs calculées de l'aire et du périmètre du cercle.

Compilez le fichier *cercle.c* en utilisant GCC pour créer un exécutable nommé "cercle". Vous pouvez utiliser la commande suivante dans le terminal :

   ```
   $ gcc -o cercle cercle.c -lm
   ```

   L'option `-lm` est utilisée pour lier la bibliothèque mathématique standard (<math.h>).

Exécutez le programme en utilisant la commande suivante :

   ```
   $ ./cercle
   ```

   Assurez-vous que le fichier exécutable a été correctement généré et que vous pouvez obtenir les valeurs de l'aire et du périmètre du cercle en fonction du rayon que vous avez entré, le tout à l'intérieur de la fonction `main()`.

## Exercice 1.3 [★]

**Tailles des types de base**

Écrivez un programme nommé *sizeof_types.c* dans la fonction `main()` qui affiche la taille en octets des différents types de base. Assurez-vous d'inclure à la fois les versions signées (`signed`) et non-signées (`unsigned`) lorsque cela est pertinent.

Les types à afficher sont les suivants :

i. `char`

ii. `short`

iii. `int`

iv. `long int`

v. `long long int`

vi. `float`

vii. `double`

viii. `long double`

Compilez et exécutez le programme pour obtenir les tailles de ces types de données en octets. Assurez-vous que toutes les instructions sont incluses dans la fonction `main()`.

**Attention** : il n'existe pas de versions `unsigned` ou `signed` pour les types de données suivants :

- `float`
- `double`
- `long double`

## Exercice 1.4 [★★]

**Affectation et affichage des variables de types de base**

Écrivez un programme nommé *variables.c* dans la fonction `main()` qui affecte et affiche les valeurs des variables de différents types de base. Assurez-vous d'utiliser à la fois les versions signées (`signed`) et non-signées (`unsigned`) lorsque cela est pertinent.

Les types de base à traiter sont les suivants :

i. `char`

ii. `short`

iii. `int`

iv. `long int`

v. `long long int`

vi. `float`

vii. `double`

viii. `long double`

Dans le programme, affectez une valeur à chaque variable de type de base, puis affichez la valeur de chaque variable. Testez le programme en compilant et en l'exécutant.

## Exercice 1.5 [★★]

**Utilisation des opérateurs arithmétiques et logiques**

Écrivez un programme nommé *opérateurs.c* dans la fonction `main()` qui utilise deux variables `a` et `b` avec les valeurs suivantes :

i. `a` = 16

ii. `b` = 3

Dans le programme, testez les différents opérateurs arithmétiques et logiques en effectuant les actions suivantes :

1. Additionnez `a` et `b` et affichez le résultat.

2. Soustrayez `b` de `a` et affichez le résultat.

3. Multipliez `a` par `b` et affichez le résultat.

4. Divisez `a` par `b` et affichez le résultat.

5. Utilisez l'opérateur de modulo (%) pour calculer le reste de la division de `a` par `b` et affichez le résultat.

6. Utilisez un opérateur de comparaison pour vérifier si `a` est égal à `b` et affichez le résultat sous forme de booléen.

7. Utilisez un opérateur de comparaison pour vérifier si `a` est supérieur à `b` et affichez le résultat sous forme de booléen.

Testez le programme en compilant et en l'exécutant pour vous assurer que les opérateurs arithmétiques et logiques sont correctement utilisés.

## Exercice 1.6 [★★]

**Affichage d'un triangle rectangle avec des boucles**

Écrivez un programme nommé *boucles.c* dans la fonction `main()` qui utilise des boucles `for` pour afficher un triangle rectangle. La taille du triangle sera déterminée par la valeur de la variable `compteur`, qui doit être strictement inférieure à 10.

Voici un exemple de ce que le programme doit afficher lorsque `compteur` est égal à 5 :

```
*
* *
* # *
* # # *
* * * * *
```

Testez le code en utilisant différentes valeurs de `compteur`.

Après avoir réussi avec des boucles `for`, écrivez une nouvelle version du code en utilisant soit une boucle `while` ou `do..while`. Vous pouvez utiliser des branchements conditionnels (`if`) et inconditionnels (`break` ou `continue`) pour atteindre cet objectif.

**Suggestions pour le programme :**

-   Utilisez les boucles dans une boucle et `if`

## Exercice 1.7 [★★]

**Conditions et boucles avec divisibilité**

Écrivez un programme en C nommé *conditions.c* qui effectue les tâches suivantes :

1. Utilisez une boucle `for` pour parcourir les nombres de 1 à 1000.

2. Pour chaque nombre, vérifiez les conditions suivantes :
   - Si le nombre est divisible par 5 ou par 7, ajoutez-le à une variable `somme`.
   - Si le nombre est divisible par 11, ne l'ajoutez pas à `somme` et passez directement au nombre suivant (utilisez `continue`).

3. Si la somme dépasse 5000 à tout moment, arrêtez immédiatement la boucle (utilisez `break`).

4. Affichez la somme finale après avoir terminé la boucle ou après avoir interrompu le calcul si la somme a dépassé 5000.

## Exercice 1.8 [★★★]

**Utilisation de l'opérateur switch pour des opérations mathématiques**

Écrivez un programme nommé *calculs.c* dans la fonction `main()` qui utilise trois variables :

1. `num1` (entier)
2. `num2` (entier)
3. `op` (un caractère)

La variable `op` contient l'un des différents opérateurs mathématiques ou de bits suivants : '+', '-', '\*', '/', '%', '&', '|', '~'.

Utilisez une structure `switch` pour déterminer l'opération à effectuer en fonction de la valeur de `op`. Par exemple, si `op` est égal à '+', le programme doit effectuer l'addition des deux variables `num1` et `num2`. Si `op` est égal à '&', le programme doit effectuer une opération ET, et ainsi de suite.

Testez votre programme avec différentes valeurs de `num1`, `num2`, et `op` pour vous assurer que les opérations sont correctement effectuées en fonction de la valeur de `op`.

## Exercice 1.9 [★★★]

**Affichage d'un nombre en format binaire**

Écrivez un programme nommé *binaire.c* dans la fonction `main()` qui utilise une boucle `for` pour afficher une variable de type `int` en format binaire. Il est important de noter que la fonction `printf` en C n'a pas de code de conversion dédié pour afficher un nombre en notation binaire, contrairement à 'x' pour l'hexadécimal ou 'o' pour l'octal.

Pour résoudre ce problème, vous devrez développer votre propre code pour convertir un nombre entier en sa représentation binaire. Utilisez la division par 2 et le reste de la division (%) pour obtenir chaque chiffre binaire. Affichez ensuite ces chiffres de manière appropriée pour obtenir la représentation binaire complète du nombre.

Testez votre code en utilisant les cinq nombres suivants : 0, 4096, 65536, 65535, 1024, et affichez leur représentation binaire correspondante.

**Suggestions pour le programme :**

Pensez à utiliser les opérateurs pour la manipulation de bits (&, | ou ~)

##  Exercice 1.10 [★★★]

**Génération d'une pyramide de nombres**

**Objectif :** Écrivez un programme nommé *pyramide.c* pour générer et afficher une pyramide de nombres en utilisant des boucles imbriquées. Ce motif utilise des nombres dans un motif spécifique.

**Instructions :**

1. **Déclaration des variables :**
   - Déclarez une variable entière `n` pour définir la hauteur de la pyramide (par exemple, 5).
   - Déclarez des variables entières `i` et `j` pour les boucles imbriquées utilisées pour générer le motif.

2. **Initialisation :**
   - Initialisez `n` à une valeur fixe qui détermine la hauteur de la pyramide (par exemple, 5).

3. **Boucle de génération de la pyramide :**
   - Utilisez une boucle `for` pour itérer sur chaque niveau de la pyramide, de 1 à `n`.
     - À chaque niveau, utilisez une boucle `for` pour afficher les espaces nécessaires afin de centrer les nombres.
     - Utilisez une autre boucle `for` pour afficher les nombres dans ce niveau de la pyramide.

4. **Affichage des résultats :**
   - Après avoir généré chaque niveau de la pyramide, passez à la ligne suivante.

5. **Terminaison :**
   - Une fois la pyramide complète, affichez un message indiquant que la génération de la pyramide est terminée.

**Exemple de pyramide générée pour `n = 5` :**

```
    1
   121
  12321
 1234321
123454321
```

**Détails supplémentaires :**

- **Espaces :** Assurez-vous que chaque ligne est correctement centrée en affichant des espaces avant les nombres.
- **Nombres :** Chaque niveau de la pyramide doit contenir des nombres croissants de 1 jusqu'à l'indice du niveau, puis décroissants.
- **Boucles imbriquées :** Utilisez des boucles imbriquées pour gérer les espaces et les nombres sur chaque ligne.

**Suggestions pour le programme :**

- Vous pouvez ajuster `n` pour générer des pyramides de différentes hauteurs.
- Essayez de comprendre comment les boucles imbriquées interagissent pour créer le motif.


## Fichiers

*binaire.c, bonjour.c, boucles.c, calculs.c, cercle.c, conditions.c,
opérateurs.c, sizeof_types.c, variables.c, pyramide.c*

## Instructions

- N'oubliez pas d'ajouter des commentaires dans votre code (nom du fichier, objectif, auteurs, lignes importantes, etc.). Les commentaires seront notés.
- Assurez-vous de mettre à jour le fichier **README.md** en y ajoutant les détails nécessaires.
- Soumettez votre travail sous forme de fichier **.zip** en un seul document.

### Exemple

 
#### CONTRIBUTORS.md

```             
 1. NOM Prénom
 2. NOM Prénom
```             


#### README.md

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
