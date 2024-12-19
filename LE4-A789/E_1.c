//
// Created by drmlopes on 19/12/24.
//

/* Escreva um algoritmo para repetir a leitura de um número enquanto o valor
fornecido for diferente de 0. Para cada número fornecido, imprimir se ele é
NEGATIVO ou POSITIVO. Quando o número 0 for fornecido a repetição deve
ser encerrada sem imprimir mensagem alguma. */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    system("clear");
    float numero;

    do {
        printf("Informe um Número: ");
        scanf("%f", &numero);

        system("clear");
        if (numero > 0)
            printf("%.2f é um número Positivo.\n\n", numero);
        else if (numero < 0)
            printf("%.2f é um número Negativo.\n\n", numero);
    }
    while (numero != 0);

    return 0;
}
