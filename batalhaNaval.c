#include <stdio.h>

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO 10 // Define o tamanho do tabuleiro

void inicializarTabuleiro(int tabuleiro[TAMANHO][TAMANHO]) {
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            tabuleiro[i][j] = 0;
        }
    }
}

void posicionarNavio(int tabuleiro[TAMANHO][TAMANHO], int x, int y, int tamanho, int direcao) {
    for (int i = 0; i < tamanho; i++) {
        if (direcao == 0) { // Horizontal
            tabuleiro[x][y + i] = 1;
        } else { // Vertical
            tabuleiro[x + i][y] = 1;
        }
    }
}

void exibirTabuleiro(int tabuleiro[TAMANHO][TAMANHO]) {
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

void posicionarNavios(int tabuleiro[TAMANHO][TAMANHO]) {
    posicionarNavio(tabuleiro, 1, 2, 3, 1); // Navio vertical
    posicionarNavio(tabuleiro, 3, 1, 3, 0); // Navio horizontal
    posicionarNavio(tabuleiro, 5, 5, 3, 0); // Navio diagonal
    posicionarNavio(tabuleiro, 7, 7, 3, 1); // Outro navio diagonal
}

int main() {
    int tabuleiro[TAMANHO][TAMANHO];
    inicializarTabuleiro(tabuleiro);
    posicionarNavios(tabuleiro);

    printf("\nTabuleiro:\n");
    exibirTabuleiro(tabuleiro);
    
    return 0;
}
