//
// Created by drmlopes on 12/12/24.
//

/* Escreva um algoritmo para ler 2 valores e uma das seguintes operações a serem executadas
(codificada da seguinte forma: 1.Adição, 2.Subtração, 3.Divisão, 4.Multiplicação). Calcular e escrever o
resultado dessa operação sobre os dois valores lidos. */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    system("clear");
    int op;
    float valor1, valor2, resultado = 0;

    printf("Informe o Primeiro Valor: ");
    scanf("%f", &valor1);

    printf("Informe o Segundo Valor: ");
    scanf("%f", &valor2);

    printf("\n1 - Adição\n2 - Subtração\n3 - Divisão\n4 - Multiplicação\n\nEscolha uma opção: ");
    scanf("%d", &op);

    if (op == 1)
        resultado = valor1 + valor2;
    else if (op == 2)
        resultado = valor1 - valor2;
    else if (op == 3)
        resultado = valor1 / valor2;
    else if (op == 4)
        resultado = valor1 * valor2;

    system("clear");
    printf("Valor 1: %.2f\nValor 2: %.2f\n\n%.2f ", valor1, valor2, valor1);

    if (op == 1)
        printf("+ ");
    else if (op == 2)
        printf("- ");
    else if (op == 3)
        printf("/ ");
    else if (op == 4)
        printf("* ");

    printf("%.2f = %.2f\n\n", valor2, resultado);

    return 0;
}
