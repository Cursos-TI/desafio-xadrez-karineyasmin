#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Constantes para o número de casas que cada peça pode se mover

// desafio aventureiro 

const int BISPO_MOV = 5;
const int TORRE_MOV = 5;
const int RAINHA_MOV = 8;
    
int main() {
    
    // Movimentação do Bispo
    printf("Movimentação do Bispo:\n");
    for (int i = 1; i <= BISPO_MOV; i++) {
        printf("Diagonal superior direita %d\n", i);
    }

    // Movimentação da Torre
    printf("Movimentação da Torre:\n");
    for (int i = 1; i <= TORRE_MOV; i++) {
        printf("Direita %d\n", i);
    }

    // Movimentação da Rainha
    printf("Movimentação da Rainha:\n");
    for (int i = 1; i <= RAINHA_MOV; i++) {
        printf("Esquerda %d\n", i);
    }

    // Movimentação do Cavalo
    printf("Movimentação do Cavalo:\n");
    for (int i = 1; i <= 2; i++) {
        for (int j = 1; j <= 1; j++) {
            printf("L para baixo e esquerda %d-%d\n", i, j);
        }
    }
    return 0;
}
