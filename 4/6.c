/*
* Maximum de trois entiers
--------------------------
* Écrire une fonction max_of_three qui prend trois entiers en paramètres et 
* retourne le maximum de ces trois entiers.
*/

int max_of_three(int a, int b, int c){
    int max = a;
    if (b > max)
        max = b;
    if (c > max)
        max = c;
    return max;
}