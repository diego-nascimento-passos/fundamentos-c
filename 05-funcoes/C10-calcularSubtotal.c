#include <stdio.h>

    // Função que calcula o valor bruto (Preço x Quantidade)
    float calcularSubtotal(float preco, int quantidade){
        return preco * quantidade;
    }
    // Função que define o valor do desconto com base no subtotal
    float calcularDesconto(float subtotal){
        if (subtotal >= 500){
            return (subtotal * 10) / 100;// 10% de desconto para compras a partir de 500
        }
        else if (subtotal >= 200){// 5% de desconto para compras entre 200 e 499.99
            return (subtotal * 5) / 100;
        }
        else{
            return 0;//Retorna 0 se for menor que 200 (antes retornava o subtotal inteiro)
        }
    }
    // Função que subtrai o desconto do valor bruto para achar o total final
    float calcularTotal(float subtotal, float desconto){
        return subtotal - desconto;
    }

int main (){

    // Declaração de variáveis para armazenar os dados de entrada e saída
    int quantidade;
    float preco, subTotal, desconto, total;

    // Entrada de dados pelo usuário
    printf ("Valor do produto: ");
    scanf ("%f", &preco);

    printf ("Quantidade: ");
    scanf ("%d", &quantidade);

    // Processamento de dados através das funções criadas
    subTotal = calcularSubtotal (preco, quantidade);
    desconto = calcularDesconto (subTotal);
    total = calcularTotal (subTotal, desconto);

    // Exibição dos resultados formatados com duas casas decimais (%.2f)
    printf ("\n--- Resumo do Pedido ---\n");
    printf ("Subtotal: %.2f\n", subTotal);
    printf ("Desconto: %.2f\n", desconto);
    printf ("Total: %.2f", total );


    return 0;
}