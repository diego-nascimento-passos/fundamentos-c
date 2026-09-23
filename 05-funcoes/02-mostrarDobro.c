#include <stdio.h>

    // Definição da função 'dobro'
    //int significa que a função executa uma ação,e retorna um valor.
    int dobro(int num){
        return num * 2;
    }

int main(){

    // Declarando a variável número.
    int num;

    //  Entrada de dados
    printf ("Digite um número: ");
    scanf ("%d", &num);
    printf ("O dobro é: %d", dobro(num));// Chama (executa) a função que está lá em cima

    return 0;
}