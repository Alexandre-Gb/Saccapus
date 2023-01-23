/*
* Afficher les arguments d'un programme C
* Écrire un programme C qui affiche les arguments que l'on lui a passés lors de son appel en ligne de commandes. 
* Le programme ne devra pas afficher son nom qui est toujours positionné en tête du tableau des arguments. 
* On affichera un argument par ligne. Exécuté sans argument, le programme ne doit donc rien afficher.
*
*
* Voici un exemple d'exécution si le programme se nome a.out
*
* Platon@debian~$> ./a.out voici 3 arguments
* voici
* 3
* arguments
*
* Veuillez à bien placer un seul argument par ligne, sans espace avant ou après, juste un retour à la ligne.
*
*/

#include <stdio.h>

int main(int argc, char *argv[]){
  if (argc > 1){
    int i;
    for (i = 1; i < argc; i++){
      printf("%s\n", argv[i]);
    }
  }
  return 0;
}