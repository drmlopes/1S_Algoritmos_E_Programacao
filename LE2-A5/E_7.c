//
// Created by drmlopes on 11/12/24.
//

/* Faça um algoritmo que leia um número inteiro e
mostre uma mensagem indicando se este
número é par ou ímpar, e se é positivo, negativo
ou zero. */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    system("clear");
    int valor;

    printf("Informe um Valor: ");
    scanf("%d", &valor);

    system("clear");
    if (valor % 2 == 0)
        printf("O Valor %d é Par e ", valor);
    else
        printf("O Valor %d é Ímpar e ", valor);

    if (valor > 0)
        printf("Positivo.\n\n");
    else if (valor < 0)
        printf("Negativo.\n\n");
    else
        printf("igual a Zero.\n\n");

    return 0;
}
