#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // -------------------------------
    // Simulação de Movimento de Peças de Xadrez
    // Peças: Torre, Bispo e Rainha
    // Cada uma utiliza uma estrutura de repetição diferente.
    // -------------------------------

    // Definindo o número de casas que cada peça irá se mover
    const int movimentoTorre = 5;
    const int movimentoBispo = 5;
    const int movimentoRainha = 8;

    // -------------------------------
    // Movimento da TORRE
    // A Torre move-se em linha reta (horizontal ou vertical).
    // Aqui, ela se moverá 5 casas para a DIREITA.
    // Estrutura de repetição: FOR
    // -------------------------------
    printf("Movimento da TORRE:\n");
    for (int i = 1; i <= movimentoTorre; i++) {
        printf("Direita (%d casa)\n", i);
    }
    printf("\n");

    // -------------------------------
    // Movimento do BISPO
    // O Bispo move-se na diagonal, ou seja, combina duas direções.
    // Aqui, ele se moverá 5 casas na diagonal para CIMA e DIREITA.
    // Estrutura de repetição: WHILE
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
    // A Rainha pode mover-se em todas as direções.
    // Aqui, ela se moverá 8 casas para a ESQUERDA.
    // Estrutura de repetição: DO-WHILE
    // -------------------------------
    printf("Movimento da RAINHA:\n");
    int k = 1;
    do {
        printf("Esquerda (%d casa)\n", k);
        k++;
    } while (k <= movimentoRainha);
    printf("\n");

    // Fim do programa
    printf("Simulação de movimentos concluída!\n");

    return 0;
}
