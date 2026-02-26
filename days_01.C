// PARTIE 1 : structure d'un programme C

// La structure d'un programme C

/*include <stdio.h>: la librairie conteant les entrées et sorties
-int main() :  Cette fonction constitue le point d’entrée
principale du programme

-printf : permet de faire des affichages à l'écran

-return 0; : Elle permet à la fonction main d’envoyer un retour  afin d’indiquer au système d’exploitation que notre programme s’est bien exécuté et aucune erreur n’a été rencontré. */
#include <stdio.h>

int main()
{

    printf("Voila la structure d'un programme C Docummenter par john\n");

    // toute instruction en langage c est terminer par un point-virgule(;)

    // PARTIE 2 : Variables et Types de données

    // En C, chaque variable doit avoir un type précis.

    /*Les types de base

    int ---> Nombre entier
    float ----> nombre décimal simple précision
    double ----> nombre décimale à double précision
    char ----> caractère */

    /*sizeof(): Permet de connaître la taille en mémoire d’un type.
    Ainsi affichon à l' écrant avec printf la taille de ces types de base en mémoire */
    printf("Taille de int : %zu octets\n", sizeof(int));
    printf("Taille de float : %zu octets\n", sizeof(float));
    printf("Taille de double : %zu octets\n", sizeof(double));
    printf("Taille de char : %zu octets\n", sizeof(char));

    return 0;
}