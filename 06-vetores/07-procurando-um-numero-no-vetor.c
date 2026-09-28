#include <stdio.h>

int main(){

    int numero[10];     // Declara um vetor (array) de 10 posições para armazenar os números inteiros
    int contador;       // Declara uma variável para controlar os loops (laços de repetição)
    int escolherNumero; // Armazena o número que o usuário deseja buscar no vetor
    int encontrado = 0; // Flag (bandeira) para indicar se o número foi encontrado (0 = não, 1 = sim)

    // Primeiro loop: preenche o vetor com 10 valores digitados pelo usuário
    for(contador = 0; contador < 10; contador++){
        printf ("Digite o número %d: ", contador + 1);// Pede o número atual (exibe de 1 a 10)
        scanf ("%d", &numero[contador]); // Lê o valor digitado e guarda na posição 'contador' do vetor
    }
     // Pede ao usuário o número que ele quer procurar na lista
    printf ("Procure o número: ");
    // Lê o valor da busca e armazena na variável
    scanf ("%d", &escolherNumero);


    // Segundo loop: percorre todo o vetor para verificar se o número procurado existe nele
        for(contador = 0; contador < 10; contador++){
            if (escolherNumero == numero[contador])// Compara o número buscado com o elemento atual do vetor
                encontrado = 1;// Se achar, muda a variável 'encontrado' para 1 (verdadeiro)
  
        }
    // Verifica o valor da flag para exibir a mensagem correta ao usuário
    if (encontrado == 1){
        printf ("Número encontrado"); // Mensagem exibida se o número estiver no vetor
    }
    else{
        printf ("Número não encontrado!");// Mensagem exibida caso o número não esteja no vetor
    }
    return 0;
}