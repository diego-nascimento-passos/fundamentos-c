#include <stdio.h>

int main (){

    int numero[10]; // Cria um vetor (array) com capacidade para armazenar 10 números inteiros
    int contador; // Variável de controle usada para andar pelos índices dos laços (for)

    // Primeiro laço: Preenche o vetor sequencialmente do índice 0 ao 9
    for (contador = 0; contador < 10; contador++){
        // Exibe a mensagem pedindo o número (contador + 1 apenas mostra de 1 a 10 para o usuário)
        printf ("Digite o número %d: ", contador + 1);
        // Lê o valor digitado e o guarda na posição atual do vetor
        scanf ("%d", &numero[contador]);
    }
     // Exibe o cabeçalho para a listagem na ordem em que os números foram digitados
    printf("\n--- Ordem original ---\n");

    // Segundo laço: Percorre o vetor do início ao fim (índice 0 até o 9)
    for (contador = 0; contador < 10; contador++){
        // Imprime o número da posição atual seguido de um espaço em branco
        printf ("%d ", numero[contador]);
    }
    // Exibe o cabeçalho para a listagem na ordem inversa
    printf ("\n--- Ordem invertida ---\n");

    // Terceiro laço: Percorre o vetor de trás para frente (começa no último índice, 9, e vai até o 0)
    for (contador = 9; contador >= 0; contador--){
        // Imprime o número da posição atual seguido de um espaço em branco
        printf ("%d ", numero[contador]);
    }
    return 0;
}