#include <stdio.h>

int main() {
    
    // Declaração das variáveis
    float preco, total, totalComDesconto;
    int quantidade;

    printf ("\n=== Sistema de Compra ===\n");
    // Solicita ao usúario o preco do produto e a quantidade desejada
    printf ("\nDigite o preço do produto: ");
    scanf ("%f", &preco);
    printf ("Digite a quantidade desejada: ");
    scanf ("%d", &quantidade);

    // Calcula o total da compra
    total = preco * quantidade;
    totalComDesconto = total - ( 10 * total / 100 );


    // Exibe os resultados da compra e verifica se a quantidade é maior ou igual a 10 e se a quantidade é válida (maior que 0 e menor que 10)
    printf ("\nPreço: %.2f\n", preco);
    printf ("Quantidade: %d\n", quantidade);
    // Exibe o total com desconto se a quantidade for maior ou igual a 10, caso contrário exibe o total normal ( uma linha de código com operador ternário)
    printf ("Total da Compra: %.2f\n", (quantidade >= 10) ? totalComDesconto : total);
    printf ("Compra grande: %d\n", quantidade >= 10);
    printf ("Quantidade valida: %d\n", quantidade > 0);

    return 0;
}
