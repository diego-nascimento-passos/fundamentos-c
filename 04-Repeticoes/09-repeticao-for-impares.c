#include <stdio.h>

int main (){

    // Declarando variáveis 
    int num;
    int soma = 0;

    // Estrututa de repetição para pecorre de 1 a 20.
    for (num = 1; num <= 20; num++){
        if (num % 2 != 0){ // Estrutura de condicional para calcular os impares
            soma += num;
        }
    }
    printf ("A soma dos impares é: %d", soma);


    return 0;
}