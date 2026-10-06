#include <stdio.h>

int main(){

    // Declaração das matrizes 3x3 de números inteiros
    int matrizA[3][3];
    int matrizB[3][3];
    int resultado[3][3];
    int linha, coluna; // Declaração das variáveis de controle para os loops (linhas e colunas)
    
    // --- LEITURA DA MATRIZ A ---
    printf ("\n=== Matriz A ===\n");
    for(linha = 0; linha < 3; linha++){
        for(coluna = 0; coluna < 3; coluna++){
            printf ("Digite o número da matriz A: ");
            scanf ("%d", &matrizA[linha][coluna]); // Armazena o valor na posição [linha][coluna] da Matriz A
        }
    }

    // --- LEITURA DA MATRIZ B ---
    printf ("\n=== Matriz B ===\n");
    for(linha = 0; linha < 3; linha++){
        for(coluna = 0; coluna < 3; coluna++){
            printf ("Digite o número da matriz B: ");
            scanf ("%d", &matrizB[linha][coluna]); // Armazena o valor na posição [linha][coluna] da Matriz B
        }
    }

    // --- EXIBIÇÃO DA MATRIZ A ---
    printf ("\n === Exibindo a Matriz A ===\n");
    for (linha = 0; linha < 3; linha++){
        for(coluna = 0; coluna < 3; coluna++){
            printf ("%d ", matrizA[linha][coluna]); // Mostra o elemento da Matriz A
        }
    }

    // --- EXIBIÇÃO DA MATRIZ B ---
    printf ("\n=== Exibindo a Matriz B ===\n");
    for (linha = 0; linha < 3; linha++){
        for(coluna = 0; coluna < 3; coluna++){
            printf ("%d ", matrizB[linha][coluna]); // Mostra o elemento da Matriz B
        }
    }
        printf ("\n");// Pula linha

    // --- SOMA DAS MATRIZES (A + B) E EXIBIÇÃO DO RESULTADO ---
    printf ("\n=== A soma das Matrizes ===\n");
    printf ("A soma da Matriz A + Matriz B: \n");
    for(linha = 0; linha < 3; linha++){
        for(coluna = 0; coluna < 3; coluna++){
            // Soma o elemento correspondente de A e B e guarda na matriz resultado
            resultado[linha][coluna] = matrizA[linha][coluna] + matrizB[linha][coluna];
            printf ("%d ",resultado[linha][coluna]);
        }
        printf ("\n");// Pula linha
    }
    return 0;
}