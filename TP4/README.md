# TP4 - Fonctions, fichiers, listes et débogage

Ce dossier accompagne le sujet complet du quatrième travail pratique.

## Sujet

Consultez le sujet complet : [TP4.md](TP4.md).

## Objectifs

- Organiser un programme avec plusieurs fichiers `.c` et `.h`.
- Ecrire et appeler des fonctions, y compris des fonctions récursives.
- Lire et écrire des fichiers.
- Manipuler des listes et des structures.
- Utiliser `gdb` et des options de compilation strictes pour déboguer.

## Fichiers sources

Les fichiers sources attendus se trouvent dans [`src/`](src/) :

`calcule.c`, `chercherfichier.c`, `etudiant_bd.c`, `factorielle.c`, `fichier.c`, `fichier.h`, `liste.c`, `liste.h`, `main.c`, `operator.c`, `operator.h`.

## Compilation rapide

Exemple avec plusieurs fichiers :

```bash
gcc -std=c23 -Wall -Wextra -pedantic -g -o main src/main.c src/operator.c src/fichier.c src/liste.c
./main
```

Adaptez la commande aux fichiers nécessaires pour l'exercice travaillé.

## Vérification

Utilisez les avertissements de compilation, `gdb` et, si possible, les sanitizers pour distinguer les erreurs de compilation, d'exécution et de mémoire.

Consultez aussi le [guide de vérification](../VERIFICATION.md).
