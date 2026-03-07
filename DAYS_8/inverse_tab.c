// nous allons inverser un tableau

#include <stdio.h>

int main(){

    int tab[5] = {10, 25, 8, 14, 30};
    int i, temp;

    // inversion du tableau
    for(i = 0; i < 5/2; i++){
        //il est important de noter qu'on ne parcourt que la moitié du tableau pour tout inverser

        temp = tab[i];
        tab[i] = tab[4-i];
        tab[4-i] = temp;

    }

    // affichage du tableau
    for(i = 0; i <= 4; i++){
        printf("%d\n", tab[i]);
    }

    return 0;
}