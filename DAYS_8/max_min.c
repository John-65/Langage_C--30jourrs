// trouvons le max et le min dans un tableau.

#include <stdio.h>

int main()
{
    int tab[5] = {10, 25, 8, 14, 30};
    int max = tab[0];
    int min = tab[0];

    for (int i = 0; i <= 4; i++)
    {
        if (tab[i] >max )
        {
            max = tab[i];
        }
        if(tab[i]<min){
            min=tab[i];
        }
    }
    printf("le maximun dans le tableau est : %d\n",max);
    printf("le minimun dans le tableau est : %d\n",min);

    return 0;
}