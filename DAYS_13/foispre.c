//

#include <stdio.h>

int main(){
    int tab[6] = {10, 20, 10, 30, 10, 40};
    int nombre;
    int i, compteur = 0;

    printf("veillez entrer le nombre que vous chercher");
    scanf("%d", &nombre);

    for(i=0; i<=5; i++){
        if(nombre==tab[i]){
            compteur+=1;
        }
    }
    printf("Le nombre %d apparait %d fois\n", nombre, compteur);



}