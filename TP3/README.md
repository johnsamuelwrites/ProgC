# TP3 - Tableaux, mémoire, recherche et tri

Ce dossier accompagne le sujet complet du troisième travail pratique.

## Sujet

Consultez le sujet complet : [TP3.md](TP3.md).

## Objectifs

- Comprendre les pointeurs, les structures et leur représentation en mémoire.
- Utiliser `sizeof` pour observer les tailles de types et de pointeurs.
- Parcourir, rechercher et trier des tableaux.
- Manipuler les octets d'objets C avec prudence.
- Compter et comparer des données structurées.

## Fichiers sources

Les fichiers sources attendus se trouvent dans [`src/`](src/) :

`chercher.c`, `chercher2.c`, `couleur_compteur.c`, `couleurs.c`, `grand_petit.c`, `octets.c`, `recherche_dichotomique.c`, `sizeof.c`, `tri.c`.

## Compilation rapide

Exemple :

```bash
gcc -std=c23 -Wall -Wextra -pedantic -o tri src/tri.c
./tri
```

Compilez chaque exercice séparément, sauf indication contraire dans [TP3.md](TP3.md).

## Vérification

Vérifiez les accès aux tableaux, les bornes de recherche, les tailles affichées et les hypothèses liées à la machine utilisée.

Consultez aussi le [guide de vérification](../VERIFICATION.md).
