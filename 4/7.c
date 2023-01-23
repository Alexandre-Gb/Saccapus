/*
* La moyenne de trois entiers
-----------------------------
* Écrire une fonction mean_of_3 qui prend trois entiers en paramètres et retourne 
* la moyenne (de type double) de ces trois entiers.
*/

double mean_of_3(int a, int b, int c){
    double res = (double)(a + b + c) / 3.0;
    return res;
}