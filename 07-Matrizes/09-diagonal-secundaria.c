#include <stdio.h>

int main(){

    int matriz[3][3]; // Declara uma matriz 3x3 de números inteiros
    int linha, coluna; // Declara variáveis para controlar as linhas e colunas
    int soma = 0; // Declara e inicializa a variável que guarda a soma

    // Primeiro bloco: lê os valores digitados pelo usuário para a matriz
    for(linha = 0; linha < 3; linha++){
        for(coluna = 0; coluna < 3; coluna++){
            printf ("Digite o número: ");
            scanf ("%d", &matriz[linha][coluna]);
        }
    }

    // Segundo bloco: imprime a matriz na tela em formato de tabela
    for(linha = 0; linha < 3; linha++){
        for(coluna = 0; coluna < 3; coluna++){
            printf ("%d ", matriz[linha][coluna]);
        }
    printf("\n"); // Quebra a linha ao terminar uma linha da matriz
    }

    // Terceiro bloco: mostra os elementos da diagonal secundária e soma eles
    printf ("Diagonal secundária: ");
    for(linha = 0; linha < 3; linha++){
        // A coluna da diagonal secundária é calculada por (2 - linha)
        printf ("%d ", matriz[linha][2 - linha]);
        soma += matriz[linha][2 - linha]; // Adiciona o valor à soma total       
    }
    // Imprime o resultado final da soma
    printf ("\nA soma é: %d", soma);

    return 0;
}