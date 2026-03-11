// 🎯 Petit défi pour toi

// Modifie ton programme pour que :

// 1️⃣ L'utilisateur entre la taille du tableau
// 2️⃣ L'utilisateur entre les valeurs
// 3️⃣ Le programme inverse le tableau

#include <stdio.h>


int main(){
    int nb_tab;
    int i, temp;


    do{
        printf("veiller entre le nombre d'entier à entré : ");
        scanf("%d",&nb_tab);
    } while(nb_tab<0);

    int tab[nb_tab];

    for(i=0; i<nb_tab; i++){
        printf("veillez entrer les entiers à inverser: ");
        scanf("%d",&tab[i]);
    }
    
    for(i=0; i<nb_tab/2; i++){
        temp=tab[i];
        tab[i]=tab[nb_tab-i-1];
        tab[nb_tab-i-1] = temp;
     }

      for(i = 0; i <nb_tab; i++){
        printf("%d  F", tab[i]);
    }
} 