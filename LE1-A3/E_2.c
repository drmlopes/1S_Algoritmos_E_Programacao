//
// Created by drmlopes on 22/11/24.
//

/* Faça um algoritmo que leia a idade de uma pessoa expressa em anos, meses e dias e
escreva a idade dessa pessoa expressa apenas em dias. Considerar ano com 365 dias e
mês com 30 dias. */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    system("clear");
    int idade;

    printf("Informe a Idade: ");
    scanf("%d", &idade);

    int meses = idade * 12;
    int dias = idade * 365;

    system("clear");
    printf("Idade em Anos = %d\nIdade em Meses = %d\nIdade em Dias = %d\n\n", idade, meses, dias);

    return 0;
}
