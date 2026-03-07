#include <stdio.h>
#include <stdlib.h>

int main()
{
    double somme=0;
    double moy =0;
    double notes[5]={14.0, 12.0, 5.0, 4.0, 8.0};
    for (int i=0; i<=4; i++){
       // printf("%.2lf\n",notes[i]);
        somme +=notes[i];


    }
    moy=somme/5;

    printf(" la somme :%.2lf\n",somme);
    printf(" la moyenne :%.2lf\n",moy);


    return 0;
}
