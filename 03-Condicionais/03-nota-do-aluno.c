#include <stdio.h>

int main(){
    
    // Declaração de variáveis
    float nota;

    // Entrada de dados
    printf ("Digite sua nota: ");
    scanf ("%f", &nota);

    // Condição if , else if e else 
    if (nota < 0 || nota > 10){ // Operadores Lógicos || -> (OU) 
        printf ("Nota inválida");
    }
    else if (nota >= 9){
        printf ("Excelente");
    }
    else if (nota >= 7){
        printf ("Bom");
    }
    else if (nota >= 5){
        printf ("Recuperação");
    }
    else{
        printf ("Reprovado");
    }

    return 0;
}