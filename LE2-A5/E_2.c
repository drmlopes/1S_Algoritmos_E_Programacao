//
// Created by drmlopes on 11/12/24.
//

/* Faça um algoritmo que leia um número e mostre
se ele é positivo, negativo ou zero. */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    system("clear");
    float valor;

    printf("Informe um Valor: ");
    scanf("%f", &valor);

    system("clear");
    if (valor == 0)
        printf("O Valor %.2f é igual a Zero.\n\n", valor);
    else if (valor > 0)
        printf("O Valor %.2f é Positivo.\n\n", valor);
    else
        printf("O Valor %.2f é Negativo.\n\n", valor);

    return 0;
}
