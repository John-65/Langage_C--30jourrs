#include <stdio.h>

int main() {

    FILE *fp;
    int c;  // important : int et pas char
    fp = fopen("D:/Learn_C/DAYS_18/text.txt", "r");

    if (fp == NULL) {
        printf("Erreur d'ouverture du fichier\n");
        return 1;  // on arrête le programme
    }

    // lecture caractère par caractère
    c = fgetc(fp);
    while (c != EOF) {
        printf("%c", c);
        c = fgetc(fp);
    }

    fclose(fp);  // fermer le fichier
    return 0;
}