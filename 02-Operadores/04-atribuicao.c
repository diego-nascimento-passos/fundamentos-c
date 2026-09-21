#include <stdio.h>

int main () {

    // Atribuição de valores a variáriveis
    int  saldo = 100;

    // Operadores de atribuição
    printf ("Saldo inicial: %d\n", saldo); // Mostra o saldo inicial

    printf ("Saldo após acrescentar 50: %d\n", saldo += 50); // Acrescenta 50 ao saldo

    printf ("Saldo após tirar 30: %d\n", saldo -= 30); // Retira 30 do saldo

    printf ("Saldo após multiplicar por 2: %d\n", saldo *= 2); // Multiplicando o saldo por 2

    printf ("Saldo após dividir por 4: %d\n", saldo /= 4); // Dividindo o saldo por 4

    printf ("Saldo final: %d\n", saldo); // Mostra o saldo final

    return 0;
}