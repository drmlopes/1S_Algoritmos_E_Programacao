//
// Created by drmlopes on 11/12/24.
//

/* Escreva um algoritmo que leia o código de um aluno e suas três notas.
Calcule a média ponderada do aluno, considerando que o peso
para a maior nota seja 4 e para as duas restantes, 3.
Mostre o código do aluno, suas três notas, a
média calculada e a mensagem "APROVADO" se a média for maior ou igual a 5 e "REPROVADO" caso contrário. */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    system("clear");
    int codigo;
    float nota1, nota2, nota3, mediaPonderada = 0;

    printf("Informe o Código do Aluno: ");
    scanf("%d", &codigo);

    printf("\nInforme a Nota 1: ");
    scanf("%f", &nota1);

    printf("Informe a Nota 2: ");
    scanf("%f", &nota2);

    printf("Informe a Nota 3: ");
    scanf("%f", &nota3);

    if (nota1 >= nota2 && nota1 >= nota3)
        mediaPonderada = ((nota1 * 4) + (nota2 * 3) + (nota3 * 3)) / 10;
    else if (nota2 >= nota1 && nota2 >= nota3)
        mediaPonderada = ((nota1 * 3) + (nota2 * 4) + (nota3 * 3)) / 10;
    else if (nota3 >= nota1 && nota3 >= nota2)
        mediaPonderada = ((nota1 * 3) + (nota2 * 3) + (nota3 * 4)) / 10;

    system("clear");
    printf("Código do Aluno: %d\n\nNota 1: %.2f\nNota 2: %.2f\nNota 3: %.2f\n\nMédia Ponderada: %.2f\n\nSituação: ",
           codigo, nota1,
           nota2, nota3, mediaPonderada);

    if (mediaPonderada >= 5)
        printf("Aprovado.\n\n");
    else
        printf("Reprovado!\a\n\n");

    return 0;
}
