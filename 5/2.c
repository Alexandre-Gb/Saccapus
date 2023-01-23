/*
* Moyenne des éléments d'un tableau
-----------------------------------
* Écrire une fonction C average_array qui prend en argument 
* un tableau d'entiers (pointeur vers sa première case) ainsi que 
* sa taille puis retourne un flotant qui devra être la moyenne des éléments 
* contenus dans le tableau. 
* Par convention, la moyenne d'un tableau vide devra être zéro.
*/

float average_array(int* array, int size){
    if (size < 1)
        return 0;
    
    float total = 0;
    int i;
    for (i = 0; i < size; i++){
        total += array[i];
    }

    return total /= size;
}