#include <stdio.h>

int main (){

    // Operadores lógicos && E -> (AND), || OU -> (OR) e ! Não -> (NOT)
    // Declaração de variáveis
    int idade;

    // Entrda de dados
    printf ("Digite sua idade: ");
    scanf ("%d",&idade);

    // Operadores lógico && (AND)
    // Verificação da idade
    printf ("Você está na idade de 18 a 60 anos? %d\n", ( idade >= 18 && idade <= 60 ));

    // Operadores lógico || (OR)
    // Verificação da idade 
    printf ("Você está fora da idade de 18 a 60 anos? %d\n", ( idade < 18 || idade > 60 ));

    // Operadores lógico ! (NOT)
    // Verificação da idade
    printf ("Você não está na idade de 18 a 60 anos? %d\n", !( idade >= 18 && idade <= 60 ));



    return 0;
}