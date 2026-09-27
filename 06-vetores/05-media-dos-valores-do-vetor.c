#include <stdio.h>

int main(){

    // Declara um vetor para guardar 5 notas e variáveis de apoio
    float nota[5];
    int contador;
    float soma = 0;// Inicializa a soma com zero
    float media;

    // Primeiro loop: pede e lê as 5 notas do usuário
    for (contador = 0; contador < 5; contador++){
        printf ("Digite a nota %d: ", contador + 1);
        scanf ("%f", &nota[contador]);
    }
    // Segundo loop: percorre o vetor somando todas as notas
    for (contador = 0; contador < 5; contador++){
        soma = soma + nota[contador];
    }

    // Calcula a média dividindo a soma total por 5
    media = soma / 5;

    // Mostra o valor da soma e da média na tela
    printf ("A soma é: %.2f\n", soma);
    printf ("Média: %.2f", media);

    return 0;
}