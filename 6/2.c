/*
* Occurences de caractères
--------------------------
* Complèter la fonction count pour quelle retourne le nombre d'occurences du charactère c
* passé en argument dans la chaîne s elle aussi donnée en argument.
*
* Écrire votre fonction sans rien utiliser des bibliothèques standards.
*
* Pour rappel, une chaîne de caractères C est tout d'abord un tableau de char.
* Une chaîne est donc manipulée par l'adresse de son premier élément.
* Une chaîne de caractères C se termine toujours par le caractère '\0' qui encode justement la fin de la chaîne.
* C'est un marqueur de fin de tableau car le langage C ne connait pas la longueur des tableaux.
*/

int count(char *s, char c){
    int count = 0;
    int i;
    for (i = 0; s[i] != '\0'; i++){
        if (s[i] == c)
            count++;
    }

    return count;
}