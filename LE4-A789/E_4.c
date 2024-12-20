//
// Created by drmlopes on 19/12/24.
//

/* Ler um valor inteiro (aceitar somente valores entre 1 e 10) e escrever a tabuada
de 10 a 1 do valor lido. */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    system("clear");
    int numero;

    printf("Informe um Número Inteiro: ");
    scanf("%d", &numero);

    while (numero < 1 || numero > 10) {
        system("clear");
        printf("Erro - O valor informado não é válido!\a\n\n");

        printf("Informe um Número Inteiro: ");
        scanf("%d", &numero);
    }
    system("clear");
    printf("Tabuada do %d\n\n", numero);

    for (int i = 10; i >= 1; i--) {
        printf("%d x %d = %d\n", i, numero, numero * i);
    }
    printf("\n");

    return 0;
}
