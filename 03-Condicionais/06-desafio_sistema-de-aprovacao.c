#include <stdio.h>

int main(){

    // Declaraão de variáveis 
    float nota1, nota2, media;
    int frequencia;

    // Entrada dos dados 
    printf ("Digite a primeria nota: ");
    scanf ("%f", &nota1);

    printf ("Digite a segunda nota: ");
    scanf ("%f", &nota2);
    
    printf ("Frequência do aluno: ");
    scanf ("%d", &frequencia);

    // Usando condiçoes e Operadores lógico para validação das nota
    if ((nota1 < 0 || nota1 > 10) || (nota2 < 0 || nota2 > 10)){  
        printf ("Nota inválida");
        return 0;
    }
    else if (frequencia < 0 || frequencia > 100){  // Usando condiçoes e Operadores lógico para validação das frequência
        printf ("Frequência inválida");
        return 0;
    }

    // Calculo da média
    media = (nota1 + nota2) / 2;
    
     // Usando condiçoes e Operadores lógico para comparação das notas.
    if (media >= 7 && frequencia >= 75){
        printf ("Parabéns, Aluno APROVADO!");
    }
    else if (media >= 5 && frequencia >= 75){
        printf ("Aluno em RECUPERAÇÃO!");
    }
    else {
        printf ("Aluno REPROVADO!");
    }

    return 0;
}


