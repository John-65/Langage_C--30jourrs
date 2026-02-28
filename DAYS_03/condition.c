/*les structures conditionnel en langage C
if (condition){
action à faire
}
si plusieurs incondition on utilisera if, else if, ou else*/

#include <stdio.h>

int main(){
    int notes;

    printf("Entrer votre note:");
    scanf("%d",&notes);



    if (notes >= 16) {
    printf("Très bien\n");
} 
else if (notes >= 14) {
    printf("Bien\n");
}
else if (notes >= 10) {
    printf("Passable\n");
}
else {
    printf("Échec\n");
}
return 0;
}
