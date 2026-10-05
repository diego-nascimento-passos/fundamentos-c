#include <stdio.h>

int main(){

    int matriz[3][3];// Declara uma matriz de 3 linhas e 3 colunas
    int linha, coluna;// Variáveis auxiliares para percorrer as linhas e colunas
    int par = 0, impar = 0;// Contadores para números pares e ímpares, inicializados com zero

    // Primeiro bloco: lê os valores digitados pelo usuário para preencher a matriz
    for(linha = 0; linha < 3; linha++){
        for(coluna = 0; coluna < 3; coluna++){
            printf ("Digite o número: ");
            scanf ("%d", &matriz[linha][coluna]);// Armazena o número na posição [linha][coluna]
        }
    }

    // Segundo bloco: exibe a matriz na tela em formato de tabela
    for(linha = 0; linha < 3; linha++){
        for(coluna = 0; coluna < 3; coluna++){
            printf ("%d ", matriz[linha][coluna]);// Mostra o número atual
        }
    printf ("\n");// Quebra de linha ao fim de cada linha da matriz
    }

    // Terceiro bloco: conta quantos números são pares e quantos são ímpares
    for(linha = 0; linha < 3; linha++){
        for(coluna = 0; coluna < 3; coluna++){   
            if (matriz[linha][coluna] % 2 == 0){ // Se o resto da divisão por 2 for 0, o número é par
            par++; // Incrementa o contador de pares
            }
            else{
                impar++; // Caso contrário, incrementa o contador de ímpares
            }         
        }
    }
// Exibe os resultados finais
printf ("Quantidade de pares: %d \n", par);
printf ("Quantidade de impares: %d", impar);
       
    return 0;
}