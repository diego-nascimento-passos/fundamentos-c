#include <stdio.h>

int main(){

    // Declaração de variáveis
    int idade;
    
    // Entrada de dados
    printf ("Qual é sua idade: ");
    scanf ("%d", &idade);

    // Condição if + else if e else
    if (idade <= 12){
        printf ("Criança");
    }
    else if (idade <= 17){
        printf("Adolescente");
    }
    else if (idade <= 59) {
        printf ("Adulto");
    }
    else{
        printf ("Idoso");
    }
    return 0;
}