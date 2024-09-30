# GDB 

Cet exercice présente une brève introduction à `gdb` et explique comment déboguer votre programme C à l'aide de `gdb`.

Le code suivant (**erreurs.c**) présente une erreur majeure : il tente d'accéder à des indices de tableau supérieurs à la taille maximale du tableau (100). 

```
$ cat erreurs.c 
#include <stdio.h>

int main() {

   int tableau[100];

   for (int compteur = 0; compteur < sizeof(tableau); compteur++) { //Erreur
       tableau[compteur] = tableau[compteur] * 2;
   }
   
   return (0);

}
```

Pour la compilation et la création d'un exécutable

```
$ gcc erreurs.c
```

Lorsque nous exécutons le code, nous obtenons l'erreur suivante et le programme se plante (comme prévu).

```
./a.out 
*** stack smashing detected ***: terminated
fish: Job 1, './a.out' terminated by signal SIGABRT (Abort)
```

Pour déboguer ce code et trouver la source de l'erreur, nous devrons d'abord le compiler et ajouter des informations supplémentaires pour le débogage avec l'option `-ggdb3`.

```
$ gcc -ggdb3 erreurs.c
```

Nous allons maintenant exécuter le code avec gdb.


```
$ gdb a.out
GNU gdb (Ubuntu 12.0.90-0ubuntu1) 12.0.90
Copyright (C) 2022 Free Software Foundation, Inc.
License GPLv3+: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>
This is free software: you are free to change and redistribute it.
There is NO WARRANTY, to the extent permitted by law.
Type "show copying" and "show warranty" for details.
This GDB was configured as "x86_64-linux-gnu".
Type "show configuration" for configuration details.
For bug reporting instructions, please see:
<https://www.gnu.org/software/gdb/bugs/>.
Find the GDB manual and other documentation resources online at:
    <http://www.gnu.org/software/gdb/documentation/>.

For help, type "help".
Type "apropos word" to search for commands related to "word"...
Reading symbols from a.out...
(gdb)
```

Une fois que vous exécutez gdb, vous verrez une autre ligne de commande avec `(gdb)`.

Tapez `r` pour exécuter le programme.

```
(gdb) r
Starting program: ./ProgC/gdb/a.out 
[Thread debugging using libthread_db enabled]
Using host libthread_db library "/lib/x86_64-linux-gnu/libthread_db.so.1".
*** stack smashing detected ***: terminated

Program received signal SIGABRT, Aborted.
__pthread_kill_implementation (no_tid=0, signo=6, threadid=140737351481152) at ./nptl/pthread_kill.c:44
44	./nptl/pthread_kill.c: No such file or directory.
```

Le programme s'est écrasé et pour trouver la ligne qui est la raison de l'écrasement, tapez `bt`.


```
(gdb) bt
#0  __pthread_kill_implementation (no_tid=0, signo=6, threadid=140737351481152) at ./nptl/pthread_kill.c:44
#1  __pthread_kill_internal (signo=6, threadid=140737351481152) at ./nptl/pthread_kill.c:78
#2  __GI___pthread_kill (threadid=140737351481152, signo=signo@entry=6) at ./nptl/pthread_kill.c:89
#3  0x00007ffff7dbc476 in __GI_raise (sig=sig@entry=6) at ../sysdeps/posix/raise.c:26
#4  0x00007ffff7da27f3 in __GI_abort () at ./stdlib/abort.c:79
#5  0x00007ffff7e036f6 in __libc_message (action=action@entry=do_abort, fmt=fmt@entry=0x7ffff7f55943 "*** %s ***: terminated\n")
    at ../sysdeps/posix/libc_fatal.c:155
#6  0x00007ffff7eb076a in __GI___fortify_fail (msg=msg@entry=0x7ffff7f5592b "stack smashing detected") at ./debug/fortify_fail.c:26
#7  0x00007ffff7eb0736 in __stack_chk_fail () at ./debug/stack_chk_fail.c:24
#8  0x00005555555551c1 in main () at erreurs.c:13
(gdb) 

```

On constate que l'erreur se situe à la ligne 13, à la fin de la fonction `main`. La prochaine étape consiste à ajouter un point d'arrêt (breakpoint) dans cette fonction, par exemple à la ligne où la variable `tableau` est affectée. 

