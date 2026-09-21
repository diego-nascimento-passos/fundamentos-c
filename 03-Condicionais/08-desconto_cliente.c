#include <stdio.h>

int main (){

    // Declaração das variáveis
    int idade;
    float valorDaCompra, totalDesconto;
    int desconto = 0;

    // Entrada de dados
    printf ("Digite sua idade: ");
    scanf ("%d", &idade);

    printf ("Valor da compra: ");
    scanf ("%f", &valorDaCompra);

    //ondições dentro de condições (if aninhado)
    if (valorDaCompra > 0){
        if (idade >= 18){
            if (valorDaCompra >= 500){
                desconto = 10;
                totalDesconto = valorDaCompra - (10 * valorDaCompra / 100);
            }
            else if (valorDaCompra >= 200){
                desconto = 5;
                totalDesconto = valorDaCompra - (5 * valorDaCompra / 100);
            }
            else{
                totalDesconto = valorDaCompra;
            } 
        }
        else{
            printf ("Menor de 18, não recebe desconto\n");
            totalDesconto = valorDaCompra;
        }
    }
    else{
        printf ("Compra inválida\n");
        return 0;
    }

    // Exibe os resultados da compra 
    printf ("\n=== Resultados da compra ===\n");
    printf ("Valor da compra: %.2f\n", valorDaCompra);
    printf ("Desconto: %d%% \n", desconto);
    printf ("Valor final: %.2f \n", totalDesconto);

    return 0;
}