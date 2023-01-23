/*
* longueur d'une chaîne de caractères
-------------------------------------
* Complètez la fonction suivante pour quelle retourne le nombre de caractères contenus dans la chaîne s donnée en argument. 
* Vous devez écrire votre fonction sans rien utiliser des bibliothèques standards.

* Pour rappel, une chaîne de caractères C est tout d'abord un tableau de char. 
* Une chaîne est donc manipulée par l'adresse de son premier élément. 
* Une chaîne de caractères C se termine toujours par le caractère '\0' qui encode justement la fin de la chaîne. 
* C'est un marqueur de fin de tableau car le langage C ne connait pas la longueur des tableaux.
*/

int string_length(char* s){
  int i;
  for (i = 0; s[i] != '\0'; i++);

  return i;
}