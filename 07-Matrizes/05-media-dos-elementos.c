#include <stdio.h>

int main (){

    //Declaração de variáveis
    int matriz[3][3];
    int linha,coluna, soma = 0;
    float media;

    //Primeiro bloclo de loops: Responsável por ler (preencher) a matriz
    for (linha = 0; linha < 3; linha++){
        for (coluna = 0; coluna < 3; coluna++){
            printf ("Digite o número: ");
            scanf ("%d", &matriz[linha][coluna]);
        }
    }
    //Segundo bloco de loops: Responsável por calcular a soma dos elementos da matriz e exibir a matriz na tela
    for (linha = 0; linha < 3; linha++){
        for (coluna = 0; coluna < 3; coluna++){
            //Calcula a soma dos elementos da matriz
            soma += matriz[linha][coluna];
            printf ("%d ", matriz[linha][coluna]);
        }
        printf ("\n");
    }
    printf ("A soma dos elementos da matriz é: %d\n",soma);

    //Calcula a média dos elementos da matriz
    media = (float)soma /  9;
    printf ("A média dos elementos da matriz é: %.2f\n", media);

    return 0;
}