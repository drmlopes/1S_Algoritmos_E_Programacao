//
// Created by drmlopes on 23/11/24.
//

/* Ler um valor e escrever a mensagem É MAIOR QUE 10! se o valor lido for maior
que 10, caso contrário escrever NÃO É MAIOR QUE 10! */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    system("clear");
    float valor;

    printf("Informe um Valor: ");
    scanf("%f", &valor);

    system("clear");
    if (valor > 10)
        printf("O Valor %.2f é Maior do que 10.\n\n", valor);
    else if (valor < 10)
        printf("O Valor %.2f é Menor do que 10.\n\n", valor);
    else
        printf("O Valor %.2f é Igual a 10.\n\n", valor);

    return 0;
}
