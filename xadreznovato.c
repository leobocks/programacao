#include <stdio.h>

// Tarefa:
// - Simula movimentos de peças de xadrez (Torre, Bispo, Rainha e Cavalo)
//   com foco em recursividade (Torre, Bispo, Rainha) e loops aninhados/complexos (Cavalo).
// Torre (Recursivo):
// - Move 'casas' vezes para a direita.
// - Casas <= 0 encerra a recursão.
// - Passo recursivo: imprime "Direita" e chama a si mesma com casas - 1.

void moverTorreRecursivo(int casas) {
    if (casas <= 0) {
        return; // Caso base
    }
    printf("Direita\n");
    moverTorreRecursivo(casas - 1);
}

// Bispo (Recursivo + Loops Aninhados):
// - Simula movimento diagonal "Cima, Direita".
// - Em cada nível recursivo, executa um "passo diagonal":
//   * Loop externo (vertical) imprime "Cima".
//   * Loop interno (horizontal) imprime "Direita".
// - Passos <= 0 encerra.

void moverBispoRecursivo(int passos) {
    if (passos <= 0) {
        return; // Caso base
    }

    // Loops aninhados: externo (vertical), interno (horizontal).
    
    for (int movimentoVertical = 0; movimentoVertical < 1; movimentoVertical++) {
        printf("Cima\n");
        for (int movimentoHorizontal = 0; movimentoHorizontal < 1; movimentoHorizontal++) {
            printf("Direita\n");
        }
    }

    // Passo recursivo: reduz a quantidade de passos diagonais restantes
    moverBispoRecursivo(passos - 1);
}

// Rainha (Recursivo):
// - Move 'casas' vezes para a esquerda.
// - Caso base: casas <= 0 encerra.
// - Passo recursivo: imprime "Esquerda" e chama a si mesma com casas - 1.

void moverRainhaRecursivo(int casas) {
    if (casas <= 0) {
        return; // Caso base
    }
    printf("Esquerda\n");
    moverRainhaRecursivo(casas - 1);
}

// CAVALO (LOOPS COMPLEXOS)
// - Movimento em "L": duas casas para cima ("Cima") e uma para a direita ("Direita").
//   * Para cada sequência de movimento "L":
//     - Loop para os dois movimentos "Cima".
//     - Loop/while para um movimento "Direita".
//   * 'movimentosEfetuados' limita o total de impressões.
//   * Exemplos de 'continue' e 'break' incluídos.

void moverCavaloEmL(int sequencias) {
    int limiteVertical = 2;    // Duas casas para cima por "L"
    int limiteHorizontal = 1;  // Uma casa para a direita por "L"

    int movimentosEfetuados = 0;
    int maxImpressoes = sequencias * (limiteVertical + limiteHorizontal);

    // Loop externo por sequência de "L"
    for (int s = 0; s < sequencias; s++) {
        // Movimento vertical: duas vezes "Cima"
        for (int v = 0; v < limiteVertical; v++) {
            // Demonstração de 'continue': condição artificial, não afeta a saída
            if (v < 0) {
                continue;
            }
            printf("Cima\n");
            movimentosEfetuados++;
            if (movimentosEfetuados >= maxImpressoes) {
                // 'break' para evitar exceder o limite total
                break;
            }
        }

        if (movimentosEfetuados >= maxImpressoes) {
            break; // Encerramento antecipado se atingimos o limite
        }

        // Movimento horizontal: uma vez "Direita"
        int h = 0;
        while (h < limiteHorizontal) {
            // Demonstração de 'continue': condição artificial, não afeta a saída
            if (h < 0) {
                h++;
                continue;
            }
            printf("Direita\n");
            movimentosEfetuados++;
            if (movimentosEfetuados >= maxImpressoes) {
                break; // Saída do while quando atingimos o limite
            }
            h++;
        }
    }
}

//PROGRAMA PRINCIPAL 

int main() {
    // Parâmetros definidos diretamente no código (conforme requisito):
     int casasTorre = 5;        // Número de casas para a Torre (Direita)
     int passosBispo = 5;       // Número de passos diagonais do Bispo (Cima + Direita)
     int casasRainha = 8;       // Número de casas para a Rainha (Esquerda)
     int sequenciasCavalo = 2;  // Quantidade de movimentos "L" do Cavalo (cada um: 2x Cima + 1x Direita)

    // Movimento da Torre (Recursividade)
    printf("Movimento da Torre:\n");
    moverTorreRecursivo(casasTorre);

    printf("\n"); // Linha em branco para separar os movimentos

    // Movimento do Bispo (Recursividade + Loops Aninhados)
    printf("Movimento do Bispo:\n");
    moverBispoRecursivo(passosBispo);

    printf("\n"); // Linha em branco para separar os movimentos

    // Movimento da Rainha (Recursividade)
    printf("Movimento da Rainha:\n");
    moverRainhaRecursivo(casasRainha);

    printf("\n"); // Linha em branco para separar os movimentos

    // Movimento do Cavalo (Loops Aninhados e Complexos)
    printf("Movimento do Cavalo:\n");
    moverCavaloEmL(sequenciasCavalo);

    return 0;
}
