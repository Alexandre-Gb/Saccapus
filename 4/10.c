/*
* Écrire une fonction qui calcule la puissance d'un nombre
----------------------------------------------------------
* Écrire une function puissance qui prend en argument 2 entiers 
* n et p et qui retourne l'entier n^p.
*
* Si l'exposant est nul alors la fonction devra retourner 1.
* Si l'exposant p est strictement négatif alors la fonction doit retourner 0.
*/

int puissance(int n, int p){
    if (p == 0)
        return 1;
    if (p < 0)
        return 0;
    
    int i;
    int res = n;
    for (i = 1; i < p; i++)
        res *= n;
    
    return res;
}