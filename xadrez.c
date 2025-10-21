#include <stdio.h>

int main () {

    int c = 5; // para a quantidade de casas que eu quero movimentar
    int m = 1; // para casa inicial

    printf("Bem vindo ao jogo de xadrez!\n");
    printf("\n"); // para pular uma linha e deixar organizado

    // Torre
    for ( m = 1; m <= c; m++ ) {
        printf("A torre se moveu %d casa(s) para direita\n", m);
    }
    printf("\n");

    // Bispo
    for ( m = 1; m <= c; m++ ) {
        printf("O bispo se moveu %d casa(s) para a diagonal\n", m);
    }
    printf("\n");

    // Rainha
    m = 1; // resetando a casa inicial para 1
    for (m = 1; m <= 8; m++) {
      printf("A rainha se moveu %d casa(s) para a esquerda\n", m);
    }
    printf("\n");

    // Cavalo ("L" pela movimentação em "L")
    for (int l = 1; l < 2; l++) {
        while ( l <= 2) {
            printf("Cavalo foi para baixo\n");
            l++;
        }
        printf("Cavalo foi para esquerda\n");
    }

    printf("\nMovimentação concluída!\n");

    return 0;
}