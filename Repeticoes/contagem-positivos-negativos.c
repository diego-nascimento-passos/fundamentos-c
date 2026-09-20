#include <stdio.h>

int main (){

    // Declarando a variável
    int num, contador;
    int contadorPositivos = 0;
    int contadorNegativos = 0;
    int contadorZeros = 0;

    // Estrutura For percorrendo de 1 a 10
    for (contador = 1; contador <= 10; contador++){
        printf ("Digite um número: ");
        scanf ("%d", &num);
        if (num > 0){
        contadorPositivos++;
        }
        else if ( num < 0){
        contadorNegativos++;
        }
        else {
        contadorZeros++;
        }
    }

    printf ("\n--- Resultado final ---\n");
    printf ("Número positivos: %d\n", contadorPositivos);
    printf ("Número negativo: %d\n", contadorNegativos);
    printf ("Zeros: %d\n", contadorZeros);

    return 0;
}