// . Pourquoi créer des fonctions ?
// Les fonctions permettent de :

// Découper un programme en blocs logiques plus petits et compréhensibles.

// Éviter la répétition de code : tu écris une fois une action, et tu l’appelles plusieurs fois.

// Faciliter la maintenance : modifier une fonction impacte seulement son code, pas tout le programme.

// Tester indépendamment chaque partie du programme.

// Améliorer la lisibilité : le code devient plus structuré.
#include <stdio.h>

void rempliraffiTableau(int t[], int n) {
    for(int i=0; i<=n-1; i++){
        printf("Entrez la valeur pour l'indice %d : ", i );
        scanf("%d",&t[i]);
    }
    for(int i=0; i<=n-1; i++){
        printf("%d ",t[i]);
    }
}
int main(){
    int n;

    printf("veillez le nombre de case du tableau");
    scanf("%d", &n);
    int tab[n];
    rempliraffiTableau(tab, n);
}
