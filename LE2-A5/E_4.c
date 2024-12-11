//
// Created by drmlopes on 11/12/24.
//

/* Faça um algoritmo que leia 3 números e diga se
podem ser lados de um triângulo. Observe: A, B
e C são lados de um triângulo se:
A < (B+C) e B < (C+A) e C < (A+B) */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    system("clear");
    float A, B, C;

    printf("Informe o Valor de A: ");
    scanf("%f", &A);

    printf("Informe o Valor de B: ");
    scanf("%f", &B);

    printf("Informe o Valor de C: ");
    scanf("%f", &C);

    system("clear");
    if ((A < (B + C)) && (B < (C + A)) && (C < (A + B)))
        printf("A: %.2f\nB: %.2f\nC: %.2f\n\nSão Lados de um Triângulo.\n\n", A, B, C);
    else
        printf("A: %.2f\nB: %.2f\nC: %.2f\n\nNão são Lados de um Triângulo!\a\n\n", A, B, C);

    return 0;
}
