//
// Created by drmlopes on 23/11/24.
//

/* Faça um algoritmo que leia três notas de um aluno, calcule e escreva a média final
deste aluno. Considerar que a média é ponderada e que o peso das notas é 2, 3 e 5.
Fórmula para o cálculo da média final é: MédiaFinal = ((N1 * 2) + (N2 * 3) + (N3 * 5)) / 10 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    system("clear");
    float nota1, nota2, nota3;

    printf("Informe o valor da Nota 1: ");
    scanf("%f", &nota1);

    printf("Informe o valor da Nota 2: ");
    scanf("%f", &nota2);

    printf("Informe o valor da Nota 3: ");
    scanf("%f", &nota3);

    float mediaFinal = (nota1 * 2 + nota2 * 3 + nota3 * 5) / 10;

    system("clear");
    printf("Nota 1: %.2f\nNota 2: %.2f\nNota 3: %.2f\n\nMédia Final: %.2f\n\n", nota1, nota2, nota3, mediaFinal);

    return 0;
}
