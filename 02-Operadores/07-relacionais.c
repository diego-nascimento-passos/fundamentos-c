#include <stdio.h>

int main (){

    // Operadores relacionais
    int num1, num2;

    // Solicita ao usuário que insira dois números
    printf ("Digite o primeiro número: ");
    scanf ("%d", &num1);
    
    printf ("Digite o segundo número: ");
    scanf ("%d", &num2);

    // Compara os números usando operadores relacionais 
    printf ("%d\n", num1 > num2); // Maior que
    printf ("%d\n", num1 < num2); // Menor que
    printf ("%d\n", num1 == num2); // Igual a
    printf ("%d\n", num1 != num2); // Diferente de

    // Retorna 1 (verdadeiro) se num1 for maior que num2, caso contrário retorna 0 (falso)
    return 0;
}