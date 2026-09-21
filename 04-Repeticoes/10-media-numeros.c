#include <stdio.h>

int main (){

    // Declaraçao das variáveis
    int num, contador;
    float soma = 0;
    float media;

    // Estrutura de repetição For
    for (contador = 1; contador <= 5; contador++){
        printf ("Digite um número: ");
        scanf ("%d", &num);
        soma += num;
    }
    media = soma / 5;
    printf ("A média é: %.1f", media);

    return 0;
}