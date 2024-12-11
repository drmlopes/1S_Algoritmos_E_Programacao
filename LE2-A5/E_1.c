//
// Created by drmlopes on 11/12/24.
//

/* Construir um algoritmo que dados dois números
escreva o maior. */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    system("clear");
    float valor1, valor2;

    printf("Informe o Primeiro Valor: ");
    scanf("%f", &valor1);

    printf("Informe o Segundo Valor: ");
    scanf("%f", &valor2);

    system("clear");
    printf("Primeiro Valor: %.2f\nSegundo Valor: %.2f\n\n", valor1, valor2);
    if (valor1 > valor2)
        printf("O maior valor é %.2f\n\n", valor1);
    else if (valor2 > valor1)
        printf("O maior valor é %.2f\n\n", valor2);
    else
        printf("Os valores são iguais.\n\n");

    return 0;
}
