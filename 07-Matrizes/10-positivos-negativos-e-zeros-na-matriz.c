#include <stdio.h>

int main(){

        int matriz[3][3]; // Declara uma matriz de 3 linhas e 3 colunas (total de 9 números inteiros)
        int linha, coluna; // Variáveis de controle para percorrer as linhas e colunas da matriz
        int positivos = 0, negativos = 0, zeros = 0; // Contadores para armazenar a quantidade de números positivos, negativos e zeros


        // 1º BLOCO: Leitura dos dados inseridos pelo usuário
        for(linha = 0; linha < 3; linha++){ // Percorre cada linha (0 a 2)
            for(coluna = 0; coluna < 3; coluna++){ // Percorre cada coluna (0 a 2)
                printf ("Digite o número: "); // Pede um número ao usuário
                scanf ("%d", &matriz[linha][coluna]); // Lê o valor digitado e guarda na posição [linha][coluna]
            }
        }
        
        // 2º BLOCO: Exibição da matriz em formato de tabela (linhas e colunas)
        for(linha = 0; linha < 3; linha++){
            for(coluna = 0; coluna < 3; coluna++){
                printf ("%d ", matriz[linha][coluna]); // Imprime o número seguido de um espaço
            }
            printf("\n"); // Pula para a próxima linha após terminar uma linha da matriz
        }

        // 3º BLOCO: Verificação e contagem de positivos, negativos e zeros
        for(linha = 0; linha < 3; linha++){
            for(coluna = 0; coluna < 3; coluna++){
                if (matriz[linha][coluna] > 0){
                    positivos++; // Incrementa se o número for maior que zero
                }
                else if (matriz[linha][coluna] < 0){
                    negativos++; // Incrementa se o número for menor que zero
                }
                else{
                    zeros++; // Incrementa se o número for igual a zero
                }
            }
        }
        
        // Exibe os resultados finais na tela
        printf ("Positivos: %d\n", positivos);
        printf ("Negativos: %d\n", negativos);
        printf ("Zeros: %d\n", zeros);

    return 0;
}