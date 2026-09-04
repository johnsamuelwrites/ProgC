# TP5 - Répertoires et client-serveur

Ce dossier accompagne le sujet complet du cinquième travail pratique.

## Sujet

Consultez le sujet complet : [TP5.md](TP5.md).

## Objectifs

- Parcourir des fichiers et des répertoires.
- Comparer des approches récursives et itératives.
- Compiler un petit projet avec `make`.
- Comprendre une communication client-serveur simple.
- Tester progressivement les messages envoyés et reçus.

## Fichiers sources

Les fichiers sources attendus se trouvent dans [`src/`](src/) :

`Makefile`, `client.c`, `client.h`, `repertoire.c`, `repertoire.h`, `serveur.c`, `serveur.h`.

## Compilation rapide

Depuis le dossier `src/` :

```bash
make
./serveur
```

Dans un second terminal, lancez le client selon les consignes de [TP5.md](TP5.md).

## Vérification

Testez les chemins valides et invalides, les messages vides, les opérations non reconnues et plusieurs demandes successives.

Consultez aussi le [guide de vérification](../VERIFICATION.md).
