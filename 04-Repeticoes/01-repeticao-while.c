#include <stdio.h>

int main (){

    int contador = 0; // 1. Inicialização da variável

    while (contador <= 10){ // 2. Condição (enquanto contador for menor ou igual a 10)
        printf ("%d\n", contador);
        contador++;  //3. Atualização da variável para evitar loop infinito
    }
    
    return 0;
}