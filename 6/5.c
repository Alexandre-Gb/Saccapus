/*
* Encadrer une chaine de caractères C
-------------------------------------
* Écrire une fonction C qui prend en argument une chaîne de caractères et qui affiche cette chaîne de manière encadrée avec des caractères #.
*
* Ainsi, si le mot est "pouet", la fonction devra alors afficher:
#########
# pouet #
#########
*
* Le cadre est espacé du mot d'un espace avant et après la chaîne. 
* On affichera rien du tout si la chaîne en argument est la chaîne vide.
*/

#include <stdio.h>
#include <string.h>

void frame_string(char *s){
    if (s[0] == '\0')
        return;
    
    int len = strlen(s);
    int i;
    for (i = 0; i < len + 4; i++)
        printf("#");
    
    printf("\n# %s #\n", s);

    for (i = 0; i < len + 4; i++)
        printf("#");

    printf("\n");
    return;
}