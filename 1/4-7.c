/*
* Jeu d'instructions arithmétiques niveau 1
* Voici quelques instructions arithmétiques simples du langage C manipulant des variables entières.
*/

int a;

/* a=10 // NON */
a = 10;
if ((-1) == 1){
  a *= 10;
}

/* a=20 // NON */
a = (10 * 2);
if ((10 - 0) <= (-1)){
  a = (-1);
}

/* a=40 // OUI */
a += a;
if (2 >= 1){
  a *= 1;
}

/*
* Donnez la valeur de la variable a en fin d'exécution de ce bout de code 
* ou bien entrez Erreur en cas d'instruction déclenchant une erreur durant l'exécution (typiquement une division par zéro).
* --------------------------------
    a = 40
* --------------------------------



---------------------------------------------------
---------------------------------------------------
---------------------------------------------------



* Jeu d'instructions arithmétiques niveau 2
* Voici quelques instructions arithmétiques simples du langage C manipulant des variables entières.
*/

int a;

a = 2;
a /= 1;
a *= (-1);

/* a=-2 // ERREUR */
if (a / 0 == 10){
  a -= 0;
}
a = 1;
if (a != 2){
  a = 0;
}

/*
* Donnez la valeur de la variable a en fin d'exécution de ce bout de code 
* ou bien entrez Erreur en cas d'instruction déclenchant une erreur durant l'exécution (typiquement une division par zéro).
* --------------------------------
    ERREUR
* --------------------------------



---------------------------------------------------
---------------------------------------------------
---------------------------------------------------



* Jeu d'instructions arithmétiques niveau 3
* Voici quelques instructions arithmétiques simples du langage C manipulant des variables entières.
*/

int a;
int b;

a = 2;
b = 0;
a = (-1);
b = 1;
/* a=-1 & b=1 // NON */
if (b == 0){
  a -= (-1);
}

/* a=-1 & b=1 // OUI - a=-1 & b=1 */
if (0 != 1){
  a -= 0;
}

b = (1 / a);
b = (10 * b);

/*
* Donnez la valeur de la variable a en fin d'exécution de ce bout de code 
* ou bien entrez Erreur en cas d'instruction déclenchant une erreur durant l'exécution (typiquement une division par zéro).
* --------------------------------
    a = -1  <--
    b = -10
* --------------------------------



---------------------------------------------------
---------------------------------------------------
---------------------------------------------------



* Jeu d'instructions arithmétiques niveau 4
* Voici quelques instructions arithmétiques simples du langage C manipulant des variables entières.
*/

int a;
int b;

a = 10;                     /* a = 10 // b = ? */
b = (-1);                   /* a = 10 // b = -1 */
b = (a / (b / 2) - 0);      /* a = 10 // b = ? (b non flotant) */
b = 0 + a;                  /* a = 10 // b = 10 */
b /= a / 0;                 /* ERREUR */

/*
* Donnez la valeur de la variable a en fin d'exécution de ce bout de code 
* ou bien entrez Erreur en cas d'instruction déclenchant une erreur durant l'exécution (typiquement une division par zéro).
* --------------------------------
    ERREUR
* --------------------------------