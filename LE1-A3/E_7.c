//
// Created by drmlopes on 23/11/24.
//

/* Ler dois valores (considere que não serão lidos valores iguais) e escrevê-los em
ordem crescente. */

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
    if (valor1 > valor2)
        printf("%.2f < %.2f\n\n", valor2, valor1);
    else
        printf("%.2f < %.2f\n\n", valor1, valor2);

    return 0;
}
