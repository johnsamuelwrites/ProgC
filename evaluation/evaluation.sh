#!/bin/bash

verify_if_not_empty_file (){
  if [ -s $1 ]; then
          # file not empty.
          return 0
  else
          # Empty file
          return 1
  fi
}

compile_files_in_directory (){
  filelist=$1
  IFS=";" read -r -a files <<< "${filelist}"
  for file in "${files[@]}";
  do
    filename="src/$file"
    verify_if_not_empty_file "$filename"
    value=$?
    if [ "$value" = 1 ]
    then  
      echo "                                       Empty C file: $filename                                  "
    else
      echo "                                       Compiling $filename                                      "
      gcc -c $filename # Compile to check for errors
      gcc -c -Wall -Werror -Wextra $filename # Compile to check for errors
      rm -f *.o *.gch src/*.o src/*.gch
    fi
  done

}

echo "================================================================================================"
echo "                                       Evaluation                                               "
echo "================================================================================================"

declare -a TPs

TP[0]="binaire.c;bonjour.c;boucles.c;cercle.c;conditions.c;opérateurs2.c;opérateurs.c;sizeof_types.c;variables.c"
TP[1]="bits.c;chaine.c;couleurs.c;etudiant2.c;etudiant.c;fibonacci.c;ptrvariables.c;puissance.c;tableauptr.c"
TP[2]="chercher.c;couleur_compteur.c;couleurs.c;grand_petit.c;octets.c;recherche_dichotomique.c;sizeof.c;tri.c"
TP[3]="calcule.c;chercherfichier.c;etudiant_bd.c;factorielle.c;fichier.c;fichier.h;liste.c;liste.h;main.c;operator.c;operator.h"
TP[4]="client.c;client.h;repertoire.c;repertoire.h;serveur.c;serveur.h"
TP[5]="bmp.c;bmp.h;client.c;client.h;couleur.c;couleur.h;serveur.c;serveur.h"

i=1
for filelist in "${TP[@]}"
do
  directory="TP$i"
  echo "------------------------------------------------------------------------------------------------"
  echo "                                       Evaluating $directory                                     "
  echo "------------------------------------------------------------------------------------------------"
  i=$((i + 1))
  cd "../$directory"
  ls
  ls src/

  verify_if_not_empty_file "CONTRIBUTORS.md"
  value=$?
  if [ "$value" = 1 ]
  then  
     echo "Empty CONTRIBUTORS.md file"
   fi

  verify_if_not_empty_file "README.md"
  value=$?
  if [ "$value" = 1 ]
  then  
     echo "Empty CONTRIBUTORS.md file"
   fi
  
  compile_files_in_directory ${filelist}
  cd "../evaluation"
done
echo "================================================================================================"
echo "                                       Evaluation Finished                                      "
echo "================================================================================================"
