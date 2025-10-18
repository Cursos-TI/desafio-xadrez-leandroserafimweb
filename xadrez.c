#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // -------------------------------
    // Simulação de Movimento de Peças de Xadrez
    // Peças: Torre, Bispo, Rainha e Cavalo
    // Cada peça utiliza uma estrutura de repetição diferente.
    // -------------------------------

    // Definindo o número de casas que cada peça irá se mover
    const int movimentoTorre = 5;
    const int movimentoBispo = 5;
    const int movimentoRainha = 8;

    // -------------------------------
    // Movimento da TORRE
    // Estrutura: FOR
    // Movimento: 5 casas para a DIREITA
    // -------------------------------
    printf("Movimento da TORRE:\n");
    for (int i = 1; i <= movimentoTorre; i++) {
        printf("Direita (%d casa)\n", i);
    }
    printf("\n");

    // -------------------------------
    // Movimento do BISPO
    // Estrutura: WHILE
    // Movimento: 5 casas na diagonal (CIMA e DIREITA)
    // -------------------------------
    printf("Movimento do BISPO:\n");
    int j = 1;
    while (j <= movimentoBispo) {
        printf("Cima, Direita (%d casa)\n", j);
        j++;
    }
    printf("\n");

    // -------------------------------
    // Movimento da RAINHA
    // Estrutura: DO-WHILE
    // Movimento: 8 casas para a ESQUERDA
    // -------------------------------
    printf("Movimento da RAINHA:\n");
    int k = 1;
    do {
        printf("Esquerda (%d casa)\n", k);
        k++;
    } while (k <= movimentoRainha);
    printf("\n");

    // -------------------------------
    // Movimento do CAVALO
    // Estruturas: FOR (externo) + WHILE (interno)
    // Movimento: duas casas para BAIXO e uma casa para a ESQUERDA (em forma de "L")
    // -------------------------------
    printf("Movimento do CAVALO:\n");

    const int movimentoBaixo = 2;   // Duas casas para baixo
    const int movimentoEsquerda = 1; // Uma casa para a esquerda

    // Primeiro movimento: duas casas para BAIXO (loop for)
    for (int x = 1; x <= movimentoBaixo; x++) {
        printf("Baixo (%d casa)\n", x);
    }

    // Segundo movimento: uma casa para a ESQUERDA (loop while)
    int y = 1;
    while (y <= movimentoEsquerda) {
        printf("Esquerda (%d casa)\n", y);
        y++;
    }

    printf("\n");

    // Fim do programa
    printf("Simulação de movimentos concluída!\n");

    return 0;
}
