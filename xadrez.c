#include <stdio.h>

// Função recursiva para a Torre: move 5 casas para a direita
void moverTorre(int passo, int total) {
    if (passo > total) return;
    printf("Direita\n");
    moverTorre(passo + 1, total);
}

// Função recursiva para a Rainha: move 8 casas para a esquerda
void moverRainha(int passo, int total) {
    if (passo > total) return;
    printf("Esquerda\n");
    moverRainha(passo + 1, total);
}

// Função recursiva para o Bispo com loops aninhados
void moverBispo(int linha, int totalLinhas) {
    if (linha > totalLinhas) return;

    for (int coluna = 1; coluna <= 1; coluna++) {
        printf("Cima Direita\n");
    }

    moverBispo(linha + 1, totalLinhas);
}

// Movimento complexo do Cavalo: 2 para cima, 1 para direita
void moverCavalo() {
    printf("\n=== Movimento do Cavalo ===\n");

    int movimentosRealizados = 0;

    for (int vertical = 2; vertical >= 1; vertical--) {
        for (int horizontal = 1; horizontal <= 2; horizontal++) {
            if (vertical == 2 && horizontal == 2) {
                // Ignora esse caso para manter o "L"
                continue;
            }

            if (vertical == 1 && horizontal == 1) {
                printf("Direita\n");
                movimentosRealizados++;
                break; // encerra após completar o "L"
            }

            printf("Cima\n");
            movimentosRealizados++;
        }

        if (movimentosRealizados >= 3) break;
    }
}

int main() {
    printf("=== Movimento da Torre ===\n");
    moverTorre(1, 5);

    printf("\n=== Movimento da Rainha ===\n");
    moverRainha(1, 8);

    printf("\n=== Movimento do Bispo ===\n");
    moverBispo(1, 5);

    moverCavalo();

    printf("\n=== Fim dos Movimentos ===\n");
    return 0;
}