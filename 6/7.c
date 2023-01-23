/*
* Arguments court et long d'un programme C
------------------------------------------
* Écrire un programme C qui inspecte tous ses arguments et finit par afficher le plus court de ses arguments 
* et ensuite le plus long. 
*
* Votre programme devra suivre la mise en page qui suit:
Platon@debian~$> ./a.out arg1 argum2 argument3 a4
plus court argument: a4
plus long argument: argument3
*
* le nom du programme (ici ./a.out) ne sera pas considéré comme un argument. 
* Le programme sera toujours appelé avec au moins 1 argument minimum. 
* Si plusieurs arguments sont de taille minimale ou maximale, votre programme devra choisir systématiquement 
* les premiers des arguments disponibles (le premier parmi les plus petits et/ou le premier parmi les plus longs).
*/

#include <stdio.h>

int main(int argc, char* argv[]){	
    int i, j;
    int min = 0, max = 0;
    int min_index = 0, max_index = 0;
    for (i = 1; i < argc; i++){
        for (j = 0; argv[i][j] != '\0'; j++);
        if (min == 0 || j < min){
            min = j;
            min_index = i;
        }
        if (max == 0 || j > max){
            max = j;
            max_index = i;
        }
    }

    printf("plus court argument: %s\n", argv[min_index]);
    printf("plus long argument: %s\n", argv[max_index]);
    return 0;
}