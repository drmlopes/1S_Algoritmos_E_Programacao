//
// Created by drmlopes on 23/11/24.
//

/* Ler um valor e escrever se é positivo ou negativo (considere o valor zero como
positivo). */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    system("clear");
    float valor;

    printf("Informe um Valor: ");
    scanf("%f", &valor);

    system("clear");
    if (valor >= 0)
        printf("O Valor %.2f é Positivo.\n\n", valor);
    else
        printf("O Valor %.2f é Negativo.\n\n", valor);

    return 0;
}
