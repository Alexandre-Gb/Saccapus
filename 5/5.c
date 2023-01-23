/*
* Trois nombres impairs d'affilée
---------------------------------
Écrire une fonction C three_in_a_row qui prend en argument un tableau d'entiers ainsi que la taille de ce tableau.
La fonction devra retourner 1 si elle detecte la présence dans le tableau de trois nombres impairs consécutifs. 
Si aucun tel triplet n'est dans le tableau, votre fonction devra retourner 0.
*/

int three_in_a_row(int* array, int size){
  int count = 0;
  int i;
  for (i = 0; i < size; i++){
    if (count == 3)
        break;

    if (array[i] % 2 != 0)
        count++;
    else 
        count = 0;
  }

  return (count == 3);
}