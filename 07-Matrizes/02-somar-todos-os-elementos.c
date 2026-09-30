#include <stdio.h>

int main (){

    // Declaração da matriz 3x3 de inteiros, variáveis de controle (linha/coluna) e acumulador da soma
    int matriz [3][3];
    int linha, coluna;
    int soma = 0;

    // Primeiro bloco duplo de repetição: faz a leitura/entrada dos dados digitados pelo usuário
    for(linha = 0; linha < 3; linha++){
        for (coluna = 0; coluna < 3; coluna++){
            printf ("Digite o número: ");
            scanf ("%d", &matriz[linha][coluna]);
        }
    }
    // Segundo bloco duplo de repetição: acumula a soma dos valores e imprime a matriz formatada em linhas e colunas
    for (linha = 0; linha < 3; linha++){
        for(coluna = 0; coluna < 3; coluna++){
            soma = soma + matriz[linha][coluna];// Adiciona o valor atual à soma total
            printf ("%d ", matriz[linha][coluna]);// Mostra o elemento na tela
        }
        printf ("\n");// Quebra de linha ao terminar cada linha da matriz
    }
    // Exibe o resultado final da soma de todos os elementos da matriz
    printf ("A soma é: %d", soma); 

    return 0;
}