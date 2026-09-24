#include <stdio.h>

    // Função que recebe o valor da compra e aplica uma taxa de desconto baseada no total
    float calcularDesconto(float compra){
        // Se a compra for de R$ 500 ou mais, aplica 10% de desconto
        if (compra >= 500){
            return compra - (compra * 10) / 100;
        }
        // Se a compra for entre R$ 200 e R$ 499.99, aplica 5% de desconto
        else if ( compra >= 200){
            return compra - (compra * 5) / 100;
        }
        else{
            // Para compras abaixo de R$ 200, não aplica nenhum desconto e mantém o valor original
            return compra;
        }
    }
// Função principal onde o programa inicia sua execução
int main(){

    float compra;// Declaração de variável para armazenar o valor informado pelo usuário

    // Solicita o valor da compra ao usuário
    printf("Valor da compra: ");
    scanf ("%f", &compra);// Lê o valor digitado e armazena na variável 'compra'

    // Exibe o valor final formatado com duas casas decimais, chamando a função de cálculo
    printf ("Valor total: %.2f", calcularDesconto(compra));

    return 0;
}