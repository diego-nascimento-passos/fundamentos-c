#include <stdio.h>

int main (){

    // Declara uma matriz de 3 linhas e 3 colunas para números inteiros
    int matriz[3][3];
    // Variáveis de controle para os loops (linhas e colunas)
    int linha, coluna;

    // Primeiro bloco: lê os valores digitados pelo usuário
    for(linha = 0; linha < 3; linha++){
        for (coluna = 0; coluna < 3; coluna++){
            // Pede ao usuário para digitar um número
            printf("Digite o número: ");
             // Lê o número e guarda na posição correta da matriz
            scanf ("%d", &matriz[linha][coluna]);
        }
    }
    // Segundo bloco: imprime a matriz na tela em formato de tabela
    for(linha = 0; linha < 3; linha++){
        for(coluna = 0; coluna < 3; coluna++){

            
            printf ("%d ", matriz[linha][coluna]);
        }
        // Pula para a próxima linha após terminar uma linha da matriz
    printf("\n");
    }
    return 0;
}