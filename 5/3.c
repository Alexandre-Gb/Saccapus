/*
* Initialisation d'un tableau avec les carrés des entiers
---------------------------------------------------------
* Écrire une fonction init_with_square qui prend en paramètre un tableau d'entiers ainsi 
* qu'un entier pour sa taille. 
* Votre fonction devra initialiser le contenu du tableau en placant les premiers carrés des nombres entiers 
* positifs (1, 4, 9, 16 et ainsi de suite...)
*/

void init_with_square(int array[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        array[i] = (i + 1) * (i + 1);
    }

    return;
}