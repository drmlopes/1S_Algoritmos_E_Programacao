//
// Created by drmlopes on 22/11/24.
//

/* Escreva um algoritmo para ler as dimensões de um retângulo (base e altura), calcular
e escrever a área do retângulo. */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    system("clear");
    int base, altura;

    printf("Informe o valor da Base do Retângulo: ");
    scanf("%d", &base);

    printf("Informe o valor da Altura do Retângulo: ");
    scanf("%d", &altura);

    int area = base * altura;

    system("clear");
    printf("Base: %d\nAltura: %d\n\nÁrea do Retângulo: %d\n\n", base, altura, area);

    return 0;
}
