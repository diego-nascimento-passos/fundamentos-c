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

/*Próximo: Exercício 9 — Maior e menor número

Descubra qual foi o maior número digitado.
Descubra qual foi o menor número digitado.
No final, mostre os dois.

Exemplo:

Digite um número: 15
Digite um número: 8
Digite um número: 32
Digite um número: -4
...

Resultado:

Maior número: 32
Menor número: -4

💡 Dica importante: você vai precisar pensar em como guardar o primeiro número para utilizá-lo como referência inicial. Não vou passar o código pronto — quero que você tente montar a lógica.*/