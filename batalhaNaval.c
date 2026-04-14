#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios

    // 1. Declaração do Tabuleiro 10x10
    // O valor 0 representa água.
    int tabuleiro[10][10];

    // Inicializando o tabuleiro com 0 usando loops aninhados
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // 2. Posicionamento do Navio Horizontal (Tamanho 3)
    // Coloquei o navio na linha 2, ocupando as colunas 1, 2 e 3.
    int linhaH = 2;
    int colH_inicio = 1;
    tabuleiro[linhaH][colH_inicio] = 3;
    tabuleiro[linhaH][colH_inicio + 1] = 3;
    tabuleiro[linhaH][colH_inicio + 2] = 3;

    // 3. Posicionamento do Navio Vertical (Tamanho 3)
    // Coloquei o navio na coluna 7, ocupando as linhas 5, 6 e 7.
    int colV = 7;
    int linhaV_inicio = 5;
    tabuleiro[linhaV_inicio][colV] = 3;
    tabuleiro[linhaV_inicio + 1][colV] = 3;
    tabuleiro[linhaV_inicio + 2][colV] = 3;

    // 4. Exibição das Coordenadas dos Navios
    printf("Navio Horizontal posicionado nas coordenadas: (%d, %d), (%d, %d), (%d, %d)\n", 
            linhaH, colH_inicio, linhaH, colH_inicio + 1, linhaH, colH_inicio + 2);

    printf("Navio Vertical posicionado nas coordenadas: (%d, %d), (%d, %d), (%d, %d)\n", 
            linhaV_inicio, colV, linhaV_inicio + 1, colV, linhaV_inicio + 2, colV);

    printf("\n--- Fim da Parte 1 ---\n");


    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
