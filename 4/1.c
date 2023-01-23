/*
* Mettre au cube une valeur pointée
-----------------------------------
* Écrire une function cube_it qui prend l'adresse d'un entier (pointeur vers un entier) et remplace 
* la valeur pointée par son cube (c'est à dire l'ancienne valeur élevée à la puissance 3). 
* Faire un choix cohérent pour le prototype de la fonction.
*/

void cube_it(int* p) {
    *p = *p * *p * *p;
}