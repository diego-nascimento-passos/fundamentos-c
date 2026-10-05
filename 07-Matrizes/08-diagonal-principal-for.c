#include <stdio.h>


int main(){

    int matriz[3][3]; // Declara uma matriz 3x3 de números inteiros
    int linha, coluna; // Variáveis de controle para os loops (linhas e colunas)
    int soma = 0; // Variável para acumular a soma da diagonal principal

    // --- LEITURA DOS DADOS ---
    // Loop para preencher a matriz linha por linha, coluna por coluna
    for(linha = 0; linha < 3; linha++){
        for(coluna = 0; coluna < 3; coluna++){
            printf("Digite o número: ");
            scanf("%d", &matriz[linha][coluna]); // Lê o valor digitado pelo usuário e armazena na posição [linha][coluna]
        }
    }

     // --- EXIBIÇÃO DA MATRIZ ---
    // Loop para exibir a matriz no formato de tabela (3 linhas por 3 colunas)
    for(linha = 0; linha < 3; linha++){
        for(coluna = 0; coluna < 3; coluna++){
            printf("%d ", matriz[linha][coluna]); // Imprime o elemento atual seguido de um espaço
        }
        printf("\n"); // Pula para a próxima linha após imprimir os 3 elementos da linha atual
    }

    // --- CÁLCULO E EXIBIÇÃO DA DIAGONAL PRINCIPAL ---
    printf("Diagonal principal: ");
    for(linha = 0; linha < 3; linha++){
        printf ("%d ", matriz[linha][linha]);
            soma += matriz[linha][linha]; // Adiciona o valor da diagonal principal à variável 'soma'
    }
    // Exibe o valor total da soma dos elementos da diagonal principal
    printf ("\nSoma da diagonal: %d\n", soma);

    return 0; 
}