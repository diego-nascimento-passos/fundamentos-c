#include <stdio.h>

int main (){

    // 1. Inicialização da variável
    int num;
    int contador = 1;
    int soma = 0;


    while (contador <= 5){ // 2. Condição (enquanto contador for menor ou igual a 5)
        printf ("Digite um número: ");
        scanf ("%d", &num);
        contador++; //3. Atualização da variável para evitar loop infinito
        soma += num; // 4. Atualização da variável para soma
    }
    printf ("A soma dos números é:: %d", soma);
return 0;
}