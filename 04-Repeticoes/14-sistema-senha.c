#include <stdio.h>

int main(){
    
    // Declaração das variáveis
    int senha;
    int contador = 0;

    // Estrutura de repetiçao do-while para solicitar a senha 3 vezes.
    do{
        printf ("Digite sua senha: ");
        scanf ("%d", &senha);
        contador++;
        if (senha == 1234){
            printf ("Acesso liberado!\n");
            return 0;
        }
        else {
            printf ("Tentativa %d de 3:\n", contador);
        }

    }
    while (contador < 3);
        printf ("Você atingiu o limite.\nTente novamente mais tarde.");


    return 0;
}