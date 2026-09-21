#include <stdio.h>

int main (){

    // Declaração de variáveis 
    int num, contador;
    int contadorPositivos = 0;
    float somaPositivos = 0;
    float media;

    // Estrutura de repetição For, para controlar o contador;
    for (contador = 1; contador <= 10; contador++){
        printf ("Digite um número: ");
        scanf ("%d", & num);
        // Estrutura de condicões para contar e somar os número positivos.
        if (num > 0){
            contadorPositivos++;
            somaPositivos += num;
        }
    }
    // Estrutura de condições if e else para calcular a média dos número positivos.
    if (contadorPositivos > 0){
        media = somaPositivos / contadorPositivos;
    }
    else {
        printf ("Não existem números positivos para calcular a média.");
        return 0;
    }
    // Exibindo o resultado final.
    printf ("\n=== Resultado final ===\n");
    printf ("Quantidade de positivos: %d\n", contadorPositivos);
    printf ("Soma dos positivos: %.0f\n", somaPositivos);
    printf ("Média dos positivos: %.2f\n", media);
    return 0;
}