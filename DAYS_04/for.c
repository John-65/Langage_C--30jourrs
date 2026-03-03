#include <stdio.h>  // Bibliothèque standard d'entrée/sortie

int main() {

    int nombre;  // Variable pour stocker le nombre choisi par l'utilisateur

    // Demande du nombre
    printf("Entrez un nombre pour afficher sa table : ");
    scanf("%d", &nombre);

    // Boucle for :
    // Initialisation : i = 1
    // Condition : i <= 10
    // Incrémentation : i++
    for (int i = 1; i <= 10; i++) {

        // Affichage de la table de multiplication
        printf("%d x %d = %d\n", nombre, i, nombre * i);
    }

    return 0;  // Fin du programme
}