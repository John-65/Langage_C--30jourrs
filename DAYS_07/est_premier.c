#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

int main()
{
    int Nbre;
    bool est_premier = true; // Initialisation à vrai

    printf("Veuillez entrer le nombre : ");
    scanf("%d", &Nbre);

    if (Nbre <= 1) {
        printf("%d n'est pas premier\n", Nbre);
        return 0; // On peut terminer ici
    }
    else if (Nbre <= 3) {
        printf("%d est premier\n", Nbre);
        return 0;
    }
    else if (Nbre % 2 == 0) {
        printf("%d n'est pas premier\n", Nbre);
        return 0;
    }

    // On teste les diviseurs impairs jusqu'à sqrt(Nbre)
    double s = sqrt(Nbre);
    for (int i = 3; i <= s; i += 2) {
        if (Nbre % i == 0) {
            est_premier = false; // Un diviseur trouvé → pas premier
            break;
        }
    }

    if (est_premier)
        printf("%d est premier\n", Nbre);
    else
        printf("%d n'est pas premier\n", Nbre);

    return 0;
}