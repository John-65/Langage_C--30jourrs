#include <stdio.h>
#include <stdlib.h>

int somme(int a, int b){
    int sum;
    sum= a+b;
    return sum;
}
int produit(int a, int b){
    int pro= a*b;
    return pro;
}
double moyenne(int a, int b){
    return (double)somme(a, b) / 2;
}
int maximum(int a, int b){
    if (a>b){
        return a;
    }else{
        return b;
    }
}
int minimum(int a, int b){
    if(a<b){
        return a;
    }else{
        return b;
    }
}

int main()
{
    int a, b, choix;

    do{
        printf("************* MENU ***********\n");
        printf("* 1 : ----- Somme --------- *\n");
        printf("* 2 : ----- Produit ------- *\n");
        printf("* 3 : ----- Moyenne ------- *\n");
        printf("* 4 : ----- Minimum ------- *\n");
        printf("* 5 : ----- Maximum ------- *\n");
        printf("******************************\n");
        printf("\nQuel est votre choix? : ");
        scanf("%d", &choix);


    }while(choix < 1 || choix > 5);

    printf("veillez entrer deux nombre\n");
    printf("premier nombre : ");
    scanf("%d", &a);
    printf("\ndeuxieme nombre : ");
    scanf("%d", &b);

    if(choix ==1){
        printf("la somme des deux nombre font : %d",somme(a,b));
    }else if(choix==2){
        printf("le produit des deux nombre font: %d \n", produit(a,b));
    }else if(choix==3){
        printf("moyenne: %.2lf\n ", moyenne(a,b));
    }else if(choix==4){
        printf("le Minimum de deux nombres : %d ", minimum(a,b));
    }else if(choix==5){
        printf("le maximun des deux nombres : %d ", maximum(a,b));
    }

    return 0;
}
