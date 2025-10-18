#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
// -------------------------------------------
// Função recursiva para mover a TORRE
// Movimento: 5 casas para a DIREITA
// -------------------------------------------
void moverTorre(int casas, int atual) {
    // Condição de parada da recursão
    if (atual > casas) return;

    printf("Direita (%d casa)\n", atual);

    // Chamada recursiva para a próxima casa
    moverTorre(casas, atual + 1);
}

// -------------------------------------------
// Função recursiva para mover a RAINHA
// Movimento: 8 casas para a ESQUERDA
// -------------------------------------------
void moverRainha(int casas, int atual) {
    if (atual > casas) return;

    printf("Esquerda (%d casa)\n", atual);

    // Chamada recursiva
    moverRainha(casas, atual + 1);
}

// -------------------------------------------
// Função recursiva para o BISPO
// Movimento: 5 casas na diagonal (CIMA + DIREITA)
// Implementado com recursão + loops aninhados
// Loop externo: movimento vertical
// Loop interno: movimento horizontal
// -------------------------------------------
void moverBispo(int casas, int atualVertical) {
    if (atualVertical > casas) return;

    printf("Movimento %d:\n", atualVertical);

    // Loop interno (horizontal)
    for (int h = 1; h <= 1; h++) {
        printf("Cima, Direita (%d casa)\n", atualVertical);
    }

    // Chamada recursiva para o próximo passo
    moverBispo(casas, atualVertical + 1);
}

// -------------------------------------------
// Movimento do CAVALO
// Loops aninhados complexos
// Movimento: duas casas para CIMA e uma para a DIREITA
// Usa break e continue para controlar o fluxo
// -------------------------------------------
void moverCavalo() {
    const int movimentoCima = 2;
    const int movimentoDireita = 1;

    printf("Movimento do CAVALO:\n");

    // Loop externo: movimento vertical (para cima)
    for (int i = 1; i <= movimentoCima; i++) {
        if (i == 0) continue; // não necessário aqui, apenas ilustrativo
        printf("Cima (%d casa)\n", i);

        // Loop interno: movimento horizontal (para direita)
        for (int j = 1; j <= movimentoDireita; j++) {
            if (i > movimentoCima) break; // condição de parada
            if (j == 0) continue;
            if (i == movimentoCima) {
                printf("Direita (%d casa)\n", j);
            }
        }
    }
}
int main() {
    // Quantidade de casas definidas
    const int movimentoTorre = 5;
    const int movimentoBispo = 5;
    const int movimentoRainha = 8;

    // -------------------------------
    // Movimento da TORRE (recursivo)
    // -------------------------------
    printf("Movimento da TORRE:\n");
    moverTorre(movimentoTorre, 1);
    printf("\n");

    // -------------------------------
    // Movimento do BISPO (recursivo + loops aninhados)
    // -------------------------------
    printf("Movimento do BISPO:\n");
    moverBispo(movimentoBispo, 1);
    printf("\n");

    // -------------------------------
    // Movimento da RAINHA (recursivo)
    // -------------------------------
    printf("Movimento da RAINHA:\n");
    moverRainha(movimentoRainha, 1);
    printf("\n");

    // -------------------------------
    // Movimento do CAVALO (loops complexos)
    // -------------------------------
    moverCavalo();
    printf("\n");

    printf("Simulação de movimentos concluída!\n");
    return 0;
}
