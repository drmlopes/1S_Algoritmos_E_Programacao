//
// Created by drmlopes on 11/12/24.
//

/* Elabore um algoritmo que, dada a idade de um
nadador classifica-o em uma das seguintes categorias:
infantil A = 5 ‐ 7 anos
infantil B = 8 ‐ 10 anos
juvenil A = 11 ‐ 13 anos
juvenil B = 14 ‐ 17 anos
adulto = maiores de 18 anos */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    system("clear");
    int idade;

    printf("Informe a Idade do Nadador: ");
    scanf("%d", &idade);

    system("clear");
    if (idade < 5)
        printf("Idade Inválida!\a\n\n");
    else if (idade >= 5 && idade <= 7)
        printf("Idade: %d\n\nCategoria: Infantil A\n\n", idade);
    else if (idade <= 10)
        printf("Idade: %d\n\nCategoria: Infantil B\n\n", idade);
    else if (idade <= 13)
        printf("Idade: %d\n\nCategoria: Juvenil A\n\n", idade);
    else if (idade <= 17)
        printf("Idade: %d\n\nCategoria: Juvenil B\n\n", idade);
    else
        printf("Idade: %d\n\nCategoria: Adulto\n\n", idade);

    return 0;
}
