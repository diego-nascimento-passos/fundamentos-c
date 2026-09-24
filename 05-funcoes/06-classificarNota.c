#include <stdio.h>
    
    // Cria a função 'classificarNota' que recebe a nota e retorna um texto (string)
    // Usamos 'const char *' em C quando queremos que uma função retorne uma palavra ou frase pronta
    const char * classificarNota(float nota){
        // Se a nota for maior ou igual a 7, entra nesta primeira condição
        if (nota >= 7){
            return "Aprovado";// Retorna a palavra "Aprovado"
        }
        // Se não for >= 7, mas for maior ou igual a 5, entra nesta segunda condição
        else if (nota >= 5){
            return "Recuperação";// Retorna a palavra "Recuperação"
        }
        // Se não entrar em nenhuma das condições anteriores (nota menor que 5)
        else{
            return "Reprovado";// Retorna a palavra "Reprovado"
        }
    }

int main (){

    float nota;// Cria a variável para armazenar a nota digitada

    printf ("Digite sua nota: ");// Pede a nota para o usuário
    scanf ("%f", &nota);// Lê a nota e salva na variável do tipo float
    // Chama a função passando a nota. O %s é usado no printf para exibir textos (strings)
    printf ("%s", classificarNota(nota));


    return 0;
}