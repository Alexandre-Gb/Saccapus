/*
* Compter les lettres minuscules
--------------------------------
* Écrire une fonction qui prend en argument une chaîne de caractères C en ascii
* et retourne le nombre de lettres minuscules contenues dans cette chaîne.
*/

int count_lower_case(char *s){
    int count = 0;
    int i;
    for (i = 0; s[i] != '\0'; i++){
        if (s[i] >= 'a' && s[i] <= 'z')
            count++;
    }

    return count;
}