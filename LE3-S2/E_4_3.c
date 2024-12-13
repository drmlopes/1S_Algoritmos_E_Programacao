//
// Created by drmlopes on 12/12/24.
//

/* Escreva um algoritmo para ler o número de lados de um polígono regular, e a medida do lado(a
medida do lado só deve ser lida para polígono com 3 ou 4 lados). Calcular e imprimir o seguinte:
Se o número de lados for igual a 3 escrever TRIÂNGULO e o valor do seu perímetro.
Se o número de lados for igual a 4 escrever QUADRADO e o valor da sua área.
Se o número de lados for igual a 5 escrever PENTÁGONO.
OBS: Considere que o usuário só informará os valores 3,4 ou 5. */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    system("clear");
    int lados;

    printf("Informe o Número de Lados do Polígono Regular: ");
    scanf("%d", &lados);

    if (lados == 3 || lados == 4) {
        float medida;

        printf("Informe o Valor da Medida de cada Lado: ");
        scanf("%f", &medida);

        system("clear");
        if (lados == 3) {
            float perimetro = (float)lados * medida;

            printf("Triângulo\n\nLados: %d\nMedida: %.2f\n\nPerímetro: %.2f\n\n", lados, medida, perimetro);
        }
        else if (lados == 4) {
            float area = medida * medida;

            printf("Quadrado\n\nLados: %d\nMedida: %.2f\n\nÁrea: %.2f\n\n", lados, medida, area);
        }
    }
    else if (lados == 5) {
        system("clear");
        printf("Pentágono\n\nLados: %d\n\n", lados);
    }
    else {
        system("clear");
        printf("Valor Inválido!\a\n\n");
    }

    return 0;
}
