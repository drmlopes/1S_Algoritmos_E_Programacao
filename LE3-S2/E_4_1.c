//
// Created by drmlopes on 11/12/24.
//

/* Escreva um algoritmo para ler as notas da 1a e 2a avaliações de um aluno, calcular a média e escrever
se este aluno foi APROVADO, REPROVADO ou se está em EXAME. Escrever também a média
calculada. OBS: Para ter direito ao exame o aluno deve obter média mínima 3.0. */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    system("clear");
    float nota1, nota2;

    printf("Informe o Valor da Nota 1: ");
    scanf("%f", &nota1);

    printf("Informe o Valor da Nota 2: ");
    scanf("%f", &nota2);

    float media = (nota1 + nota2) / 2;

    system("clear");
    printf("Nota 1: %.2f\nNota 2: %.2f\n\nMédia: %.2f\n\nSituação: ", nota1, nota2, media);

    if (media >= 7 && media <= 10)
        printf("Aprovado.\n\n");
    else if (media >= 3 && media < 7)
        printf("Exame.\n\n");
    else
        printf("Reprovado!\a\n\n");

    return 0;
}
