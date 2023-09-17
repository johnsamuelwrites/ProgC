Année: 2023-2024
----------------

### Travaux pratiques 6

## Objectifs

-   Compréhension et modification du code, manipulation des images, et
    exécution des applications existantes sur la machine (Par exemple,
    Firefox/Chrome)


### BMP (format d'image)

Le format BMP (Bitmap) utilise la représentation RGB (Rouge, Vert, Bleu) ou RGBA (Rouge, Vert, Bleu, Alpha) pour définir la couleur de chaque pixel. Chaque pixel est codé en utilisant une certaine quantité de bits, généralement 24 bits pour RGB et 32 bits pour RGBA. Dans le cas de RGB, chaque composante de couleur (R, G, B) est codée sur 8 bits chacune, permettant de représenter une large gamme de couleurs. L'ajout d'un canal Alpha (A) dans le format RGBA ajoute 8 bits supplémentaires pour gérer la transparence, ce qui est utile pour créer des images avec des zones partiellement transparentes.

Référence : <https://fr.wikipedia.org/wiki/Windows_bitmap>

### JSON

Le format JSON (JavaScript Object Notation) est un format de données léger et lisible par les humains utilisé pour structurer et échanger des informations entre différentes applications. Il repose sur deux structures de base :

**Objets:** Les objets JSON sont des ensembles non ordonnés de paires clé-valeur. Chaque paire clé-valeur est séparée par deux-points (:), et les paires sont séparées par des virgules. Par exemple : 

```json
{ 
  "nom": "Pierre Dupont", 
  "année": 4
}
```

**Tableaux:** Les tableaux JSON sont des listes ordonnées de valeurs. Les valeurs peuvent être des chaînes de caractères, des nombres, des booléens, des objets JSON ou des tableaux JSON. Les valeurs d'un tableau JSON sont séparées par des virgules et entourées de crochets, par exemple : 

```json
["rouge", "vert", "bleu"]
```

Le format JSON est facilement lisible par les humains, ce qui le rend populaire pour stocker et échanger des données structurées.

Référence : <https://fr.wikipedia.org/wiki/JavaScript_Object_Notation>

## Exercice 6.1 [★]

**Analyse des images** 

Créer un système client-serveur qui analyse des images BMP, extrait les dix premières couleurs de l'image, et génère des graphiques en utilisant SVG en fonction des couleurs extraites.

**Description** : Pour atteindre cet objectif, suivez les instructions suivantes :

-  Utilisez les fichiers nécessaires : `client.c`, `client.h`, `serveur.c`, `serveur.h`, `couleur.h`, `couleur.c`, `bmp.c`, `bmp.h`, et le fichier `Makefile`.
-  Téléchargez également le dossier "images" qui contient des images au format BMP provenant de Wikimedia Commons.
-  Assurez-vous de comprendre le contenu des fichiers `bmp.c`, `bmp.h`, `couleur.h` et `couleur.c`qui vous permettront d'analyser les images BMP.
-  Utilisez la commande `make` pour compiler les fichiers et générer les fichiers exécutables.
-  Ouvrez deux terminaux. Dans le premier terminal, exécutez le serveur en utilisant la commande `./serveur`.
-  Dans le second terminal, exécutez le client en utilisant la commande `./client chemin_d’une_image_bmp`, en remplaçant `chemin_d’une_image_bmp` par le chemin d'accès à une image BMP que vous souhaitez utiliser.
-  Le client analyse l'image BMP spécifiée et extrait les dix premières couleurs de l'image.
-  Ensuite, le client envoie ces couleurs au serveur.
-  Le serveur reçoit les couleurs et exécute une commande existante sur votre machine, en l'occurrence `firefox`.
-  Vérifiez que le graphique généré par `firefox` est basé sur les couleurs extraites de l'image BMP.
-  Testez votre code en utilisant différentes images BMP pour voir comment les graphiques sont générés en fonction des couleurs de chaque image.

En suivant ces instructions, vous pourrez créer un système client-serveur qui analyse des images BMP, extrait les couleurs et génère des graphiques en utilisant `firefox` en fonction des couleurs extraites.

## Exercice 6.2 [★★]

**Analyse des images** 