Pour arrêter le programme exactement à la ligne 8 (par exemple) du fichier `erreurs.c`, vous pouvez placer un point d'arrêt manuellement dans l'interface interactive de GDB.

1. Pour placer un point d'arrêt à la ligne 8, entrez la commande suivante dans gdb :  
   ```
   (gdb) break erreurs.c:10
   ```
   
2. Ensuite, exécutez le programme avec la commande :  
   ```
   (gdb) r
   The program being debugged has been started already.
   Start it from the beginning? (y or n) y

   ```
   Le programme s'exécutera jusqu'à atteindre le point d'arrêt défini.

Cela vous permet d'examiner l'état du programme, notamment les valeurs des variables à ce moment précis, et de diagnostiquer plus facilement les erreurs éventuelles.

Après avoir placé le point d'arrêt et que le programme s'est arrêté, vous pouvez :

1. **Afficher la valeur actuelle des variables** :
   - Pour la variable `tableau`, utilisez :
     ```
     print tableau
     ```
     ou
     ```
     p tableau
     ```

     Cela affichera la valeur de `tableau` (ou son pointeur).
   
   - Pour afficher les éléments du tableau, par exemple les 5 premiers, tapez :
     ```
     p tableau[0]@5
     ```
     Ceci affichera les 5 premiers éléments à partir de l'indice 0.

2. **Utiliser la commande `n` (next)** :
   - Après avoir inspecté les variables, vous pouvez avancer à l'instruction suivante sans entrer dans les fonctions appelées. Pour cela, tapez simplement :
     ```
     n
     ```
     La commande `n` exécute l'instruction courante et s'arrête à la suivante. Cela permet de progresser étape par étape dans le programme, tout en restant dans la fonction courante.

3. **Continuer l'exécution** :
   - Si vous voulez que le programme continue jusqu'au prochain point d'arrêt ou jusqu'à la fin, utilisez la commande :
     ```
     continue
     ```

Ainsi, vous pouvez inspecter les variables, avancer dans le programme à l'aide de `n`, et ajuster vos points d'arrêt si nécessaire.

## break

L'objectif principal de l'utilisation de la commande `(gdb) break` est d'arrêter l'exécution d'un programme à un point précis afin de permettre l'inspection et la modification du contexte actuel avant de poursuivre son exécution. Cela facilite considérablement le débogage et l'analyse des programmes.

### Exemples d'utilisation de `break` dans GDB :

- **Ajouter un point d'arrêt à une ligne spécifique** :  
  Si vous souhaitez arrêter votre programme exactement à la ligne 10 du fichier `monprogramme.c`, vous pouvez définir un point d'arrêt en utilisant la commande suivante dans l'interface interactive GDB :
  
    ```
    (gdb) break monprogramme.c:10
    ```
    Cela interrompra l'exécution du programme lorsqu'il atteindra la ligne 10.

- **Ajouter un point d'arrêt à une fonction spécifique** :  
  Si vous souhaitez arrêter l'exécution à chaque fois que le programme entre dans la fonction `maFonction`, vous pouvez définir un point d'arrêt avec la commande :
  
    ```
    (gdb) break ma_fonction
    ```
    Le programme s'arrêtera à chaque fois que la fonction `ma_fonction` est appelée.

### Utilité des points d'arrêt

La commande `break` est essentielle dans le processus de débogage avec GDB, car elle permet de geler l'exécution du programme à des moments clés. Cela vous donne l'opportunité d'inspecter les variables, de tester des hypothèses sur l'état du programme, et même de modifier certaines valeurs avant de poursuivre l'exécution. Cette intervention proactive vous aide à mieux comprendre les événements critiques qui surviennent dans votre programme.

## quit

Pour quitter GDB, vous pouvez utiliser la commande suivante :

```
quit
```

Si le programme en cours de débogage s'exécute encore, GDB vous demandera confirmation pour quitter. Il vous suffira de taper `y` (yes) ou d'appuyer sur Entrée pour confirmer et sortir de l'interface GDB.

```
(gdb) quit
A debugging session is active.

	Inferior 1 [process 3886] will be killed.

Quit anyway? (y or n) y
```

