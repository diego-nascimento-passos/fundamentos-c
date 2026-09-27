#include <stdio.h>

int main(){

    // Declaração de variáveis
    int numero [5]; // Vetor (array) para armazenar os 5 números inteiros digitados
    int contador; // Variável de controle para as estruturas de repetição (loops)
    int menor; // Variável que guardará o menor valor encontrado


    // Primeiro loop: Coleta os dados do usuário
    for (contador = 0; contador < 5; contador++){
        // Exibe a mensagem pedindo o número (contador + 1 apenas para mostrar de 1 a 5 na tela)
        printf ("Digite o número %d: ", contador +1);
        // Lê o número digitado e o armazena na posição correspondente do vetor
        scanf ("%d", &numero[contador]);
    }
    // Segundo loop: Analisa os números armazenados para encontrar o menor
    for (contador = 0; contador < 5; contador++){
        // Se for o primeiro número analisado (índice 0), ele é inicialmente o menor
        if (contador == 0){
            menor = numero[contador];
        }
        // Para os próximos números, compara com o menor valor guardado até o momento
        else{
            // Se o número atual for menor que o valor salvo na variável 'menor'
            if (numero[contador] < menor){
                 // Atualiza a variável 'menor' com o novo valor encontrado
                menor = numero[contador];
            }
        }
    }
    printf ("O menor Valor é: %d", menor);
    return 0;
}