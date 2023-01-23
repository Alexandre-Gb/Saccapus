/*
* Trouver le plus long argument d'un programme C
------------------------------------------------
* Écrire un programme C qui identifie et affiche son argument le plus long.
*
* Une fois ce dernier identifié, il suffit de l'afficher sur la sortie standard 
* sans oublier d'aller à la ligne après l'affichage. 
*
* Si plusieurs arguments possèdent la taille maximale, il faudra alors afficher 
* le premier parmi les plus grands.
*/

#include <stdio.h>

int main(int argc, char* argv[]){
    int i, j;
    int max = 0;
    int max_index = 0;
    for (i = 1; i < argc; i++){
        for (j = 0; argv[i][j] != '\0'; j++);
        if (j > max){
            max = j;
            max_index = i;
        }
    }

    if (max > 0)
        printf("%s", argv[max_index]);
    printf("\n");
    return 0;
}