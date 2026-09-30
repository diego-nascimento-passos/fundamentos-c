#include <stdio.h>

int main (){

        // Declaração de variáveis
    int matriz [3][3];// Declara uma matriz de inteiros com 3 linhas e 3 colunas (total de 9 elementos)
    int linha, coluna;// Variáveis de controle para percorrer as linhas e colunas nos loops
    int maior; // Variável acumuladora para guardar o total da soma dos elementos, iniciada em 0

    // Primeiro bloco de loops: Responsável por ler (preencher) a matriz
    for(linha = 0; linha < 3; linha++){// Percorre cada linha de 0 a 2
        for(coluna = 0; coluna < 3; coluna++){// Percorre cada coluna de 0 a 2 da linha atual
            printf ("Digite o número: ");
            // Lê o número digitado pelo usuário e o armazena na posição atual da matriz [linha][coluna]
            scanf ("%d", &matriz[linha][coluna]);
        }
    }
    // Inicializa a variável 'maior' com o primeiro elemento da matriz [0][0] para servir de base de comparação
    maior = matriz[0][0];

    // Segundo bloco de loops: Responsável por encontrar o maior valor e exibir a matriz na tela
    for (linha = 0; linha < 3; linha++){// Percorre cada linha de 0 a 2
        for (coluna = 0; coluna < 3; coluna++){// Percorre cada coluna de 0 a 2 da linha atual
            // Verifica se o elemento atual da matriz é maior do que o valor guardado na variável 'maior'
                if (matriz[linha][coluna] > maior){
                maior = matriz[linha][coluna];// Atualiza a variável 'maior' com o novo valor encontrado
            }
            printf ("%d ", matriz[linha][coluna]); // Imprime o número atual na tela seguido de um espaço
        }
        printf("\n");// Quebra de linha ao final de cada linha da matriz para formatar o visual como tabela
    }
    // Exibe o maior número encontrado após verificar toda a matriz
    printf ("O maior número é: %d\n", maior);
    return 0;
}