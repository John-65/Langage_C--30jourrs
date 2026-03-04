// //Aujourd’hui on attaque les boucles while et do...while.

// C'est très important parce que contrairement à for, ces boucles sont utilisées quand on ne connaît pas à l'avance le nombre de répétitions.


// la boucle while s'execute si la condiiton est vrai sinon pass
#include <stdio.h>


int main(){
    int i=1;
    while (i<=10)
    {
        printf("%d\n",i);
        /* code */
        i++; //vraiment nécesaire pour que le i gange de valeur dans son passage dans la boucle sinon on aura une boucle infini

    }

    // do while nous permet de faire des controles laisse passer si condition vérifier sinon recommence.



     int mot_de_passe;

    do {
        printf("Entrez le mot de passe : ");
        scanf("%d", &mot_de_passe);
    } while (mot_de_passe != 1234);

    printf("Acces autorise !\n");

    return 0;
}