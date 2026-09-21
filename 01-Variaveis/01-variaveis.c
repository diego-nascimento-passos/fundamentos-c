#include <stdio.h>

int main () {

    
    // declaração de variáveis
    int idade;
    float altura;
    char inicial;
    char nome[50];

    // Entrada de dados
    printf ("Digite sua idade: ");
    scanf ("%d", &idade);

    printf ("Digite sua altura:");
    scanf ("%f", &altura);

    printf ("Digite seu nome: ");
    scanf (" %[^\n]", &nome); //Lê uma string com espaços até o usuário apertar enter

    printf ("Digite a inicial do seu nome: ");
    scanf (" %c", &inicial);

    // Saída de dados
    printf ("\n--- Dados Informados ---\n");
    printf ("Idade: %d\n", idade);
    printf ("Altura: %.2f\n", altura);
    printf ("Nome: %s\n", nome);
    printf ("Inicial: %c\n", inicial);


    return 0;
}