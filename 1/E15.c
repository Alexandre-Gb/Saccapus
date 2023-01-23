/*
* Compter trois types de lettres
* Écrire un programme C qui lit son premier argument et compte les caractères de différents types 
* dans le premier argument donné au programme. Il y aura trois types de caractères à compter : 
* - les lettres minuscules
* - les lettres majuscules 
* - le reste du monde. 
*
* Une fois le comptage terminé, votre programme devra faire un résumé de ce qu'il a compté sur la sortie standard via l'affichage suivant :
*
* - Nombre de majuscules : X   
* - Nombre de minuscules : Y   
* - Nombre d'autres caractères : Z
*
* Où X, Y et Z seront remplacés par les entiers qui vont bien. Pas besoin d'adapter les pluriels selon les comptes trouvés.
*/

#include <stdio.h>

int main(int argc, char* argv[]){
  int x = 0;
  int y = 0;
  int z = 0;

  if (argc > 1){
    int i;
    for (i = 0; argv[1][i] != '\0'; i++){
      if (argv[1][i] >= 'A' && argv[1][i] <= 'Z'){
        x++;
      } else if (argv[1][i] >= 'a' && argv[1][i] <= 'z'){
        y++;
      } else {
        z++;
      }
    }
  }

  printf("Nombre de majuscules : %d\n", x);
  printf("Nombre de minuscules : %d\n", y);
  printf("Nombre d'autres caractères : %d\n", z);
  return 0;
}