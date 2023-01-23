/*
* Un triangle avec des caractères ascii
---------------------------------------
* Écrire une fonction ascii_triangle qui prend en argument un entier et affiche un triangle 
* avec des caractères étoile *.
*/

#include <stdio.h>

void ascii_triangle(int n){
    int i, j;
    for (i = 1; i <= n; i++){
        for (j = 0; j < i; j++)
            printf("*");
        printf("\n");
    }
    return;
}