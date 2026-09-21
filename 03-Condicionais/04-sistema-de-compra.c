#include <stdio.h>

int main(){

    // Declaração das variáveis
    float preco, total;
    float totalComDesconto = 0;
    int quantidade;
    int desconto = 0;

    // Entrada de dados Solicita ao usuário o preco do produto e a quantidade desejada
    printf ("Preço do produto: ");
    scanf ("%f", &preco);

    printf ("Quantidade: ");
    scanf ("%d", &quantidade);

     // Calcula o total da compra
    total = preco * quantidade;

    // Condição if + else if e else
    if (quantidade < 1 ){
        printf ("Quantidade inválida");
        return 0;  
    }
    else if (quantidade >= 10 ){
        desconto = 10;
        totalComDesconto = total - (10 * total / 100 );
    }
    else if (quantidade >= 5 ){
        desconto = 5;
        totalComDesconto = total - (5 * total / 100);
    }
    else{
        totalComDesconto = total;
    }

    // Exibe os resultados da compra 
    printf ("\n===  Sistema de compra ===\n");
    printf ("Preço do produto: %.2f\n", preco);
    printf ("Quantidade: %d\n", quantidade);
    printf ("Total da compra: %.2f\n", total);
    printf ("Desconto: %d%% \n", desconto );
    // Exibe o total com desconto se a quantidade for maior ou igual a 10 ou maior ou igual a 5, caso contrário exibe o total normal ( uma linha de código com operador ternário)
    printf ("Total final: %.2f\n", totalComDesconto );

    return 0;
}