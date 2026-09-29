#include <stdio.h>


int main (){

    // Declaração de variáveis
    int numero[10]; // Cria um vetor (array) para armazenar 10 números inteiros
    int contador; // Variável de controle usada para percorrer os laços de repetição (for)
    int positivo = 0; // Contador para números maiores que zero (inicia em 0)
    int negativo = 0; // Contador para números menores que zero (inicia em 0)
    int zero = 0; // Contador para números iguais a zero (inicia em 0)


    // Primeiro laço: Solicita e armazena os 10 números digitados pelo usuário
    for (contador = 0; contador < 10; contador++){
        // Exibe a mensagem na tela (contador + 1 serve apenas para mostrar "número 1" até "número 10")
        printf ("Digite o número %d: ", contador + 1);
        // Lê o número digitado e o salva na posição atual do vetor (numero[0], numero[1], etc.)
        scanf ("%d", &numero[contador]);
    }
    // Segundo laço: Analisa cada um dos 10 números armazenados no vetor
    for (contador = 0; contador < 10; contador++){
         // Se o número na posição atual for maior que zero...
        if (numero[contador] > 0){
            positivo++;
        }
        // Se não for maior que zero, mas for menor que zero...
        else if (numero[contador] < 0){
            negativo++;
        }
        else{
            // Se não for nem positivo nem negativo, obrigatoriamente é zero...
            zero++; // Adiciona 1 ao contador de zeros
        }

    }
     // Exibe os resultados finais com as quantidades calculadas
    printf ("Quantidade de positivos: %d\n", positivo);
    printf ("Quantidade de negativo: %d\n", negativo);
    printf ("Zero: %d\n", zero);
    return 0;
}