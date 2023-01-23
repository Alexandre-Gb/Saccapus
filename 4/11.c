/*
* Somme des chiffres d'un nombre
--------------------------------
* Écrire une fonction C sum_number qui prend en argument un entier C (qui sera toujours positif ou nul) 
* et qui retourne la somme des chiffres qui composent ce nombre quand on l'écrit en base 10.
*/

int sum_number(int n){
    int sum = 0;
    while (n > 0){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}