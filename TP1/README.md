# TP1 - Bases de la programmation en C

Ce dossier accompagne le sujet complet du premier travail pratique.

## Sujet

Consultez le sujet complet : [TP1.md](TP1.md).

## Objectifs

- Découvrir la structure minimale d'un programme C.
- Manipuler les variables, les types de base et les conversions.
- Utiliser les opérateurs arithmétiques et logiques.
- Ecrire des conditions et des boucles simples.
- Compiler et exécuter des programmes avec `gcc`.

## Fichiers sources

Les fichiers sources attendus se trouvent dans [`src/`](src/) :

`binaire.c`, `bonjour.c`, `boucles.c`, `calculs.c`, `cercle.c`, `conditions.c`, `opérateurs.c`, `pyramide.c`, `sizeof_types.c`, `variables.c`.

## Compilation rapide

Exemple :

```bash
gcc -std=c23 -Wall -Wextra -pedantic -o bonjour src/bonjour.c
./bonjour
```

Pour les exercices utilisant la bibliothèque mathématique :

```bash
gcc -std=c23 -Wall -Wextra -pedantic -o cercle src/cercle.c -lm
./cercle
```

## Vérification

Avant de considérer le TP terminé, vérifiez que chaque programme compile sans erreur, produit une sortie compréhensible et respecte les noms de fichiers demandés dans [TP1.md](TP1.md).

Consultez aussi le [guide de vérification](../VERIFICATION.md).
