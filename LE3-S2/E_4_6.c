//
// Created by drmlopes on 12/12/24.
//

/* Escreva um algoritmo para ler 3 valores e escrever o maior deles. Considere que os usuário não
informará valores iguais. */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    system("clear");
    float valor1, valor2, valor3;

    printf("Informe o Valor 1: ");
    scanf("%f", &valor1);

    printf("Informe o Valor 2: ");
    scanf("%f", &valor2);

    printf("Informe o Valor 3: ");
    scanf("%f", &valor3);

    system("clear");
    printf("Valor 1: %.2f\nValor 2: %.2f\nValor 3: %.2f\n\nO Maior valor é ", valor1, valor2, valor3);

    if (valor1 > valor2 && valor1 > valor3)
        printf("%.2f\n\n", valor1);
    else if (valor2 > valor1 && valor2 > valor3)
        printf("%.2f\n\n", valor2);
    else if (valor3 > valor1 && valor3 > valor2)
        printf("%.2f\n\n", valor3);

    return 0;
}
