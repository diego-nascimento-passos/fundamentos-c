#include <stdio.h>

    // Função que recebe duas notas reais e calcula a média aritmética simples
    float calcularMedia(float nota1, float nota2){
        return (nota1 + nota2) / 2;
    }
    // Função que avalia a média e retorna um texto constante (string) representando o status do aluno
    const char * verificarSituacao(float media){
        // Se a média for 7.0 ou maior, o aluno está aprovado
        if (media >= 7){
            return "Aprovado";
        }
        // Se a média estiver entre 5.0 e 6.9, o aluno vai para a recuperação
        else if (media >= 5){
            return "Recuperação";
        }
        // Se a média for menor que 5.0, o aluno está reprovado
        else{
            return "Reprovado";
        }
    }

// Função principal onde o programa inicia sua execução
int main(){

    float nota1, nota2, media; // Declaração de variáveis para armazenar as duas notas e o resultado da média calculada

    // Solicita e lê a primeira nota do aluno
    printf ("Primeira nota: ");
    scanf ("%f", &nota1);

    // Solicita e lê a segunda nota do aluno
    printf ("Segunda nota: ");
    scanf ("%f", &nota2);

    // Chama a função 'calcularMedia' e guarda o resultado na variável 'media' para reutilizá-lo
    media = calcularMedia(nota1, nota2);

    // Exibe a média na tela formatada com duas casas decimais
    printf ("Média: %.1f\n", media);

    // Calcula a média novamente para passá-la como argumento para a função que define a situação do aluno (%s exibe o texto)
    printf("Situação: %s\n", verificarSituacao(media));

    return 0;
}