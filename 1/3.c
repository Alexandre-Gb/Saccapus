/*
* Assemblage simple de fonctions
* ------------------------------
Écrire une fonction show_cube qui prend en argument un entier n (par exemple 3) 
* et qui affiche une phrase donnant le cube de cet entier tout en rappelant cet entier 
* (par exemple : Le cube du nombre 3 est le nombre 9.).
*
* L'objectif est ici de ne presque rien coder mais de réutiliser les deux premières fonctions pour construire la troisième.
*/

void display_info(int nb, int cube){
  printf("Le cube du nombre %d est le nombre %d.\n", nb, cube);
}

int calculate_cube(int nb){
  return nb*nb*nb;
}

void show_cube(int n){
  int cube = calculate_cube(n);
  display_info(n, cube);
}