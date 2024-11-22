//
// Created by drmlopes on 22/11/24.
//

/* O custo de um carro novo ao consumidor é a soma do custo de fábrica com a
porcentagem do distribuidor e dos impostos (aplicados ao custo de fábrica). Supondo
que o percentual do distribuidor seja de 28% e os impostos de 45%, escrever um
algoritmo para ler o custo de fábrica de um carro, calcular e escrever o custo final ao
consumidor. */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    system("clear");
    float custoFabrica;

    printf("Informe o valor do Custo de Fábrica do Carro: ");
    scanf("%f", &custoFabrica);

    float distribuidor = (custoFabrica * 28) / 100;
    float imposto = (custoFabrica * 45) / 100;
    float custoFinal = custoFabrica + distribuidor + imposto;

    system("clear");
    printf(
        "O Custo de Fábrica desse Carro é R$ %.2f\n\nDistribuidor = R$ %.2f\nImposto = %.2f\n\nO Custo Final será de R$ %.2f\n\n",
        custoFabrica, distribuidor, imposto, custoFinal);

    return 0;
}
