#include <stdio.h>

int main () {

    // Declaração de variáveis
    int num1, num2;
     

    // Entrada de dados
    printf ("Digite o primeiro número: ");
    scanf ("%d", &num1);

    printf ("Digite o segundo número: ");
    scanf ("%d", &num2);

    // Operadores aritméticos
    printf ("Soma: %d\n", num1 + num2); // Adição
    printf ("Subtração: %d\n", num1 - num2); // Subtração
    printf ("Multiplicação: %d\n", num1 * num2); // Multiplicação
    printf ("Divisão: %d\n", num1 / num2); // Divisã
    printf ("Resto da divisão: %d\n", num1 % num2); // Resto da divisão

    return 0;
}