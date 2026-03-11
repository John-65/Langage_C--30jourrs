// Les chaines de caractères : Déclaration,initialisation
#include <stdio.h>

int main()
{
    char chaine[6]={'h','e','l','l','o','\0'};
    char mot[6]="hello";
    char *word = "hello"; //chaîne de caractère constante 
    char nom[20];

    printf("%s\n",chaine);

    puts(mot);

    printf("Quel est votre nom :  ");
    fgets(nom,20, stdin);// la bonne manière pour lire l'entrée de l'user 
    printf("votre nom : %s", nom);


    return 0;
}