L'objectif de cet exercice est de permettre à l'utilisateur de saisir le nombre de couleurs (toujours inférieur ou égal à 30) lors de l'exécution du client et du serveur, puis adapter le traitement en conséquence.
Pour permettre à l'utilisateur de spécifier le nombre de couleurs à traiter, des modifications doivent être apportées aux fichiers `serveur.c` et `client.c`. Voici comment effectuer ces modifications :

**Dans serveur.c** :

-  Modifiez la partie du code où le serveur reçoit les couleurs pour prendre en compte la réception préalable du nombre de couleurs saisi par l'utilisateur. Vous devrez donc ajouter une étape où le serveur reçoit d'abord ce nombre, puis reçoit les couleurs correspondantes.
-  Assurez-vous de mettre à jour le code pour traiter les couleurs en fonction du nombre saisi. Par exemple, si l'utilisateur saisit 10 couleurs, le serveur doit toujours traiter les 10 premières couleurs de l'image.

**Dans client.c** :

-  Modifiez la partie du code où le client envoie les couleurs pour inclure également l'envoi du nombre de couleurs saisi par l'utilisateur.
-  Lorsque le client lit les couleurs de l'image, assurez-vous de lire le nombre de couleurs saisi par l'utilisateur avant de lire les couleurs elles-mêmes.
-  Envoyez d'abord le nombre de couleurs au serveur, suivi des couleurs extraites de l'image.

Une fois que vous avez apporté ces modifications aux deux fichiers, vous pouvez tester votre code en saisissant différents nombres de couleurs lors de l'exécution du client. Le serveur devrait être capable de traiter le nombre de couleurs spécifié par l'utilisateur et de générer un graphique en conséquence.

N'oubliez pas d'utiliser la commande `make` pour recompiler vos fichiers après avoir apporté ces modifications.

## Exercice 6.3 [★★★]

**Objectif** : Modifier le code client.c et serveur.c pour utiliser le format de messages JSON lors de la communication entre le client et le serveur.

Actuellement, les fichiers client.c et serveur.c utilisent des messages simples pour communiquer. L'objectif est de passer à un format de messages JSON plus structuré. Les messages JSON contiendront un code d'opération et des valeurs associées.

**Instructions** :

-  Dans client.c :
   - Modifiez le code pour créer des messages au format JSON. Utilisez une bibliothèque JSON en C, comme cJSON, si nécessaire.
   - Remplacez les anciens messages simples par les nouveaux messages JSON. Par exemple, remplacez "message: bonjour" par un message JSON approprié.
-  Dans serveur.c :
   - Modifiez le code pour traiter les messages JSON reçus du client. Analysez les messages JSON pour extraire les informations nécessaires, telles que le code de l'opération et les valeurs associées.
   - Répondez au client au format JSON en fonction de l'opération demandée. Par exemple, si le client envoie une demande de calcul, le serveur devrait renvoyer la réponse au format JSON.
-  Vous pouvez utiliser une bibliothèque JSON en C, comme cJSON, pour faciliter le traitement des messages JSON dans le serveur.
-  Assurez-vous de mettre à jour les instructions et les commentaires pour refléter les nouvelles modifications et le format JSON des messages.

**Exemple** :
Supposons que le client souhaite envoyer une demande de calcul d'addition au serveur. Au lieu d'envoyer "calcule: + 23 45", le client enverra un message JSON tel que :

```json
{
  "code": "calcule",
  "valeurs": ["+", "23", "45"]
}
```

Le serveur analysera ce message JSON, effectuera le calcul demandé, puis renverra la réponse au client au format JSON.

Autres exemples :

```json
{
  "code" : "message",
  "valeurs" : [ "bonjour"]              
}

{
   "code" : "couleurs",
   "valeurs" : [ "0effeee", "..."]              
}             
```

## Fichiers

bmp.c, bmp.h, client.c, client.h, couleur.c, couleur.h, Makefile,
serveur.c, serveur.h

## Instructions

- N'oubliez pas les commentaires (nom du fichier, objectif, auteurs, lignes importantes de code, etc.). Les commentaires sont notés.
- N'oubliez pas de mettre à jour le fichier README.md et d'ajouter les détails.
- Compte rendu au format .zip en un seul fichier.

