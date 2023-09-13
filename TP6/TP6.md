Année: 2023-2024
----------------

### Travaux pratiques 6

## Objectifs

-   Compréhension et modification du code, manipulation des images, et
    exécution des applications existantes sur la machine (Par exemple,
    gnuplot)


### BMP (format d'image)

Référence : <https://fr.wikipedia.org/wiki/Windows_bitmap>

### JSON

Référence : <https://fr.wikipedia.org/wiki/JavaScript_Object_Notation>

## Exercice 6.1 [★]

**Analyse des images** 

Créer un système client-serveur qui analyse des images BMP, extrait les dix premières couleurs de l'image, et génère des graphiques en utilisant gnuplot en fonction des couleurs extraites.

**Description** : Pour atteindre cet objectif, suivez les instructions suivantes :

1. Téléchargez les fichiers nécessaires : `client.c`, `client.h`, `serveur.c`, `serveur.h`, `couleur.h`, `couleur.c`, `bmp.c`, `bmp.h`, et le fichier `Makefile`.

2. Téléchargez également le dossier "images" qui contient des images au format BMP provenant de Wikimedia Commons.

3. Assurez-vous de comprendre le contenu des fichiers `bmp.c` et `bmp.h`, qui vous permettront d'analyser les images BMP.

4. Utilisez la commande `make` pour compiler les fichiers et générer les fichiers exécutables.

5. Ouvrez deux terminaux. Dans le premier terminal, exécutez le serveur en utilisant la commande `./serveur`.

6. Dans le second terminal, exécutez le client en utilisant la commande `./client chemin_d’une_image_bmp`, en remplaçant `chemin_d’une_image_bmp` par le chemin d'accès à une image BMP que vous souhaitez utiliser.

7. Le client analyse l'image BMP spécifiée et extrait les dix premières couleurs de l'image.

8. Ensuite, le client envoie ces couleurs au serveur.

9. Le serveur reçoit les couleurs et exécute une commande existante sur votre machine, en l'occurrence gnuplot, en utilisant `popen`. Cette commande utilise les couleurs pour générer un graphique.

10. Assurez-vous de fermer gnuplot après chaque utilisation.

11. Vérifiez que le graphique généré par gnuplot est basé sur les couleurs extraites de l'image BMP.

12. Testez votre code en utilisant différentes images BMP pour voir comment les graphiques sont générés en fonction des couleurs de chaque image.

En suivant ces instructions, vous pourrez créer un système client-serveur qui analyse des images BMP, extrait les couleurs et génère des graphiques en utilisant gnuplot en fonction des couleurs extraites.

## Exercice 6.2 [★★]

**Analyse des images** 

L'objectif de cet exercice est de permettre à l'utilisateur de saisir le nombre de couleurs (toujours inférieur ou égal à 30) lors de l'exécution du client et du serveur, puis adapter le traitement en conséquence.
Pour permettre à l'utilisateur de spécifier le nombre de couleurs à traiter, des modifications doivent être apportées aux fichiers `serveur.c` et `client.c`. Voici comment effectuer ces modifications :

**Dans serveur.c** :

1. Modifiez la partie du code où le serveur reçoit les couleurs pour prendre en compte la réception préalable du nombre de couleurs saisi par l'utilisateur. Vous devrez donc ajouter une étape où le serveur reçoit d'abord ce nombre, puis reçoit les couleurs correspondantes.

2. Assurez-vous de mettre à jour le code pour traiter les couleurs en fonction du nombre saisi. Par exemple, si l'utilisateur saisit 10 couleurs, le serveur doit toujours traiter les 10 premières couleurs de l'image.

3. N'oubliez pas de mettre à jour la commande que le serveur exécute avec gnuplot pour qu'elle utilise le nombre de couleurs saisi par l'utilisateur.

**Dans client.c** :

1. Modifiez la partie du code où le client envoie les couleurs pour inclure également l'envoi du nombre de couleurs saisi par l'utilisateur.

2. Lorsque le client lit les couleurs de l'image, assurez-vous de lire le nombre de couleurs saisi par l'utilisateur avant de lire les couleurs elles-mêmes.

3. Envoyez d'abord le nombre de couleurs au serveur, suivi des couleurs extraites de l'image.

Une fois que vous avez apporté ces modifications aux deux fichiers, vous pouvez tester votre code en saisissant différents nombres de couleurs lors de l'exécution du client. Le serveur devrait être capable de traiter le nombre de couleurs spécifié par l'utilisateur et de générer un graphique en conséquence.

N'oubliez pas d'utiliser la commande `make` pour recompiler vos fichiers après avoir apporté ces modifications.

## Exercice 6.3 [★★★]

**Objectif** : Modifier le code client.c et serveur.c pour utiliser le format de messages JSON lors de la communication entre le client et le serveur.

Actuellement, les fichiers client.c et serveur.c utilisent des messages simples pour communiquer. L'objectif est de passer à un format de messages JSON plus structuré. Les messages JSON contiendront un code d'opération et des valeurs associées.

**Instructions** :

1. Dans client.c :
   - Modifiez le code pour créer des messages au format JSON. Utilisez une bibliothèque JSON en C, comme cJSON, si nécessaire.
   - Remplacez les anciens messages simples par les nouveaux messages JSON. Par exemple, remplacez "message: bonjour" par un message JSON approprié.

2. Dans serveur.c :
   - Modifiez le code pour traiter les messages JSON reçus du client. Analysez les messages JSON pour extraire les informations nécessaires, telles que le code de l'opération et les valeurs associées.
   - Répondez au client au format JSON en fonction de l'opération demandée. Par exemple, si le client envoie une demande de calcul, le serveur devrait renvoyer la réponse au format JSON.

3. Vous pouvez utiliser une bibliothèque JSON en C, comme cJSON, pour faciliter le traitement des messages JSON dans le serveur.

4. Assurez-vous de mettre à jour les instructions et les commentaires pour refléter les nouvelles modifications et le format JSON des messages.

**Exemple** :
Supposons que le client souhaite envoyer une demande de calcul d'addition au serveur. Au lieu d'envoyer "calcule: + 23 45", le client enverra un message JSON tel que :

```json
{
  "code": "calcule",
  "valeurs": ["+", "23", "45"]
}
```

Le serveur analysera ce message JSON, effectuera le calcul demandé, puis renverra la réponse au client au format JSON.
## Fichiers

bmp.c, bmp.h, client.c, client.h, couleur.c, couleur.h, Makefile,
serveur.c, serveur.h

## Instructions

-   N'oubliez pas les commentaires (nom de fichier, objectif, auteurs,
    , les lignes importantes de code etc.). Les commentaires sont notés.
-   N'oubliez pas de mettre à jour le fichier README.md et ajouter les
    détails concernant votre deuxième exercice.
-   Compte rendu en format .zip en un seul fichier.


