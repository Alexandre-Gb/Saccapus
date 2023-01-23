/*
* Somme des éléments positifs d'un tableau
------------------------------------------
* Écrire une fonction C sum_of_positives qui prend en paramètre un tableau d'entiers ansi que 
* son nombre d'éléments. 
* La fonction retournera la somme des éléments positifs contenus dans le tableau. 
* Il ne faut donc pas ajouter les négatifs s'il y en a.
*/

int sum_of_positives(int array[], int size) {
    int total = 0;
    int i;
    for (i = 0; i < size; i++)
        if (array[i] > 0)
            total += array[i];

    return total;
}