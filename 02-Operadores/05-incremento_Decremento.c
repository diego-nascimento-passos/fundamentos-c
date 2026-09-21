#include <stdio.h>

int main () {

    // Operadores de incremento e decrementa
    int contador = 10;

    printf ("Contador inicial: %d\n", contador); // Mostra o valor inicial de contador
    contador++; // Incrementa o valor de contador em 1
    contador++;
    printf ("Contador após incremento: %d\n", contador); // Mostra o valor de contador após incremento
    contador--; // Decrementa o valor de contador em 1
    contador--;
    printf ("Contador após decrementa: %d\n", contador); // Motra o valor de contador após decrementa

    return 0;
}