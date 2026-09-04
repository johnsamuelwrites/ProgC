# Vérification du code C

Ce guide propose quelques commandes pour vérifier votre code pendant les travaux pratiques. Les TP ne sont pas à soumettre et ne sont pas évalués : ces commandes servent à apprendre, corriger et consolider votre compréhension.

## Compilation

Compilez toujours avec des avertissements activés. Si votre compilateur prend en charge C23/C2024, vous pouvez utiliser :

```bash
gcc -std=c23 -Wall -Wextra -pedantic -g fichier.c
```

Selon l'environnement de travail, il peut être nécessaire d'utiliser une autre norme :

```bash
gcc -std=c17 -Wall -Wextra -pedantic -g fichier.c
gcc -std=gnu23 -Wall -Wextra -pedantic -g fichier.c
```

## Exécution

Testez votre programme avec plusieurs entrées :

- cas simples ;
- cas limites ;
- valeurs incorrectes ;
- fichiers absents ou vides ;
- chaînes trop longues ;
- connexions réseau interrompues lorsque le TP utilise client et serveur.

## Sanitizers

Les sanitizers aident à détecter des erreurs mémoire et des comportements indéfinis.

```bash
gcc -std=c23 -Wall -Wextra -pedantic -g -fsanitize=address,undefined fichier.c
./a.out
```

Si le programme utilise plusieurs fichiers :

```bash
gcc -std=c23 -Wall -Wextra -pedantic -g -fsanitize=address,undefined src/*.c
./a.out
```

## Valgrind

Valgrind permet de repérer des lectures/écritures invalides et des fuites mémoire.

```bash
gcc -std=c23 -Wall -Wextra -pedantic -g fichier.c
valgrind --leak-check=full --track-origins=yes ./a.out
```

Objectif pour les exercices : comprendre et corriger chaque erreur signalée.

## Analyse statique

Lorsque les outils sont disponibles :

```bash
cppcheck --enable=all .
clang-tidy fichier.c -- -std=c23
```

Ces outils complètent la compilation et les tests. Ils ne remplacent pas la lecture attentive du code.

## Code généré par IA

Si vous utilisez un assistant d'IA, vérifiez systématiquement :

- les bibliothèques et fonctions proposées ;
- les tailles de buffers ;
- les conversions de types ;
- les valeurs de retour ;
- les erreurs possibles ;
- les allocations et libérations ;
- les cas que le code ne teste pas.

Conservez uniquement du code que vous pouvez expliquer, compiler, tester et corriger.
