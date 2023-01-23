/*
* Trouver la première voyelle
-----------------------------
* Écrire une fonction has_vowel qui prend une chaîne de caractères en paramètre et qui 
* retourne un entier correspondant au code ASCII de la première voyelle trouvée dans la chaine. 
* On retournera 0 si aucune voyelle n'apparaît dans le mot.
*/
#include <string.h>

const char* vowel="aeiouy";

int has_vowel(const char* s){
    int i = 0;
    while(s[i] != '\0'){
        if (strchr(vowel, s[i]) != NULL){
            return s[i];
        }
    }
    return 0;
}