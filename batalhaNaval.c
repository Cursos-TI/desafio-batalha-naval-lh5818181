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

    // --- 2. POSICIONAMENTO DOS NAVIOS (VALOR 3) ---
    for (j = 0; j < 3; j++) tabuleiro[2][1 + j] = 3; // Horizontal
    for (i = 0; i < 3; i++) tabuleiro[5 + i][7] = 3; // Vertical
    for (i = 0; i < 3; i++) tabuleiro[i][i] = 3;     // Diagonal 1
    for (i = 0; i < 3; i++) tabuleiro[5 + i][2 - i] = 3; // Diagonal 2

    // --- 3. HABILIDADES ESPECIAIS (VALOR 5) ---
    
    // Ponto de Origem para as habilidades (Centros/Topos)
    int origemConeL = 1, origemConeC = 5;
    int origemCruzL = 8, origemCruzC = 1;
    int origemOctaL = 5, origemOctaC = 4;

    // A. HABILIDADE EM CONE
    // Lógica: À medida que a linha aumenta, a largura da base aumenta.
    // Usei uma matriz virtual de 3x5
    for (i = 0; i < 3; i++) {
        for (j = -i; j <= i; j++) {
            int novaL = origemConeL + i;
            int novaC = origemConeC + j;
            // Validação de limites do tabuleiro
            if (novaL >= 0 && novaL < 10 && novaC >= 0 && novaC < 10) {
                tabuleiro[novaL][novaC] = 5;
            }
        }
    }

    // B. HABILIDADE EM CRUZ
    // Lógica: Afeta uma linha e uma coluna a partir do centro.
    // Usei uma área de 5x5 ao redor do ponto de origem.
    for (i = -2; i <= 2; i++) {
        for (j = -2; j <= 2; j++) {
            if (i == 0 || j == 0) { // Se estiver na linha ou coluna central da área
                int novaL = origemCruzL + i;
                int novaC = origemCruzC + j;
                if (novaL >= 0 && novaL < 10 && novaC >= 0 && novaC < 10) {
                    tabuleiro[novaL][novaC] = 5;
                }
            }
        }
    }

    // C. HABILIDADE EM OCTAEDRO
    // Lógica: A soma das distâncias absolutas (Manhattan) define o losango.
    // |dx| + |dy| <= constante
    for (i = -2; i <= 2; i++) {
        for (j = -2; j <= 2; j++) {
            int dist = (i < 0 ? -i : i) + (j < 0 ? -j : j); // Função de valor absoluto manual
            if (dist <= 2) {
                int novaL = origemOctaL + i;
                int novaC = origemOctaC + j;
                if (novaL >= 0 && novaL < 10 && novaC >= 0 && novaC < 10) {
                    tabuleiro[novaL][novaC] = 5;
                }
            }
        }
    }

    // --- 3. EXIBIÇÃO DOS RESULTADOS ---

    // --- 4. EXIBIÇÃO FINAL ---
    printf("=============================================\n");
    printf("        BATALHA NAVAL - NÍVEL MESTRE        \n");
    printf("      (0: Água | 3: Navio | 5: Habilidade)   \n");
    printf("=============================================\n\n");

    printf("    0 1 2 3 4 5 6 7 8 9\n");
    printf("    -------------------\n");
    for (i = 0; i < 10; i++) {
        printf("%d | ", i);
        for (j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}