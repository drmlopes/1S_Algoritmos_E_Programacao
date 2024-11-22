//
// Created by drmlopes on 22/11/24.
//

/* Escreva um algoritmo para ler o número total de eleitores de um município, o
número de votos brancos, nulos e válidos. Calcular e escrever o percentual que cada um
representa em relação ao total de eleitores. */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    system("clear");
    int totalEleitores, votosBrancos, votosNulos, votosValidos;

    printf("Informe o número Total de Eleitores: ");
    scanf("%d", &totalEleitores);

    printf("Informe o número de Votos Brancos: ");
    scanf("%d", &votosBrancos);

    printf("Informe o número de Votos Nulos: ");
    scanf("%d", &votosNulos);

    printf("Informe o número de Votos Válidos: ");
    scanf("%d", &votosValidos);

    int pVB = (votosBrancos * 100) / totalEleitores;
    int pVN = (votosNulos * 100) / totalEleitores;
    int pVV = (votosValidos * 100) / totalEleitores;

    system("clear");
    printf("Total de Eleitores: %d\n\nVotos Brancos: %d = %d%%\nVotos Nulos: %d = %d%%\nVotos Válidos: %d = %d%%\n\n",
           totalEleitores, votosBrancos, pVB, votosNulos, pVN, votosValidos, pVV);

    return 0;
}
