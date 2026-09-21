#include <stdio.h>

int main (){

    // Declarão da variáveis
    int num;

    // Repetiçao do-while
    do{
        printf ("Digite um número: ");
        scanf ("%d", &num);
    }while (num != 0);

    return 0;
}