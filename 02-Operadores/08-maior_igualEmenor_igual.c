#include <stdio.h>

int main () {

    // Operadores relacionais <= e >=
    // Declaração de variáveis
    int idade;

    // Entrada de dados
    printf ("Digite sua idade: ");
    scanf ("%d", &idade);

    // Verifica se a idade é maior ou igual a 18 anos e imprime o resultado
    printf ("Você é maior ou igual a 18 anos? %d\n", idade >= 18);
    printf ("Você é menor ou igual a 60 anos? %d\n", idade <= 60);
    
    return 0;
}