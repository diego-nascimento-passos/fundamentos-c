#include <stdio.h>

    // Cria a função que apenas checa se o número é par (retorna 1 para verdadeiro e 0 para falso)
    int verificarPar(int num){
        return num % 2 == 0; // Retorna o resultado da comparação (se o resto da divisão por 2 é igual a 0)
    }

int main(){

    int num;// Cria a variável para armazenar o número digitado

    printf ("Digite um número: ");// Exibe a mensagem pedindo o número
    scanf ("%d", &num);// Guarda o valor digitado pelo usuário na variável 'num'

    // Chama a função 'verificarPar'. Se ela retornar verdadeiro (1), o bloco do 'if' é executado
    if(verificarPar(num)){
            printf ("O número é Par!");// Executa isso se o número for par
        }
        // Caso a função retorne falso (0), o bloco do 'else' é executado
        else {
            printf ("O número é Impar!");// Executa isso se o número for ímpar
        }

    return 0;
}