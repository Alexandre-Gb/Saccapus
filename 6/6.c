/*
* Mettre les lettres en majuscule dans une chaîne
-------------------------------------------------
* Écrire une fonction C qui prend en argument une chaîne de caractères et qui modifie les lettres minuscules
* qui y sont dedans pour les transformer en leur majuscules correspondantes.
*
* Les autres caratères contenus dans la chaînes qui ne sont pas des lettres minuscules ne seront pas affectés.
*/

void to_upper_in_string(char *s){
    if (s[0] == '\0')
        return;
    
    int i;
    for (i = 0; s[i] != '\0'; i++){
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] -= 32;
    }

    return;
}