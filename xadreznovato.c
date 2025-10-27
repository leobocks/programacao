#include <stdio.h>

int main() {
    // Movimento da Torre (for)
    printf("Movimento da Torre:\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n"); // Imprime a direção do movimento
    }

    printf("\n"); // Linha em branco para separar os movimentos

    // Movimento do Bispo (while)
    printf("Movimento do Bispo:\n");
    int j = 0;
    while (j < 5) {
        printf("Cima, Direita\n"); // Imprime a direção do movimento diagonal
        j++;
    }

    printf("\n"); // Linha em branco para separar os movimentos

    // Movimento da Rainha (do-while)
    printf("Movimento da Rainha:\n");
    int k = 0;
    do {
        printf("Esquerda\n"); // Imprime a direção do movimento
        k++;
    } while (k < 8);

    printf("\n"); // Linha em branco para separar os movimentos

    // Movimento do Cavalo (loops aninhados)
    printf("Movimento do Cavalo:\n");
    int l = 0;
    int movimentoVertical = 2; // Número de casas movimento vertical
    int movimentoHorizontal = 1; // Número de casas movimento horizontal

    for (int l = 0; l < movimentoVertical; l++) {
        printf("Baixo\n"); // Imprime o movimento vertical
    }

    int m = 0;
    while (m < movimentoHorizontal) {
        printf("Esquerda\n"); // Imprime o movimento horizontal
        m++;
    }

    return 0;
}
