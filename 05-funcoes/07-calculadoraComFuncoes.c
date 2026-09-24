#include <stdio.h>

    // Função que recebe dois inteiros e retorna a soma deles
    int somar(int num1, int num2){
        return num1 + num2;
    }
    // Função que recebe dois inteiros e retorna a subtração do primeiro pelo segundo
    int subtrair(int num1, int num2){
        return num1 - num2;
    }
    // Função que recebe dois inteiros e retorna a multiplicação entre eles
    int multiplicar(int num1, int num2){
        return num1 * num2;
    }
    // Função que recebe dois números reais (float) e retorna o resultado da divisão
    float dividir(float num1, float num2){
        return num1 / num2;
        }

// Função principal onde a execução do programa começa
int main(){

    int num1, num2;// Declaração de variáveis para armazenar os números inteiros digitados pelo usuário

    // Solicita e lê o primeiro número
    printf ("Digite o primeiro número: ");
    scanf ("%d", &num1);

    // Solicita e lê o segundo número
    printf ("Digite o segundo número: ");
    scanf ("%d", &num2);

    // Exibe os resultados na tela chamando as funções correspondentes
    printf ("Soma: %d\n", somar(num1, num2));
    printf ("Subtração: %d\n", subtrair(num1, num2));
    printf ("Multiplicação: %d\n", multiplicar(num1, num2));

    // Passa os inteiros para a função 'dividir', que os recebe e processa como float
    // Validação da divisão: verifica se o segundo número (divisor) é diferente de zero
    if (num2 != 0){
        // Passa os inteiros para a função 'dividir', que os recebe e processa como float
        printf ("Divisão: %.1f\n", dividir(num1, num2));
    }
    else{
        // Se o divisor for zero, impede o cálculo matemático impossível e exibe erro
        printf ("Divisão: ERRO");
    }

    return 0;
}
