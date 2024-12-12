//
// Created by drmlopes on 11/12/24.
//

/* Escreva um algoritmo para ler o número de gols marcados pelo Grêmio e o número de gols marcados
pelo Inter em um GRENAL. Escrever o nome do vencedor. Caso não haja vencedor deverá ser impresso a
palavra EMPATE. */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    system("clear");
    int gremio, internacional;

    printf("Informe os Gols do Grêmio: ");
    scanf("%d", &gremio);

    printf("Informe os Gols do Internacional: ");
    scanf("%d", &internacional);

    system("clear");
    printf("Gols do Grêmio: %d\nGols do Internacional: %d\n\n", gremio, internacional);

    if (gremio > internacional)
        printf("O vencedor foi o Grêmio.\n\n");
    else if (internacional > gremio)
        printf("O vencedor foi o Internacional.\n\n");
    else
        printf("A partida terminou em Empate.\n\n");

    return 0;
}
