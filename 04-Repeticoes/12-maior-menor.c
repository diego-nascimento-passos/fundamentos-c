#include <stdio.h>

int main (){

    // Declaracão da variáveis
    int num, contador;
    int maior, menor;
    
    // Estrutura de repetição For
    for (contador = 1; contador <= 10; contador++){
        printf ("Digite um número: ");
        scanf ("%d", &num);

        // Primeiro número vira a referência inicial
        if (contador == 1){
            maior = num;
            menor = num;
        }
        else {
       // Verifica se encontrou um número maior
            if (num > maior){
            maior = num;
            }
            if (num < menor){
            menor = num;
            }
        }
    }
    printf ("Maior número: %d\n", maior);
    printf ("Menor número: %d\n", menor);
    return 0;
}