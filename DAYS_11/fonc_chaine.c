//les fonctions sur les chaines: strlen(longuer de la chaine); strcpy;strncpy;  strcat, strncat(permet d'ajouter une chaine à la fin d'une autre); strcmp(permet de comparer deux chaines de caractères)
#include <stdio.h>
#include <string.h>//librairie des fonctions sur les chaîne de caractères

int main(){
    char a[]="ali";
    char d[]="amine";

    int s=strlen(a);

    printf("%d", s);

    char *r=strcpy(d,a);

    puts(d);

    printf("\n%s\n", r);

    char *t=strcat(d,a);
    puts(d);



    return 0;
}