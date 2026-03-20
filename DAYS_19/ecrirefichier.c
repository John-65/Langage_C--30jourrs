#include <stdio.h>

int main(){

    FILE *fp = fopen("D:/Learn_C/DAYS_19/ecrire.txt", "w");

    // vérifier si le fichier est bien ouvert
    if (fp == NULL){
        printf("Erreur d'ouverture du fichier\n");
        return 1;
    }

    // écrire un caractère
    fputc('b', fp);
    fprintf(fp, "Bonjour John !\n");

    // fermer le fichier
    fclose(fp);

    return 0;
}