#include <stdio.h>

int main (){

    // Declarão das variáveis
    int saldoDisponivel, valorDoSaque, novoSaldo;

    // Entrada de dados
    printf ("Saldo disponível: ");
    scanf ("%d", &saldoDisponivel);

    printf ("Valor do saque: ");
    scanf ("%d", &valorDoSaque);

    //ondições dentro de condições (if aninhado)
    if (valorDoSaque > 0){
        if (valorDoSaque <= saldoDisponivel){
            if (valorDoSaque % 10 == 0){
            }
            else{
                printf ("Não é múltiplo de 10");
                return 0;
            }
        }
        else{
            printf ("Saldo Insuficiente");
            return 0;
        }
    }
    else{
        printf ("Saque inválido");
        return 0;
    }
    //Calculo do novo saldo
    novoSaldo = saldoDisponivel - valorDoSaque;
    //Exibindo o saque
    printf ("\n==== Saque realizado! ====\n");
    printf ("Valor sacado: %d\n", valorDoSaque);
    printf ("Saldo restante: %d\n", novoSaldo);

    return 0;
}