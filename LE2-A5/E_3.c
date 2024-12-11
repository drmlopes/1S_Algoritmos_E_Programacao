//
// Created by drmlopes on 11/12/24.
//

/* Escrever um algoritmo que leia uma nota e
mostre o conceito equivalente. Suponha a
seguinte tabela de conversão.
Nota                    Conceito
de 0.0 até 5.0              D
Acima de 5.0 até 7.0        C
Acima de 7.0 até 9.0        B
Acima de 9.0 até 10.0       A */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    system("clear");
    float nota;

    printf("Informe o Valor da Nota: ");
    scanf("%f", &nota);

    system("clear");
    if (nota < 0 || nota > 10)
        printf("Nota Inválida!\a\n\n");
    else if (nota >= 0 && nota <= 5)
        printf("Nota: %.2f\nConceito: D\n\n", nota);
    else if (nota <= 7)
        printf("Nota: %.2f\nConceito: C\n\n", nota);
    else if (nota <= 9)
        printf("Nota: %.2f\nConceito: B\n\n", nota);
    else
        printf("Nota: %.2f\nConceito: A\n\n", nota);

    return 0;
}
