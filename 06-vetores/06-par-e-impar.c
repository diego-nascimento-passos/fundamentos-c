#include <stdio.h>

int main(){

    // Declaração de variáveis
    int numero[10];// Vetor (array) para armazenar os 10 números digitados pelo usuário
    int contador;// Variável de controle usada para percorrer os loops (for)
    int par = 0;// Acumulador/contador para guardar a quantidade de números pares (começa em 0)
    int impar = 0; // Acumulador/contador para guardar a quantidade de números ímpares (começa em 0)

    // Primeiro loop: Responsável por ler e guardar os 10 números no vetor
    for (contador = 0; contador < 10; contador++){
        // Exibe a mensagem na tela. O "contador + 1" serve apenas para mostrar "Número 1", "Número 2" de forma humana
        printf ("Digite o número %d: ", contador + 1);
        // Lê o número digitado e o guarda na posição atual do vetor (ex: numero[0], numero[1]...)
        scanf ("%d", &numero[contador]);
    }
    // Segundo loop: Responsável por analisar cada número guardado e fazer a contagem
    for (contador = 0; contador < 10; contador++){
        // Verifica se o resto da divisão do número por 2 é igual a zero (se for zero, o número é par)
        if (numero[contador] % 2 == 0){
            // Acumula +1 na variável par (o mesmo que: par = par + 1)
                par++;
        }
        // Se o resto não for zero, o número só pode ser ímpar
        else{
                impar++;// Acumula +1 na variável impar (o mesmo que: impar = impar + 1)
            }
        }
    // Exibe os resultados finais na tela
    printf ("Quantidade de pares: %d \n", par);
    printf ("Quantidade de Impar: %d", impar);



    return 0;
}