#include <stdio.h>

int main(){

    int numeros[5];// Declara um vetor para guardar 5 números inteiros
    int contador;// Variável de controle para os loops (laços de repetição)
    int maior;// Variável para armazenar o maior número encontrado

    // Primeiro loop: pede e lê os 5 números digitados pelo usuário
    for (contador = 0; contador < 5; contador++){
        // Exibe a mensagem pedindo o número atual (contador + 1 para mostrar de 1 a 5)
        printf ("Digite o número %d: ", contador + 1);
        // Lê o número digitado e armazena na posição correspondente do vetor
        scanf ("%d", & numeros[contador]);
    }
    // Segundo loop: percorre o vetor para encontrar o maior número
    for (contador = 0; contador < 5; contador++){
        // Se for a primeira volta, assume que o primeiro número é o maior temporariamente
        if (contador == 0){
            maior = numeros[contador];
        }
        else {
            // Se o número atual for maior que o valor armazenado em 'maior'
            if (numeros[contador] > maior){
                // Atualiza a variável 'maior' com este novo valor
                maior = numeros[contador];
            }
        }
    }
    // Exibe o maior número encontrado após verificar todo o vetor
    printf ("O maior é: %d", maior);


    return 0;
}