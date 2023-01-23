/*
* Élever au carré les éléments d'un tableau
* -----------------------------------------
* Écrire une fonction C qui prend en argument un tableau d'entiers
* ainsi que sa taille puis élève au carré tous les éléments contenus dans ce tableau.
*/

void apply_square_array(int* array, int nb_term){
  int i;
  for (i = 0; i < nb_term; i++){
    array[i] *= array[i];
  }
  return;
}