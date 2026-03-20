#include <stdio.h>

int main(){

    int a = 10;
    char chaine[50];

    // afficher valeur et adresse de a
    printf("a = %d (adresse : %p)\n", a, (void*)&a);

    // afficher adresse du tableau
    printf("adresse de chaine : %p\n", (void*)chaine);

    // pour avoir l'adresse d'une variable on utilise '&'

    return 0;
}