#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int nb_etu;
    double sum;
    double moy;
    

    sum = 0;
    
    do{
        printf("veillez entrez le nonbre d'etudiant: ");
        scanf("%d", &nb_etu);
        
    } while (nb_etu<=0);
    
    double tab[nb_etu];

 for(int i=0; i<=nb_etu-1; i++){
    printf("veillez entrez la note de l'étudian %d :  ",i+1);
    scanf("%lf", &tab[i]);
    sum +=tab[i];

 }
 printf("sommme: %lf",sum);

 moy =(double)sum/nb_etu;

 printf("la moyenne de la classe : %lf", moy);

 return 0;


}
