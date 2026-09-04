# TP6 - Images BMP, couleurs et messages structurés

Ce dossier accompagne le sujet complet du sixième travail pratique.

## Sujet

Consultez le sujet complet : [TP6.md](TP6.md).

## Objectifs

- Comprendre et modifier un code existant.
- Lire des images BMP et extraire des couleurs.
- Faire communiquer un client et un serveur.
- Générer des sorties visuelles à partir de données.
- Structurer les messages échangés dans un format inspiré de JSON.

## Fichiers sources

Les fichiers sources attendus se trouvent dans [`src/`](src/) :

`Makefile`, `bmp.c`, `bmp.h`, `client.c`, `client.h`, `couleur.c`, `couleur.h`, `serveur.c`, `serveur.h`.

## Compilation rapide

Depuis le dossier `src/` :

```bash
make
./serveur
```

Dans un second terminal, lancez le client avec une image BMP selon les consignes de [TP6.md](TP6.md).

## Vérification

Testez plusieurs images, plusieurs nombres de couleurs et des messages mal formés afin de vérifier la robustesse du client et du serveur.

Consultez aussi le [guide de vérification](../VERIFICATION.md).
