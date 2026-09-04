# ProgC
Sujets de travaux pratiques du module **Programmation en C**.

## Année: 2026-2027

### Statut des travaux pratiques

Les travaux pratiques sont des exercices d'entraînement. Ils ne sont pas à soumettre et ne font pas l'objet d'une évaluation. Ils servent à apprendre, expérimenter, vérifier son raisonnement et préparer la compréhension attendue dans le cours.

Vous pouvez travailler avec vos camarades, consulter la documentation et utiliser des assistants d'IA pour explorer des pistes. Le point essentiel est de pouvoir expliquer, compiler, tester et corriger le code que vous conservez.

### Sujets de travaux pratiques
* [TP1](TP1/TP1.md)
* [TP2](TP2/TP2.md)
* [TP3](TP3/TP3.md)
* [TP4](TP4/TP4.md)
* [TP5](TP5/TP5.md)
* [TP6](TP6/TP6.md)
* [Guide de vérification](VERIFICATION.md)

#### Objectifs

Les objectifs du module sont de comprendre les différents aspects de la programmation en C et de créer un projet en C. Après avoir réalisé les exercices, vous serez capable de :

- Comprendre la chaîne de compilation en utilisant GCC (GNU Compiler Collection) : du prétraitement à l'exécution.
- Travailler avec les bibliothèques standard et effectuer des appels système (gestion des fichiers, sockets réseau, etc.).
- Comprendre les pointeurs et manipuler les buffers en les utilisant.
- Créer, compiler et exécuter un projet en C.
- Manipuler différents formats de données, tels que BMP, et utiliser des structures de données.
- Créer un simple programme client-serveur pour le transfert de fichiers et de messages.
- Documenter une application en utilisant le format Markdown (*.md).
- Tester une application.
- Relire et corriger du code C, y compris lorsqu'une partie a été générée par un assistant d'IA.
- Utiliser explicitement une norme de compilation récente, par exemple C23/C2024, lorsque l'environnement le permet.

#### Environnement de programmation:
- Système d'exploitation: Linux
  - Ubuntu
  - Machine virtuelle (VirtualBox) + Ubuntu
- Compilateur: `gcc`
- Logiciels: firefox, gdb
- Outils recommandés: `make`, `valgrind`, `cppcheck`, `clang-tidy`
  
#### Instructions

1. Tous les travaux pratiques se basent sur les concepts que vous avez déjà appris en cours. Utilisez bien vos supports de cours.
2. Travaillez en binôme.
3. Notez les sources consultées lorsque cela vous aide à retrouver votre raisonnement, y compris les pages de manuel, sites web et assistants d'IA.
4. Les séances sont encadrées par un intervenant ou enseignant.
5. N'utilisez pas de bibliothèques externes.

#### Travaux pratiques et niveaux de difficulté

Il y a six travaux pratiques, chacun comportant plusieurs exercices.

Chaque question a un niveau de difficulté. Cette indication sert à organiser votre progression, pas à attribuer une note :

- ★ : Facile
- ★★ : Moyenne
- ★★★ : Difficile

#### Utilisation des assistants d'IA

Les assistants d'IA peuvent être utilisés comme outils d'exploration, de reformulation ou de débogage. Ils peuvent aussi produire du code incomplet, non portable ou dangereux. Pour chaque fragment de code conservé, vérifiez au minimum :

- les types, conversions et formats de `printf`/`scanf` ;
- les tailles de buffers et les limites de tableaux ;
- les valeurs de retour des fonctions ;
- les allocations et libérations de mémoire ;
- les comportements indéfinis possibles ;
- la compatibilité avec la norme C utilisée.

#### Liste de contrôle

Avant de considérer un travail pratique comme terminé, assurez-vous de respecter la liste de contrôle suivante :

-   ✅ Les noms des fichiers de chaque exercice respectent ceux demandés dans les travaux pratiques.
-   ✅ Votre code est bien commenté.
-   ✅ Votre code se compile sans aucune erreur et, si possible, sans aucun avertissement.
-   ✅ Vous avez testé le programme avec plusieurs entrées, y compris des cas limites.
-   ✅ Vous savez expliquer les pointeurs, tableaux, structures, fichiers, allocations et appels système utilisés.
-   ✅ Si une IA vous a aidé, vous avez relu et vérifié chaque choix technique.

#### Vérification

Le dossier `evaluation/` contient un ancien script de contrôle automatique. Il peut encore être utilisé comme aide technique, mais il ne correspond pas à une évaluation des TP.

Consultez aussi le [guide de vérification](VERIFICATION.md) pour compiler avec des avertissements stricts, utiliser `gdb`, lancer des sanitizers et tester la mémoire avec `valgrind`.

#### Modèle de code

Pour référence, vous pouvez consulter le répertoire suivant :  
<https://github.com/johnsamuelwrites/ProgC>. Ce répertoire contient des modèles de code pour tous les exercices des six travaux pratiques.

Vous pouvez le consulter en ligne en utilisant le lien ci-dessus, ou le cloner sur votre machine via le terminal en utilisant les commandes suivantes :

```bash
$ git clone https://github.com/johnsamuelwrites/ProgC
$ cd ProgC
$ ls
```

Pour obtenir les dernières mises à jour du répertoire, vous pouvez exécuter la commande suivante :

```bash
$ git pull
```

#### ⚠️ Attention

- Aucune soumission des TP n'est demandée.
- Les TP ne sont pas évalués.
- ProgC sert de support d'entraînement, d'expérimentation et de révision.
- Ne modifiez pas les noms des fichiers (\*.c, \*.h, \*.md, etc.).

# Author
* John Samuel

## Archives and Releases
* [Zenodo](https://doi.org/10.5281/zenodo.4041297)
* [Software Heritage](https://archive.softwareheritage.org/browse/origin/directory/?origin_url=https://github.com/johnsamuelwrites/ProgC)
* [Release Notes](RELEASE.md)

## Licence
All code are released under GPLv3+ licence. The associated documentation and other content are released under [CC-BY-SA](http://creativecommons.org/licenses/by-sa/4.0/).
