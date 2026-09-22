#include <stdio.h>

int main (){
    
    // Decrarando as variáveis
    int num;
    int contador;

    // Entrada de daos para a tabuada
     printf ("Digite um número: ");
        scanf ("%d", &num);

    //  Estrutura de repetição For
    for (contador = 1; contador <= 10; contador++){
        printf ("%d X %d = %d\n", num, contador, num*contador);        
    }
    return 0;
}