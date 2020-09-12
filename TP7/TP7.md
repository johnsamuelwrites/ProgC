Année: 2020-2021
----------------

### Travaux pratiques 7

#### Objectifs

-   Compréhension et modification du code, manipulation des images, et
    exécution des applications existantes sur la machine (Par exemple,
    gnuplot)

### JSON

Référence : <https://fr.wikipedia.org/wiki/JavaScript_Object_Notation>

#### Exercice 7.1 [★★★]


Vous avez remarqué que nous avons utilisé les messages très simples
entre client et serveur

```              
message: bonjour             
```

par exemple

```              
calcule: + 23 45              
couleurs: 10, #0effeee,...             
```

Modifiez le code client.c et serveur.c et ajoutez de nouvelles fonctions
pour travailler avec le format de messages JSON. Par exemple,

```              
{                
  "code" : "message",                
  "valeurs" : [ "bonjour"]              
}

{ 
  "code" : "calcule",                
  "valeurs" : [ "+", "23", "45" ]              
}              

{                
   "code" : "couleurs",                
   "valeurs" : [ "0effeee", ...]              
}             ```

#### Fichiers

bmp.c, bmp.h, client.c, client.h, couleur.c, couleur.h, Makefile,
serveur.c, serveur.h

#### Instructions

-   Ne pas oublier les commentaires (nom de fichier, objectif, auteurs,
    , les lignes importantes de code etc.). Les commentaires sont notés.
-   N'oublier pas de mettre à jour le fichier README et ajouter les
    détails concernant votre deuxième exercice.
-   Compte rendu en format .zip en un seul fichier.



