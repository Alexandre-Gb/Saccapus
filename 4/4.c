/*
* Incremente le !
-----------------
* Écrire une function incremente qui prend l'adresse p d'un entier et un entier inc et 
* incrémente l'entier pointé par p de la valeur inc. La fonction retourne void.
*/

void incremente(int* p, int inc) {
    *p = *p + inc;
}