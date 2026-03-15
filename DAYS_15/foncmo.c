#include <stdio.h>

// Fonction pour remplir le tableau
void remplirTableau(int t[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Entrez la valeur pour l'indice %d : ", i);
        scanf("%d", &t[i]);
    }
}

// Fonction pour afficher le tableau
void afficherTableau(int t[], int n) {
    printf("Tableau : ");
    for (int i = 0; i < n; i++) {
        printf("%d", t[i]);
        if (i < n - 1) {
            printf(", ");
        }
    }
    printf("\n");
}

// Fonction qui calcule la somme des éléments
int sommeTableau(int t[], int n) {
    int somme = 0;
    for (int i = 0; i < n; i++) {
        somme += t[i];
    }
    return somme;
}

// Fonction qui calcule la moyenne (retourne un float)
float moyenneTableau(int t[], int n) {
    int somme = sommeTableau(t, n);        // on réutilise la fonction somme
    return (float)somme / n;                // conversion explicite en float
}

// Fonction qui trouve la valeur maximale
int maximumTableau(int t[], int n) {
    int max = t[0];                         // on initialise avec le premier élément
    for (int i = 1; i < n; i++) {
        if (t[i] > max) {
            max = t[i];
        }
    }
    return max;
}

int main() {
    int n;

    printf("Veuillez entrer le nombre de cases du tableau : ");
    scanf("%d", &n);

    int tab[n];  // tableau de taille variable (valable en C99)

    // Remplissage
    remplirTableau(tab, n);

    // Affichage
    afficherTableau(tab, n);

    // Calculs
    int somme = sommeTableau(tab, n);
    float moyenne = moyenneTableau(tab, n);
    int max = maximumTableau(tab, n);

    // Résultats
    printf("Somme des éléments : %d\n", somme);
    printf("Moyenne : %.2f\n", moyenne);
    printf("Valeur maximale : %d\n", max);

    return 0;
}