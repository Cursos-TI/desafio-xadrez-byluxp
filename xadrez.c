#include <stdio.h>

int main () {

    int c = 5; // para a quantidade de casas que eu quero movimentar
    int m = 1; // para casa inicial

    printf("Bem vindo ao jogo de xadrez!\n");

    // Torre
    while ( m <= c ) {
        printf("A torre está na casa %d\n", m);
        m++;
    }

    // Bispo 
    m = 1; // resetando a casa inicial para 1
    while ( m <= c ) {
        printf("O bispo está na casa %d\n", m);
        m++;
    }

    // Rainha
    m = 1; // resetando a casa inicial para 1
    do {
        for (m = 1; m <= c; m++) {
            printf("A rainha está na casa %d\n", m);
        }
        m = c + 1; // para sair do loop

    } while (m <= c);

    printf("Movimentação concluída!\n");

    return 0;
}