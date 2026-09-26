#include <stdio.h>

int main(){

     // Declaração de um vetor de inteiros chamado 'numeros' com capacidade para 5 elementos
    // Os índices válidos na memória serão de 0 a 4
    int numeros[5];
    // Variável de controle que será usada como índice nos laços de repetição
    int contador;

    // PRIMEIRO LAÇO: Responsável por ler e armazenar os dados no vetor
    // O loop começa em 0 e vai até 4 (enquanto contador for menor que 5)
    for (contador = 0; contador < 5; contador++){
        // Exibe uma mensagem na tela indicando qual posição está sendo preenchida
        printf ("Digite o números %d: ", contador + 1);
        // Lê o número digitado pelo usuário e o salva no endereço de memória da posição atual do vetor
        scanf ("%d", &numeros[contador]);
    }

    // Sinaliza visualmente a separação entre a entrada e a saída de dados
    printf("\n--- Números armazenados ---\n");

     // SEGUNDO LAÇO: Responsável por percorrer o vetor e exibir os valores na tela
    // O loop também roda 5 vezes (começa em 0 e vai até 4, usando o operador '<=')
    for(contador = 0; contador < 5; contador++){
        // Imprime o valor guardado na posição atual do vetor e pula uma linha (\n)
        printf ("%d\n", numeros[contador]);
    }

    return 0;
}