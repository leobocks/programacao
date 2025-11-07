#include <stdio.h>

int main() {
    // Tamanho fixo do tabuleiro 10x10 e valor para água/navio
    int tamanho_tabuleiro = 10;
    int agua = 0;
    int valor_navio = 3;       // Valor que representa parte do navio
    int tamanho_navio = 3;     // Cada navio ocupa 3 posições

    // Matriz do tabuleiro 10x10
    int tabuleiro[10][10];

    // Inicializa o tabuleiro com 0 (água)
    for (int linha = 0; linha < tamanho_tabuleiro; linha++) {
        for (int coluna = 0; coluna < tamanho_tabuleiro; coluna++) {
            tabuleiro[linha][coluna] = agua;
        }
    }

    // Vetores que representam os navios (cada posição com valor 3)
    int navio_horizontal[3] = {valor_navio, valor_navio, valor_navio};
    int navio_vertical[3]   = {valor_navio, valor_navio, valor_navio};

    // Coordenadas iniciais dos navios (definidas diretamente no código)
    int linha_horizontal = 2;   // linha do navio horizontal
    int coluna_horizontal = 4;  // coluna inicial do navio horizontal
    int linha_vertical = 5;     // linha inicial do navio vertical
    int coluna_vertical = 1;    // coluna do navio vertical

    // Validação de limites para o navio horizontal
    if (linha_horizontal < 0 || linha_horizontal >= tamanho_tabuleiro ||
        coluna_horizontal < 0 || coluna_horizontal + tamanho_navio - 1 >= tamanho_tabuleiro) {
        printf("Falha: navio horizontal fora dos limites.\n");
        return 1;
    }

    // Validação de limites para o navio vertical
    if (linha_vertical < 0 || linha_vertical + tamanho_navio - 1 >= tamanho_tabuleiro ||
        coluna_vertical < 0 || coluna_vertical >= tamanho_tabuleiro) {
        printf("Falha: navio vertical fora dos limites.\n");
        return 1;
    }

    // Verificação de sobreposição para o navio horizontal
    for (int i = 0; i < tamanho_navio; i++) {
        if (tabuleiro[linha_horizontal][coluna_horizontal + i] != agua) {
            printf("Falha: navio horizontal sobrepoe outro navio.\n");
            return 1;
        }
    }

    // Verificação de sobreposição para o navio vertical
    for (int i = 0; i < tamanho_navio; i++) {
        if (tabuleiro[linha_vertical + i][coluna_vertical] != agua) {
            printf("Falha: navio vertical sobrepoe outro navio.\n");
            return 1;
        }
    }

    // Posiciona o navio horizontal no tabuleiro copiando valores do vetor
    for (int i = 0; i < tamanho_navio; i++) {
        tabuleiro[linha_horizontal][coluna_horizontal + i] = navio_horizontal[i];
    }

    // Posiciona o navio vertical no tabuleiro copiando valores do vetor
    for (int i = 0; i < tamanho_navio; i++) {
        tabuleiro[linha_vertical + i][coluna_vertical] = navio_vertical[i];
    }

    // Impressão do tabuleiro
    printf("Tabuleiro (0 = agua, 3 = navio):\n");
    for (int linha = 0; linha < tamanho_tabuleiro; linha++) {
        for (int coluna = 0; coluna < tamanho_tabuleiro; coluna++) {
            printf("%d ", tabuleiro[linha][coluna]);
        }
        printf("\n");
    }

    return 0;
}
