#include <stdio.h>

int main(){

    // Declaração de variáveis
    int matriz[3][3];
    int linha, coluna;
    int menor;

    // Primeiro bloco de loops: Responsável por ler (preencher) a matriz
    for (linha = 0; linha < 3; linha++){
        for (coluna = 0; coluna < 3; coluna++){
            printf ("Digite o número: ");
            scanf ("%d", &matriz[linha][coluna]);
        }
    }

    // Inicializa a variável 'menor' com o primeiro elemento da matriz [0][0] para servir de base de comparação
    menor = matriz[0][0];

    // Segundo bloco de loops: Responsável por encontrar o menor valor e exibir a matriz na tela
    for (linha = 0; linha < 3; linha++){
        for (coluna = 0; coluna < 3; coluna++){
            if (matriz[linha][coluna] < menor){
                menor = matriz[linha][coluna];
            }
        // Imprime o número atual na tela seguido de um espaço
        printf ("%d ", matriz[linha][coluna]);
        }
        printf("\n");
    }
    // Exibe o menor número encontrado após verificar toda a matriz
    printf ("O menor número é: %d\n", menor);

    return 0;
}