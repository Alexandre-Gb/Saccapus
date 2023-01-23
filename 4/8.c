/*
* Minimum de trois entiers
--------------------------
* Écrire une fonction min_of_three qui prend trois entiers en paramètres et retourne 
* le minimum de ces trois entiers.
*/

int min_of_three(int a, int b, int c){
    int min = a;
    if (b < min)
        min = b;
    if (c < min)
        min = c;
    return min;
}