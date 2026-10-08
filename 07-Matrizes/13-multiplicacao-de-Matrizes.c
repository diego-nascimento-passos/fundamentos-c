#include <stdio.h>

int main(){

    // Declaração das matrizes 3x3 e das variáveis de controle dos loops
    int matrizA[3][3];
    int matrizB[3][3];
    int linha, coluna, k;
    int resultado[3][3];

    // Entrada de dados: Leitura dos valores da Matriz A
    printf ("\n=== Matriz A ===\n");
    for(linha = 0; linha < 3; linha++){
        for(coluna = 0; coluna < 3; coluna++){
            printf ("Digite o número da matriz A: ");
            scanf ("%d", &matrizA[linha][coluna]);
        }
    }

    // Entrada de dados: Leitura dos valores da Matriz B
    printf ("\n=== Matriz B ===\n");
    for(linha = 0; linha < 3; linha++){
        for(coluna = 0; coluna < 3; coluna++){
            printf ("Digite o número da matriz B: ");
            scanf ("%d", &matrizB[linha][coluna]);
        }
    }

    // Saída de dados: Exibição da Matriz A estruturada em linhas e colunas
    printf ("\n === Exibindo a Matriz A ===\n");
    for (linha = 0; linha < 3; linha++){
        for(coluna = 0; coluna < 3; coluna++){
            printf ("%d ", matrizA[linha][coluna]);
        }
        printf("\n");// Quebra de linha ao final de cada linha da matriz
    }

    // Saída de dados: Exibição da Matriz B estruturada em linhas e colunas
    printf ("\n=== Exibindo a Matriz B ===\n");
    for (linha = 0; linha < 3; linha++){
        for(coluna = 0; coluna < 3; coluna++){
            printf ("%d ", matrizB[linha][coluna]);
        }
        printf ("\n");// Quebra de linha ao final de cada linha da matriz
    }

    // Processamento e Saída: Cálculo da multiplicação (Matriz A * Matriz B) e exibição direta
    printf ("\n=== A Multiplicação das Matrizes ===\n");
    printf ("A Multiplicação da Matriz A * Matriz B: \n");

    for(linha = 0; linha < 3; linha++){
        for(coluna = 0; coluna < 3; coluna++){
            // Inicializa a posição atual da matriz de resultado com zero
            resultado[linha][coluna] = 0;

            // O 'k' percorre os elementos da linha de A e da coluna de B
            for(k = 0; k < 3; k++){
                // Multiplica os elementos correspondentes e acumula o valor na posição atual
                resultado[linha][coluna] += matrizA[linha][k] * matrizB[k][coluna];
            }
            // Exibe o elemento calculado da matriz resultante
            printf ("%d ",resultado[linha][coluna]);
        }
        printf ("\n"); // Quebra de linha ao final de cada linha da matriz resultante
    }
    return 0;
}