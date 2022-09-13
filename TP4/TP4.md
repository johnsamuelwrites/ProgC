Année: 2022-2023
----------------

### Travaux pratiques 4

#### Objectifs

-   Comprendre les fonctions, les fonctions récursives, la manipulation
    du répertoire et les listes.

#### Exercice 4.1 [★]

 
En réutilisant le code de l'*operators2.c* (TP2), écrivez un programme
en créant deux fichiers *operator.h* et *operator.c*. Dans *operator.h*,
déclarez les fonctions suivantes : somme, différence, produit, quotient,
modulo, 'et', ou et négation qui utilisent deux variables num1
(entier), num2 (entier). Implémentez ces fonctions dans *operator.c*.
Pour l'opérateur négation, utilisez seulement un numéro. Considérez une
variable op qui contient un de ces différents opérateurs. (+, -, \*, /,
%, &, |, ~). Utilisez switch et réutilisez le code de votre TP2, mais
cette fois, si op est égal à '+', le programme doit appeler la fonction
'somme' etc. Écrivez un programme *main.c* et testez votre programme avec différentes valeurs de num1,
num2, op.


#### Exercice 4.2 [★]

 
Écrivez un programme en créant deux fichiers *fichier.c* et fichier.h.
Dans fichier.h, déclarez les fonctions lire_fichier(char
\*nom_de_fichier) et ecrire_dans_fichier(char \*nom_de_fichier,
char \*message). La fonction lire_fichier prend le nom du fichier et
affiche son contenu à l'écran. ecrire_dans_fichier prend le nom du
fichier et écrire le message saisi par l'utilisateur dans le fichier.
Testez ces fonctions en utilisant le fichier principal (*main.c*).


#### Exercice 4.3 [★★]

 
En réutilisant le code de l'*etudiant2.c* (TP2) et *fichier.c*, écrivez
un fichier *etudiant_bd.c* qui sauvegarde les noms, prénoms, adresses,
et les notes dans un fichier etudiant.txt pour 5 étudiant(e)s (une ligne
pour chaque étudiant(e)). Testez votre code. Cette fois, vous demanderez
à l'utilisateur en utilisant scanf pour les détails de chaque étudiant.
Par exemple, etudiant.txt

```               
Dupont, Pierre, Boulevard du 11 novembre 1918, Villeurbanne, 20, 30               ...             
```


#### Exercice 4.4 [★★]

 
En réutilisant le code de l'*operator.c* (voir ci-dessus), créer une
commande calcule (fichier: *calcule.c*) qui utilise l'interface en
ligne de commande. Il y a trois options pour cette commande: opérateur
(+, -, *, /, %, &, |, ~), numéro un et numéro deux. Par exemple, si
l'utilisateur écrit

```              $ calcule ‘*’ 23 40             ```

Vous devez afficher le produit de ces deux numéros. Testez votre code.


#### Exercice 4.5 [★★]

 
Une fonction récursive est une fonction qui s'appelle elle-même. Par
exemple, la fonction suivante calcule la factorielle d'un entier
naturel.

```                
int factorielle (int num) {
  if (num == 0) {
    return 1;
  }
  else {
    return (num * factorielle (num-1));
  }
}
```

Écrivez le code *factorielle.c* et testez la fonction factorielle avec
différents entiers naturels.


#### Exercice 4.6 [★★★]

 
En réutilisant le code de *chercher.c* (TP3) et *fichier.c*, écrivez un
fichier *chercherfichier.c* qui cherche une phrase dans un fichier, les
deux sont à saisir par l'utilisateur. *chercherfichier.c* doit afficher
toutes les lignes de fichier où les mots sont présents et également le
nombre de fois qu'ils sont présents. Par exemple,

```
$ ./chercherfichier int fichier.c             
```

Vous devez afficher

```              
Ligne 10, 2 fois
Ligne 30, 1 fois             
```


#### Exercice 4.7 [★★★]

 
En réutilisant le fichier couleurs.c (TP 2), écrivez un programme en
créant deux fichiers liste.c et liste.h.

Ajoutez les déclarations suivantes en liste.h

```                
struct liste_couleurs {                
   // Remplissez ça pour gérer une liste (simplement chainée) de couleurs.
}                

void insertion (struct couleur *, struct liste_couleurs *);                
void parcours (struct liste_couleurs *);
```

Implémentez ces fonctions en liste.c. insertion prends deux entrées:
pointer d'une couleur RGB et pointeur d'une liste de couleurs et
insérez la couleur dans la liste. La fonction parcours prend le pointeur
d'une liste de couleurs et affiche les couleurs dans la liste. Créez
une liste de 10 couleurs et testez votre code en ajoutant dix couleurs
en utilisant insertion(..) et parcourez votre liste en utilisant
parcours(..). 
Testez ces fonctions en utilisant le fichier principal (*main.c*).


#### Fichiers

*calcule.c, etudiant_bd.c, fichier.c, liste.c, operator.c,
chercherfichier.c, factorielle.c, fichier.h, liste.h, operator.h*

#### Instructions

-   N'oubliez pas les commentaires (nom de fichier, objectif, auteurs,
    , les lignes importantes de code etc.). Les commentaires sont notés.
-   N'oubliez pas de mettre à jour le fichier README.md et ajouter les
    détails concernant votre deuxième exercice.
-   Compte rendu en format .zip en un seul fichier.


