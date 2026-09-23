#include <stdio.h>

// Cria a função 'somar' que recebe dois números inteiros como parâmetros
int somar (int num1, int num2){
    return num1 + num2;// Soma os dois números e devolve (retorna) o resultado
}

int main(){

    // Cria duas variáveis inteiras para guardar os números digitados pelo usuário
    int num1, num2;

    // Entrada de dados
    printf ("Digite o primeiro número: ");
    scanf ("%d", &num1);
    printf ("Digite o segundo número: ");
    scanf ("%d", &num2);

    // Chama a função 'somar' passando os dois números, e o printf mostra o resultado retornado
    printf ("A soma é: %d", somar(num1, num2));

    return 0;
}