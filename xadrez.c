#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    //Variaveis de movimento das peças
    int bispo = 1;
    int torre;
    int rainha =1;
    int finalCavalo =1;

    //Movimento Bispo
    printf("====================\n");
    printf("Movimento do Bispo\n");
    while (bispo <=5)
    {
        printf("Cima/Direita\n");
        bispo++;// incremento de movimentos do bispo


    }
    

    //Movimento Torre
    printf("====================\n");
    printf("Movimento do Torre\n");
    for (torre = 1; torre <= 5; torre++)
    {
        printf("Direita\n");
    }
    
    //Movimento Rainha
    printf("====================\n");
    printf("Movimento do Rainha\n");
    do
    {
        printf("Esquerda\n");
        rainha++;//incremento de movimento da rainha
    } while (rainha <= 8);

    

    //Movimento 
    printf("====================\n");
    printf("Movimento do Cavalo\n");
    while (finalCavalo--)
    {
        for (int i = 0; i < 2; i++)
        {
            printf("Baixo\n ");
        }
        printf("Esquerda\n");
    }
    
    
    printf("Fim do Jogo!!!\n");
    return 0;
}
