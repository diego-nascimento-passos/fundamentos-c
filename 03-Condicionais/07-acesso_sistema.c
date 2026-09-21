#include <stdio.h>

int main (){

    //Declaração da variáveis
    int idade, codigoDeAcesso;

    //Entrada de dado
    printf ("Digite sua idade: ");
    scanf ("%d", &idade);

    printf ("Código de acesso: ");
    scanf ("%d", &codigoDeAcesso);

    //ondições dentro de condições (if aninhado)
    if (idade >= 18){
        if (codigoDeAcesso == 1234){
            printf ("Acesso autorizado");
        }
        else {
            printf ("Código incorreto");
        }
    }
    else {
        printf ("Acesso negado");
    }

    return 0;
}
