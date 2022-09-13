Année: 2022-2023
----------------

### Travaux pratiques 6

#### Objectifs

-   Compréhension et modification du code, manipulation des images, et
    exécution des applications existantes sur la machine (Par exemple,
    gnuplot)


### BMP (format d'image)

Référence : <https://fr.wikipedia.org/wiki/Windows_bitmap>

### JSON

Référence : <https://fr.wikipedia.org/wiki/JavaScript_Object_Notation>

#### Exercice 6.1 [★]


Téléchargez les fichiers suivants à partir d'e-campus : client.c,
client.h, serveur.c, serveur.h, couleur.h, couleur.c, bmp.c, bmp.h,
Makefile.

Téléchargez le dossier images. Les images proviennent de Wikimedia
Commons et sont en format BMP.

Lisez bien les fichiers. bmp.c, bmp.h qui vous permettent d'analyser les
images en format BMP.

Lancez la compilation avec

```
$ make             
```

et voyez les fichiers exécutables qui sont créés. Ouvrez deux terminaux.
Sur le premier terminal, exécutez

```
./serveur             
```

et sur le second terminal

```
./client chemin_d’une_image_bmp             
```

Le serveur reçois les dix premières couleurs de l'image analysé par le
client et exécute une commande déjà existantes sur votre machine :
gnuplot en utilisant popen. N'oubliez pas fermer gnuplot après chaque
utilisation.


#### Exercice 6.2 [★★]


Les deux fichiers serveur.c et client.c sont initialement écris pour
travailler avec dix premières couleurs. Modifiez les deux fichiers de
manière à ce que ce nombre de couleurs (toujours \<=30) soit saisi par
l'utilisateur. Testez votre code. N'oubliez pas d'utiliser make.

#### Exercice 6.3 [★★★]


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
}             
```

#### Fichiers

bmp.c, bmp.h, client.c, client.h, couleur.c, couleur.h, Makefile,
serveur.c, serveur.h

#### Instructions

-   N'oubliez pas les commentaires (nom de fichier, objectif, auteurs,
    , les lignes importantes de code etc.). Les commentaires sont notés.
-   N'oubliez pas de mettre à jour le fichier README.md et ajouter les
    détails concernant votre deuxième exercice.
-   Compte rendu en format .zip en un seul fichier.


