#include <stdio.h>

int main (){

    int numero[10]; // Vetor para guardar 10 números inteiros
    int contador; // Variável de controle para os loops (laços de repetição)
    int procurar;  // Armazena o número que você quer buscar
    int quantidade = 0;  // Conta quantas vezes o número procurado aparece

    // Primeiro loop: pede e lê os 10 números digitados
    for (contador = 0; contador < 10; contador++){
        printf ("Digite o número %d: ", contador + 1);
        scanf ("%d", &numero[contador]);
    }

    // Pede o número que você deseja procurar na lista
    printf ("Numero procurado: ");
    scanf ("%d", &procurar);

     // Segundo loop: percorre o vetor comparando os números
        for (contador = 0; contador < 10; contador++){
            if (procurar == numero[contador]){
                quantidade++; // Soma 1 na quantidade se encontrar o número
            }
        }
        // Exibe o resultado final com o total de repetições
        printf ("O número %d aparece %d vezes.", procurar, quantidade);

    return 0;
}