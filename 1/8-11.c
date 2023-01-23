/*
* Jeu d'instructions arithmétiques niveau 5
* Voici quelques instructions arithmétiques simples du langage C manipulant des variables entières.
*/

int a;
int b;

a = 10;
b = 2;
/* a=10 & b=2 // OUI - a=10 & b=3 */
if (2 <= b){
  b += 1;
}

a *= (-1);
/* a=-10 & b=3 // NON */
if (b == 2){
  b = 2;
}

a = b;
/* a=3 & b=3 // OUI - a=3 & b=3 */
if (10 > 0){
  a /= 1;
  b /= 1;
}
b += a;

/*
* Donnez la valeur de la variable a en fin d'exécution de ce bout de code 
* ou bien entrez Erreur en cas d'instruction déclenchant une erreur durant l'exécution (typiquement une division par zéro).
* --------------------------------
    a = 3 <--
    b = 6
* --------------------------------



---------------------------------------------------
---------------------------------------------------
---------------------------------------------------



* Jeu d'instructions arithmétiques niveau 6
* Voici quelques instructions arithmétiques simples du langage C manipulant des variables entières.
*/

int a;
int b;
int c;

a = 0;
b = 2;
c = 0;
/* a=0 & b=2 & c=0 // NON */
if (2 == 0){
  b -= 1;
}

c -= 1 - (-1);
a *= 0;
a -= a;
/* a=0 & b=2 & c=-2 // OUI - a=0 & b=2 & c=-4 */
if (1 > 10){
  c -= 2;
}

/*
* Donnez la valeur de la variable a en fin d'exécution de ce bout de code 
* ou bien entrez Erreur en cas d'instruction déclenchant une erreur durant l'exécution (typiquement une division par zéro).
* --------------------------------
    a = 0  <--
    b = 2
    c = -4
* --------------------------------



---------------------------------------------------
---------------------------------------------------
---------------------------------------------------



* Jeu d'instructions arithmétiques niveau 7
* Voici quelques instructions arithmétiques simples du langage C manipulant des variables entières.
*/

int a;
int b;
int c;

a = 2;
b = 10;
c = (-1);
/* a=2 & b=10 & c=-1 // OUI - pareil */
if (c != b + 0){
  b = 10;
}

a = c;
c = 0 - 10 * c;
/* a=-1 & b=10 & c=10 // NON */
if (b / 1 == 0){
  a /= b;
}

/*
* Donnez la valeur de la variable a en fin d'exécution de ce bout de code 
* ou bien entrez Erreur en cas d'instruction déclenchant une erreur durant l'exécution (typiquement une division par zéro).
* --------------------------------
    a = -1  <--
    b = 10
    c = 10
* --------------------------------



---------------------------------------------------
---------------------------------------------------
---------------------------------------------------



* Jeu d'instructions arithmétiques niveau 8
* Voici quelques instructions arithmétiques simples du langage C manipulant des variables entières.
*/

int a;
int b;
int c;

a = 1;
b = (-1);
c = 1;
/* a=1 & b=-1 & c=1 // OUI - a=-1 & b=-1 & c=1 */
if (10 != 0){
  a *= b;
  b /= c;
}

c = (b * (-1) * (-1) + 0); 
b = (10 + a - (b - 2));
c = (a * (a / 10));

/*
* Donnez la valeur de la variable a en fin d'exécution de ce bout de code 
* ou bien entrez Erreur en cas d'instruction déclenchant une erreur durant l'exécution (typiquement une division par zéro).
* --------------------------------
    a = -1 
* --------------------------------
*/