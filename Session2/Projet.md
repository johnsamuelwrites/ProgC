Année: 2021-2022
----------------

# Projet

## Tâche 1.
Écrivez un programme en créant deux
fichiers *operateur.h* et *operateur.c*. Dans *operateur.h*,
déclarez les fonctions suivantes : somme, différence, produit, quotient,
modulo, 'et', ou et négation qui utilisent deux variables num1
(entier), num2 (entier). Implémentez ces fonctions dans *operateur.c*.
Pour l'opérateur négation, utilisez seulement un numéro.

Considérez une variable op qui contient un de ces différents
opérateurs. (+, -, *, /, %, &, |, ~). Utilisez switch, par exemple,
si op est égal à '+', le programme doit appeler la fonction
'somme' etc. Testez votre programme avec différentes valeurs de num1,
num2, op.

## Tâche 2.
### Client-Serveur

Un environnement client-serveur permet un mode de communication sur un
réseau entre les programmes. Un de ces programmes est appelé serveur qui
répond aux requêtes d'autres programmes appelés clients. Par exemple,

1.  Un client envoie un message au serveur et le serveur reçoit le
    message et le renvoie.
2.  Un client envoie l'opérateur et un/deux numéros et le serveur fait
    le calcul et envoie le résultat.

Référence : <https://fr.wikipedia.org/wiki/Client-serveur>

Pour simuler un environnement client-serveur, on va utiliser une seule
machine en lançant deux terminaux. Sur un des deux terminaux exécutez le
code du serveur. Sur l'autre, exécutez le code du client.

Lisez bien tous les fichiers suivants:  client.h, client.c, serveur.h, serveur.c, Makefile. 

Exécutez

```
$ make             
```

et voyez les fichiers exécutables qui sont créés.

Ouvrez deux terminaux. Sur le premier terminal, exécutez

```
./serveur             
```

et sur le second terminal

```
./client             
```

Entrez un message et voyez les affichages sur les deux terminaux.

Modifiez la fonction recois_envoie_message (serveur.c). Quand le
serveur reçoit un message, il demande à l'utilisateur de saisir un
message et envoie ce message au client. Testez votre code. N'oubliez pas
d'utiliser make (pour la compilation et la génération des fichiers
exécutables).

Vous avez remarqué les premiers caractères dans chaque message :
'message' suivi par :. Pour votre prochaine question, on utilisera
calcule. Modifiez les fichiers client.c et serveur.c pour le support des
calculs simples (+,-,*,...). Ajoutez une fonction
envoie_operateur_numeros(...) dans le fichier client.c et
recois_numeros_calcule(...) dans le fichier serveur.c. Le client
envoie l'opérateur et un (ou deux) numéros et le serveur envoie le
résultat. Par exemple, si le client envoie le message

```
calcule : + 23 45             
```

Le serveur répond

```
calcule : 68              
```

Testez votre code avec les numéros flottants et entiers.


## Tâche 3.
Téléchargez le dossier etudiant. Dans ce
dossier, il y a 5 notes de 5 étudiants. Utilisez
envoie_operateur_numeros pour calculer la somme total des
notes de chaque étudiant ainsi que la moyenne de classe pour chaque
sujet.

Vous avez déjà implémenté la fonctionnalité permettant d'effectuer divers calculs comme l'addition,
la multiplication côté serveur, mais en utilisant 2 nombres à la fois.

Le but de l'exercice final est de calculer la somme de 5 notes et la moyenne pour chaque élève 
et pour la classe de 5 élèves (les détails sont stockés dans le répertoire). 

Sans aucune modification du côté serveur, vous devez assurer une série d'opérations côté client pour obtenir ces résultats

Par exemple, le client effectue une série d'appels suivants :
```
+ note1 note2
+ note3 note4
...
/ somme 5
```

## Tâche 4.
Vous avez remarqué que nous avons utilisé les messages très simples
entre client et serveur

```              
message: bonjour             
```

par exemple

```              
calcule: + 23 45              
```

Modifiez le code client.c et serveur.c et ajoutez de nouvelles fonctions
pour travailler avec le format de messages JSON. 

Par exemple,

```              
{                
  "code" : "message",                
  "valeurs" : [ "bonjour"]              
}

{ 
  "code" : "calcule",                
  "valeurs" : [ "+", "23", "45" ]              
}              

```

L'objectif de cette tâche est d'assurer la communication entre le client et le serveur en utilisant les formats JSON.

A l'issue de cette tâche, nous aurons deux possibilités
1. Communication entre le client et le serveur  en utilisant des messages simples
2. Communication entre le client et le serveur en utilisant JSON.

Testez votre code et vérifiez si toutes les tâches précédentes fonctionnent correctement en utilisant ces deux possibilités.


#### Fichiers

*client.c, client.h, Makefile, serveur.c, serveur.h, *operateur.h*, *operateur.c*

#### Instructions

-   N'oubliez pas les commentaires (nom de fichier, objectif, auteurs,
    , les lignes importantes de code etc.). Les commentaires sont notés.
-   N'oubliez pas de mettre à jour le fichier README et ajouter les
    détails concernant votre deuxième exercice.
-   Compte rendu en format .zip en un seul fichier.


