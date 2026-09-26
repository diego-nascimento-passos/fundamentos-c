#include <stdio.h>

int main(){

    int numeros[5];// Declara um vetor de inteiros com 5 posições (índices de 0 a 4)
    int contador; // Variável de controle para os laços de repetição (índice do vetor)
    // Variável que funciona como ACUMULADOR. 
    // É obrigatório inicializar com 0 para não somar com "lixo de memória".
    int soma = 0;

    // PRIMEIRO LAÇO: Preenche o vetor com os dados digitados pelo usuário
    for (contador = 0; contador < 5; contador++){
        // Exibe "Digite o número X: ". Usamos 'contador + 1' apenas para visualização humana (1 a 5)
        printf ("Digite o número %d: ", contador + 1);
        // Salva o valor digitado na posição correspondente ao 'contador' atual
        scanf ("%d", &numeros[contador]);
    }
    // SEGUNDO LAÇO: Percorre o vetor para somar todos os elementos armazenados
    for (contador = 0; contador < 5; contador++){
        // O acumulador 'soma' pega o seu valor atual e adiciona o número da posição atual do vetor
            soma = soma + numeros[contador];
    }
    // Exibe o resultado final acumulado
    printf ("A soma é: %d", soma);
    return 0;
}