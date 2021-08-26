Année: 2021-2022
----------------

### Travaux pratiques 6

#### Objectifs

-   Compréhension et modification du code, manipulation des images, et
    exécution des applications existantes sur la machine (Par exemple,
    gnuplot)

### BMP (format d'image)

Référence : <https://fr.wikipedia.org/wiki/Windows_bitmap>

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


#### Fichiers

bmp.c, bmp.h, client.c, client.h, couleur.c, couleur.h, Makefile,
serveur.c, serveur.h

#### Instructions

-   Ne pas oublier les commentaires (nom de fichier, objectif, auteurs,
    , les lignes importantes de code etc.). Les commentaires sont notés.
-   N'oublier pas de mettre à jour le fichier README et ajouter les
    détails concernant votre deuxième exercice.
-   Compte rendu en format .zip en un seul fichier.


