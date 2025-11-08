#include <stdio.h>

// Constantes do jogo
#define TAMANHO_TABULEIRO 10
#define TAMANHO_NAVIO 3
#define AGUA 0
#define NAVIO 3

int main() {
    // Matriz do tabuleiro 10x10
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO];

    // 1) Inicializa o tabuleiro com 0 (água)
    for (int linha = 0; linha < TAMANHO_TABULEIRO; linha++) {
        for (int coluna = 0; coluna < TAMANHO_TABULEIRO; coluna++) {
            tabuleiro[linha][coluna] = AGUA;
        }
    }

    // 2) Navios como vetores unidimensionais (cada posição com 3)
    int navio_horizontal[TAMANHO_NAVIO] = {NAVIO, NAVIO, NAVIO};
    int navio_vertical[TAMANHO_NAVIO]   = {NAVIO, NAVIO, NAVIO};
    int navio_diag_princ[TAMANHO_NAVIO] = {NAVIO, NAVIO, NAVIO}; // diagonal principal (i+1, j+1)
    int navio_diag_sec[TAMANHO_NAVIO]   = {NAVIO, NAVIO, NAVIO}; // diagonal secundaria (i+1, j-1)

    // 3) Coordenadas iniciais escolhidas (não se sobrepõem)
    // Eixo horizontal: linha fixa, coluna aumenta
    int linha_h  = 0;
    int coluna_h = 0;

    // Eixo vertical: coluna fixa, linha aumenta
    int linha_v  = 2;
    int coluna_v = 5;

    // Diagonal principal: linha e coluna aumentam
    int linha_dp  = 6;
    int coluna_dp = 1;

    // Diagonal secundária: linha aumenta e coluna diminui
    int linha_ds  = 1;
    int coluna_ds = 9;

    // 4) Validação de limites
    // Horizontal
    if (linha_h < 0 || linha_h >= TAMANHO_TABULEIRO ||
        coluna_h < 0 || coluna_h + TAMANHO_NAVIO - 1 >= TAMANHO_TABULEIRO) {
        printf("Falha: navio horizontal fora dos limites.\n");
        return 1;
    }
    // Vertical
    if (linha_v < 0 || linha_v + TAMANHO_NAVIO - 1 >= TAMANHO_TABULEIRO ||
        coluna_v < 0 || coluna_v >= TAMANHO_TABULEIRO) {
        printf("Falha: navio vertical fora dos limites.\n");
        return 1;
    }
    // Diagonal principal
    if (linha_dp < 0 || linha_dp + TAMANHO_NAVIO - 1 >= TAMANHO_TABULEIRO ||
        coluna_dp < 0 || coluna_dp + TAMANHO_NAVIO - 1 >= TAMANHO_TABULEIRO) {
        printf("Falha: navio diagonal principal fora dos limites.\n");
        return 1;
    }
    // Diagonal secundaria
    if (linha_ds < 0 || linha_ds + TAMANHO_NAVIO - 1 >= TAMANHO_TABULEIRO ||
        coluna_ds < 0 || coluna_ds - (TAMANHO_NAVIO - 1) < 0) {
        printf("Falha: navio diagonal secundaria fora dos limites.\n");
        return 1;
    }

    // 5) Verificação de sobreposição (todas as células alvo devem ser AGUA)
    // Horizontal
    for (int k = 0; k < TAMANHO_NAVIO; k++) {
        if (tabuleiro[linha_h][coluna_h + k] != AGUA) {
            printf("Falha: navio horizontal sobrepoe outro navio.\n");
            return 1;
        }
    }
    // Vertical
    for (int k = 0; k < TAMANHO_NAVIO; k++) {
        if (tabuleiro[linha_v + k][coluna_v] != AGUA) {
            printf("Falha: navio vertical sobrepoe outro navio.\n");
            return 1;
        }
    }
    // Diagonal principal
    for (int k = 0; k < TAMANHO_NAVIO; k++) {
        if (tabuleiro[linha_dp + k][coluna_dp + k] != AGUA) {
            printf("Falha: navio diagonal principal sobrepoe outro navio.\n");
            return 1;
        }
    }
    // Diagonal secundaria
    for (int k = 0; k < TAMANHO_NAVIO; k++) {
        if (tabuleiro[linha_ds + k][coluna_ds - k] != AGUA) {
            printf("Falha: navio diagonal secundaria sobrepoe outro navio.\n");
            return 1;
        }
    }

    // 6) Posicionamento: copia o valor 3 do vetor do navio para a matriz
    // Horizontal
    for (int k = 0; k < TAMANHO_NAVIO; k++) {
        tabuleiro[linha_h][coluna_h + k] = navio_horizontal[k];
    }
    // Vertical
    for (int k = 0; k < TAMANHO_NAVIO; k++) {
        tabuleiro[linha_v + k][coluna_v] = navio_vertical[k];
    }
    // Diagonal principal
    for (int k = 0; k < TAMANHO_NAVIO; k++) {
        tabuleiro[linha_dp + k][coluna_dp + k] = navio_diag_princ[k];
    }
    // Diagonal secundaria
    for (int k = 0; k < TAMANHO_NAVIO; k++) {
        tabuleiro[linha_ds + k][coluna_ds - k] = navio_diag_sec[k];
    }

    // 7) Impressão do tabuleiro
    printf("Tabuleiro (0 = agua, 3 = navio):\n");
    for (int linha = 0; linha < TAMANHO_TABULEIRO; linha++) {
        for (int coluna = 0; coluna < TAMANHO_TABULEIRO; coluna++) {
            printf("%d ", tabuleiro[linha][coluna]);
        }
        printf("\n");
    }

    return 0;
}
