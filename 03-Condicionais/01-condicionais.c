#include <stdio.h>

int main () {

    // Declaração de variáveis
    int idade;

    // Entrada de dados
    printf ("Qual a sua idade: ");
    scanf ("%d", &idade);

    // Condição if + else
    if (idade >= 18){
        printf ("Maior de idade!");
    } 
    else {
        printf ("Menor de idade!");
    }

    return 0;
}

