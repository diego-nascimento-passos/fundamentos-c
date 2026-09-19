#include <stdio.h>

int main(){

    // Declaração de variáveis
    float preco, total;
    int quantidade;
    int categoria = 0;

    // Entrada de dados
    printf ("Preço do produto: ");
    scanf ("%f", &preco);

    printf ("Digite a quantidade desejada: ");
    scanf ("%d", &quantidade);

    printf ("Categoria 1 → Alimentação\nCategoria 2 → Limpeza\nCategoria 3 → Eletrônicos\nCategoria: ");
    scanf ("%d", &categoria);

    // Condição if, else if e else para definir a categoria.
    if (categoria == 1){
        printf ("Alimentação\n");
    }
    else if (categoria == 2){
        printf ("Limpeza\n");
    }
    else if (categoria == 3){
        printf ("Eletrônicos\n");
    }
    else{
        printf ("Categoria inválida");
        return 0;
    }

     // Calculo do produto e quantidade
    total = preco * quantidade;
    
    // Condição if, else if e else para definir o preço
    if (preco < 50){
        printf ("Produto barato.\n");
    }
    else if (preco <= 200){
        printf ("Produto de preço médio.\n");
    }
    else{
        printf ("Produto caro.\n");
    }
    
    printf ("Valor total: %.2f", total);

    return 0;
}
