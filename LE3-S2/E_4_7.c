//
// Created by drmlopes on 12/12/24.
//

/* Escreva um algoritmo para ler 3 valores e escrever a soma dos 2 maiores. Considere que os usuário
não informará valores iguais. */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    system("clear");
    float valor1, valor2, valor3, soma = 0;

    printf("Informe o Valor 1: ");
    scanf("%f", &valor1);

    printf("Informe o Valor 2: ");
    scanf("%f", &valor2);

    printf("Informe o Valor 3: ");
    scanf("%f", &valor3);

    system("clear");
    printf("Valor 1: %.2f\nValor 2: %.2f\nValor 3: %.2f\n\nA Soma dos dois maiores valores é ", valor1, valor2, valor3);

    if (valor1 > valor2 && valor1 > valor3) {
        if (valor2 > valor3)
            soma = valor1 + valor2;
        else
            soma = valor1 + valor3;
    }
    else if (valor2 > valor1 && valor2 > valor3) {
        if (valor1 > valor3)
            soma = valor2 + valor1;
        else
            soma = valor2 + valor3;
    }
    else if (valor3 > valor1 && valor3 > valor2) {
        if (valor1 > valor2)
            soma = valor3 + valor1;
        else
            soma = valor3 + valor2;
    }
    printf("%.2f\n\n", soma);

    return 0;
}
