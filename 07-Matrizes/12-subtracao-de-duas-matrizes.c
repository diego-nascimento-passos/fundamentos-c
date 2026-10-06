#include <stdio.h>

int main(){

    // Declaração das matrizes 3x3 e variáveis de controle
    int matrizA[3][3];
    int matrizB[3][3];
    int linha, coluna;
    int resultado[3][3];

    // Leitura dos valores da Matriz A
    printf ("\n=== Matriz A ===\n");
    for(linha = 0; linha < 3; linha++){
        for(coluna = 0; coluna < 3; coluna++){
            printf ("Digite o número da matriz A: ");
            scanf ("%d", &matrizA[linha][coluna]);
        }
    }

    // Leitura dos valores da Matriz B
    printf ("\n=== Matriz B ===\n");
    for(linha = 0; linha < 3; linha++){
        for(coluna = 0; coluna < 3; coluna++){
            printf ("Digite o número da matriz B: ");
            scanf ("%d", &matrizB[linha][coluna]);
        }
    }

    // Exibição da Matriz A na tela em formato de grade
    printf ("\n === Exibindo a Matriz A ===\n");
    for (linha = 0; linha < 3; linha++){
        for(coluna = 0; coluna < 3; coluna++){
            printf ("%d ", matrizA[linha][coluna]);
        }
        printf("\n");// Pula linha ao terminar uma linha da matriz
    }

    // Exibição da Matriz B na tela em formato de grade
    printf ("\n=== Exibindo a Matriz B ===\n");
    for (linha = 0; linha < 3; linha++){
        for(coluna = 0; coluna < 3; coluna++){
            printf ("%d ", matrizB[linha][coluna]);
        }
        printf ("\n");// Pula linha ao terminar uma linha da matriz
    }

    // Cálculo da subtração (Matriz A - Matriz B) e exibição do resultado
    printf ("\n=== A Subtração das Matrizes ===\n");
    printf ("A Subtração da Matriz A - Matriz B: \n");
    for(linha = 0; linha < 3; linha++){
        for(coluna = 0; coluna < 3; coluna++){
            // Subtrai os elementos correspondentes das duas matrizes
            resultado[linha][coluna] = matrizA[linha][coluna] - matrizB[linha][coluna];
            printf ("%d ",resultado[linha][coluna]);
        }
        printf ("\n");
    }
    return 0;
}