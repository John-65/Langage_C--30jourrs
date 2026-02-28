/*nous allons ecrire un programme qui demande à l'utilisaeur d'entrée son nom, son âge et puis l'affiche. ensuite nous allons demander deux nombres puis faire des opérations arithmétiques dessus*/


#include <stdio.h>

int main() {
    int age;
    char nom[10], prenom[10];
    int a, b;
    printf("veillez entrer votre nom : ");
    scanf("%s", nom);
    printf("\nveillez entrer votre prénom:");
    scanf("%s", prenom);

    printf("\nveillez entrez votre âge:");
    scanf("%d", &age);
    printf("-----------------------------------------------------------\n");
    printf("|Votre nom est :%s  %s vous avez %d Ans|\n", nom, prenom, age);
    printf("-----------------------------------------------------------");


    printf("\nveillez entrer deux nombres:\n");
    printf("a=");
    scanf("%d", &a);
    printf("b=");

    scanf("%d", &b);
     printf("\n\nSomme : %d\n", a + b);
    printf("Produit : %d\n", a * b);
    printf("Difference : %d\n", a - b);
    printf("Division : %d\n", a / b);






    return 0;
}