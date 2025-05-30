#include <stdio.h>

// Constantes para o tabuleiro 8x8
#define TABULEIRO 8

// Função para movimentar o Bispo (diagonal)
void movimenta_bispo() {
    printf("Movimentação do Bispo (diagonal):\n");
    for (int i = 1; i < TABULEIRO; i++) {
        printf("Diagonal direita cima: casa +%d, casa +%d\n", i, i);
        printf("Diagonal esquerda cima: casa +%d, casa -%d\n", i, i);
        printf("Diagonal direita baixo: casa -%d, casa +%d\n", i, i);
        printf("Diagonal esquerda baixo: casa -%d, casa -%d\n", i, i);
    }
}

// Função para movimentar a Torre (horizontal e vertical)
void movimenta_torre() {
    printf("Movimentação da Torre (horizontal e vertical):\n");
    for (int i = 1; i < TABULEIRO; i++) {
        printf("Mover %d casas para a direita\n", i);
        printf("Mover %d casas para a esquerda\n", i);
        printf("Mover %d casas para cima\n", i);
        printf("Mover %d casas para baixo\n", i);
    }
}

// Função para movimentar a Rainha (combina torre e bispo)
void movimenta_rainha() {
    printf("Movimentação da Rainha (combina torre e bispo):\n");
    movimenta_bispo();
    movimenta_torre();
}

int main() {
    printf("Desafio Jogo de Xadrez - Movimentação das Peças\n\n");

    movimenta_bispo();
    printf("\n");
    movimenta_torre();
    printf("\n");
    movimenta_rainha();

    return 0;
}
