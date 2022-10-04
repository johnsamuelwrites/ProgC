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
$ gcc --ggdb3 erreurs.c
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

Nous voyons que l'erreur se situe à la ligne 13 du programme (erreurs.c). Vous pouvez maintenant quitter gdb en utilisant `quit`, corriger le code et répéter les étapes ci-dessus jusqu'à ce que l'erreur soit résolue.

```
(gdb) quit
A debugging session is active.

	Inferior 1 [process 3886] will be killed.

Quit anyway? (y or n) y
```



