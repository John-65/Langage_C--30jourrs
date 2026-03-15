#include <stdio.h>
//nous allons rechercher un ombre dans un tab et dire combien de fois elle apparait

int main(){

    int tab[5] = {10, 25, 8, 14, 30};
    int nombre, i, trouve = 0;

    printf("veillez entrer le nombre que vous chercher");
    scanf("%d", &nombre);

    for(i=0; i<=4; i++){
        if (nombre==tab[i]){
            printf("\nvotre nombre vient d'etre trouver à la position %d\n", i+1);
            trouve=1;
        
        }
        }
    if(trouve==0){
            printf("\npas trouver");   
    }
    return 0;


}