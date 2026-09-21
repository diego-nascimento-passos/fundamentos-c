#include <stdio.h>

int main (){

    // declaração da variáriaveis
    int contador;
    int soma = 0;

    // Estrutura de repetição For
    for (contador = 1; contador <= 10; contador++){
        soma += contador;
        printf ("%d\n", contador);
    }
    printf ("A soma é: %d\n", soma);

    return 0;
}