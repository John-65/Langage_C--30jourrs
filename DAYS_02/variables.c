/*Une variables est un espace mémoire nommé qui contient une valeur */

 

#include <stdio.h>

int main() {
    //Déclaration de variable
    int age;
    float masse = 13.5;
    char lettre = 'j';

    /*Types ----> Format
    int    ----->%d
    float ------>%f
    double ----->%lf
    char ------>%c*/

    //affichons à l'écran la masse et la lettre(la valeur des variables)
    printf("La masse du livre est: %f\n", masse);

    printf("voici la lettre: %c", lettre);


    return 0;


}