#include <stdio.h>

    // Cria a função 'calcularMedia' que recebe duas notas do tipo float (números com vírgula)
    float calcularMedia(float nota1, float nota2){
        return (nota1 + nota2) / 2;// Soma as duas notas entre parênteses e divide por 2, retornando o resultado
    }

int main(){

    // Cria duas variáveis do tipo float para armazenar notas com casas decimais
    float nota1, nota2;

    printf ("Primeira nota: "); // Pede a primeira nota na tela
    scanf ("%f", &nota1);// Lê o valor digitado e o salva na variável 'nota1' (usamos %f para float)
    printf ("Segunda nota: "); // Pede a segunda nota na tela
    scanf ("%f", &nota2);// Lê o valor digitado e o salva na variável 'nota2'

    // Chama a função passando as notas. O %.1f formata o resultado para exibir apenas 1 casa decimal
    printf ("A média é: %.1f", calcularMedia(nota1, nota2));

    return 0;
}