#include <stdio.h>

int main (){

    // Declarando as variáveis
    int num;
    int soma = 0;

    // Estrutura de repetição para pecorre de 1 a 20
    for (num = 1; num <= 20; num++){
        if (num % 2 == 0 ){  // Estrutura de codicional IF para calcular os pares.
            soma += num;
        }
    }
    printf ("A soma dos pares é: %d", soma);

    return 0;
}