//
// Created by drmlopes on 12/12/24.
//

/* Escreva um algoritmo para ler as coordenadas (X,Y) de um ponto no sistema cartesiano e escrever o
quadrante ao qual o ponto pertence. Se o ponto estiver sobre os eixos, ou na origem, escrever NÃO ESTÁ
EM NENHUM QUADRANTE. Considere que o usuário poderá informar qualquer valor para as
coordenadas. */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    system("clear");
    float X, Y;

    printf("Informe o Valor de X: ");
    scanf("%f", &X);

    printf("Informe o Valor de Y: ");
    scanf("%f", &Y);

    system("clear");
    printf("X: %.2f\nY: %.2f\n\n", X, Y);

    if (X > 0 && Y > 0)
        printf("Quadrante I\n\n");
    else if (X < 0 && Y > 0)
        printf("Quadrante II\n\n");
    else if (X < 0 && Y < 0)
        printf("Quadrante III\n\n");
    else if (X > 0 && Y < 0)
        printf("Quadrante IV\n\n");
    else
        printf("Não está em nenhum Quadrante!\a\n\n");

    return 0;
}
