#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // --- 1. DEFINIÇÃO E INICIALIZAÇÃO ---
    // Matriz 10x10 representando o oceano (0 = água, 3 = navio)
    int tabuleiro[10][10];
    int i, j;

    // Inicializando todas as posições com 0 usando loops aninhados
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // --- 2. POSICIONAMENTO DOS NAVIOS (TAMANHO 3) ---

    // Navio 1: Horizontal
    // Posicionado na linha 2, colunas 1, 2 e 3
    int linhaH = 2, colH = 1;
    for (j = 0; j < 3; j++) {
        tabuleiro[linhaH][colH + j] = 3;
    }

    // Navio 2: Vertical
    // Posicionado na coluna 7, linhas 5, 6 e 7
    int linhaV = 5, colV = 7;
    for (i = 0; i < 3; i++) {
        tabuleiro[linhaV + i][colV] = 3;
    }

    // Navio 3: Diagonal Principal (Linha e Coluna aumentam juntas)
    // Coordenadas: (0,0), (1,1), (2,2)
    for (i = 0; i < 3; i++) {
        tabuleiro[i][i] = 3;
    }

    // Navio 4: Diagonal Secundária (Linha aumenta, Coluna diminui)
    // Coordenadas: (5,2), (6,1), (7,0)
    int startL = 5, startC = 2;
    for (i = 0; i < 3; i++) {
        tabuleiro[startL + i][startC - i] = 3;
    }

    // --- 3. EXIBIÇÃO DOS RESULTADOS ---

    printf("=============================================\n");
    printf("        BATALHA NAVAL - NÍVEL AVENTUREIRO     \n");
    printf("=============================================\n\n");

    // Listagem de coordenadas para conferência (Requisito Novato/Aventureiro)
    printf("Posições dos Navios (Valor 3):\n");
    printf("- Horizontal: (2,1), (2,2), (2,3)\n");
    printf("- Vertical:   (5,7), (6,7), (7,7)\n");
    printf("- Diagonal 1: (0,0), (1,1), (2,2)\n");
    printf("- Diagonal 2: (5,2), (6,1), (7,0)\n\n");

    // Impressão da Matriz 10x10 formatada
    printf("    0 1 2 3 4 5 6 7 8 9 (Colunas)\n");
    printf("    -------------------\n");

    for (i = 0; i < 10; i++) {
        printf("%d | ", i); // Índice da linha para facilitar leitura
        for (j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    printf("\n--- Fim do Desafio: Nível Aventureiro ---\n");

    return 0;
}