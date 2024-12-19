//
// Created by drmlopes on 19/12/24.
//

/* Faça um algoritmo para calcular o fatorial de um número. */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    system("clear");
    int numero;

    printf("Informe um Número Inteiro: ");
    scanf("%d", &numero);

    int fatorial = numero;

    if (numero > 0) {
        for (int i = numero - 1; i != 0; i--) {
            fatorial *= i;
        }
        printf("\nFatorial: %d\n\n", fatorial);
    }
    else if (numero < 0) {
        system("clear");
        printf("Não é possível calcular o Fatorial do número: %d\a\n\n", numero);
    }
    else {
        fatorial = 1;

        printf("\nFatorial: %d\n\n", fatorial);
    }

    return 0;
}
