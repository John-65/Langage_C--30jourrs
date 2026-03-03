#include <stdio.h>   // Bibliothèque standard pour les entrées/sorties (printf, scanf)

int main() {

    int choix;  // Variable qui va stocker le choix de l'utilisateur

    // Affichage du menu
    printf("=== MENU ===\n");
    printf("1. Dire Bonjour\n");
    printf("2. Afficher la table de 5\n");
    printf("3. Quitter\n");
    printf("Votre choix : ");

    // Lecture du choix utilisateur
    scanf("%d", &choix);

    // Structure switch pour gérer plusieurs cas possibles
    switch (choix) {

        case 1:
            // Si l'utilisateur choisit 1
            printf("Bonjour ! Bienvenue dans le programme.\n");
            break;  // Empêche d'exécuter les autres cas

        case 2:
            // Si l'utilisateur choisit 2
            // Boucle for pour afficher la table de multiplication de 5
            for (int i = 1; i <= 10; i++) {
                printf("5 x %d = %d\n", i, 5 * i);
            }
            break;

        case 3:
            // Si l'utilisateur choisit 3
            printf("Au revoir !\n");
            break;

        default:
            // Si l'utilisateur entre un nombre différent de 1, 2 ou 3
            printf("Choix invalide.\n");
    }

    return 0;  // Fin du programme
}