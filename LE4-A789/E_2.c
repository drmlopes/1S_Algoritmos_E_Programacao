//
// Created by drmlopes on 19/12/24.
//

/* Faça um algoritmo que gera e escreve os números ímpares entre 100 e 200.
Utilize a função resto para verificar se o número é impar. */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    system("clear");

    for (int i = 100; i <= 200; i++) {
        if (i % 2 == 1)
            printf("%d\n", i);
    }
    printf("\n");

    return 0;
}
