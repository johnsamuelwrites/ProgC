Année: 2023-2024
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

**Calcul de l'Aire et du Périmètre d'un Cercle en C**

À l'intérieur du fichier *cercle.c*, écrivez un programme en C qui calcule à la fois l'aire et le périmètre d'un cercle. Utilisez une variable `rayon` de type `float` ou `double` pour stocker le rayon du cercle.

À l'intérieur de la fonction `main()`, effectuez les opérations suivantes :
- Mettez la valeur du rayon du cercle.
- Calculez l'aire du cercle en utilisant la formule Aire = pi * rayon * rayon (où pi peut être approximé à 3.14159).
- Calculez le périmètre du cercle en utilisant la formule Périmètre = 2 * pi * rayon.

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

**Tailles des Types de Base**

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

## Exercice 1.4 [★★]

**Affectation et Affichage des Variables de Types de Base**

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

**Utilisation des Opérateurs Arithmétiques et Logiques**

Écrivez un programme nommé *operateurs.c* dans la fonction `main()` qui utilise deux variables `a` et `b` avec les valeurs suivantes :

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

**Affichage d'un Triangle Rectangle avec des Boucles**

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

## Exercice 1.7 [★★]

**Conditions et Boucles avec Divisibilité**

Écrivez un programme nommé *conditions.c* dans la fonction `main()` qui utilise les boucles (`for`, `while` ou `do..while`) et les branchements inconditionnels (`break` ou `continue`) pour afficher les nombres inférieurs ou égaux à 1000 qui satisfont les conditions suivantes :

a. Sont divisibles par 2 et 15 simultanément.

b. Sont divisibles par 103 ou 107.

c. Sont divisibles par 7 ou 5, mais ne sont pas divisibles par 3.

Utilisez les boucles et les branchements conditionnels appropriés pour chaque cas. Testez le programme en compilant et en l'exécutant pour afficher les nombres qui répondent à ces critères.


## Exercice 1.8 [★★★]

**Utilisation de l'opérateur switch pour des opérations mathématiques**

Écrivez un programme nommé *operateurs2.c* dans la fonction `main()` qui utilise trois variables :

1. `num1` (entier)
2. `num2` (entier)
3. `op` (un caractère)

La variable `op` contient l'un des différents opérateurs mathématiques ou de bits suivants : '+', '-', '\*', '/', '%', '&', '|', '~'.

Utilisez une structure `switch` pour déterminer l'opération à effectuer en fonction de la valeur de `op`. Par exemple, si `op` est égal à '+', le programme doit effectuer l'addition des deux variables `num1` et `num2`. Si `op` est égal à '&', le programme doit effectuer une opération ET, et ainsi de suite.

Testez votre programme avec différentes valeurs de `num1`, `num2`, et `op` pour vous assurer que les opérations sont correctement effectuées en fonction de la valeur de `op`.

## Exercice 1.9 [★★★]

**Affichage d'un Nombre en Format Binaire**

Écrivez un programme nommé *binaire.c* dans la fonction `main()` qui utilise une boucle `for` pour afficher une variable de type `int` en format binaire. Il est important de noter que la fonction `printf` en C n'a pas de code de conversion dédié pour afficher un nombre en notation binaire, contrairement à 'x' pour l'hexadécimal ou 'o' pour l'octal.

Pour résoudre ce problème, vous devrez développer votre propre code pour convertir un nombre entier en sa représentation binaire. Utilisez la division par 2 et le reste de la division (%) pour obtenir chaque chiffre binaire. Affichez ensuite ces chiffres de manière appropriée pour obtenir la représentation binaire complète du nombre.

Testez votre code en utilisant les cinq nombres suivants : 0, 4096, 65536, 65535, 1024, et affichez leur représentation binaire correspondante.

## Astuce

-   Utilisez les boucles dans une boucle et `if` (Exercice 1.6)
-   Pour l'exercice 1.9, pensez à utiliser les opérateurs pour la
    manipulation de bits (&, | ou ~)

## Fichiers

*binaire.c, bonjour.c, boucles.c, cercle.c, conditions.c, opérateurs2.c,
opérateurs.c, sizeof_types.c, variables.c*

## Instructions

-   N'oubliez pas les commentaires (nom de fichier, objectif, auteurs
    etc.)
-   Créez un fichier README.md et ajoutez les détails concernant votre premier
    exercice.

## Exemple

 
### CONTRIBUTORS.md

```             
 1. NOM Prénom
 2. NOM Prénom
```             


### README.md

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
