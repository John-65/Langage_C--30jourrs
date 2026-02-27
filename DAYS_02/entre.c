/*Pour permettre à l’utilisateur d’entrer une valeur :

On utilise scanf() de la bibliothèque stdio.h*/

//voici un petit programme qui demande l'age et l'affiche

#include <stdio.h>

int main() {

    int age;

    //Le & est obligatoire avec scanf()

    printf("Entrez votre age : ");
    scanf("%d", &age);

    printf("Vous avez %d ans\n", age);

    return 0;
}