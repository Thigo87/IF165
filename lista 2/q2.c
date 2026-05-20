#include <stdio.h>

int main() {
    int peso, semanas;
    float meses;

    printf("Digite o peso do bebe: ");
    scanf("%d", &peso);

    printf("Digite quantas semanas tem o bebe: ");
    scanf("%d", &semanas);

    if (peso < 100 || semanas < 28) {
        printf("O parto nao deve ser realizado, reavaliar clinicamente.");
    } else {
        meses = semanas / 4;

        if (peso > 2500 && meses > 7) {
            printf("Parto normal.");
        } else if (peso > 2500 && meses <= 7) {
            printf("Parto cesariana.");
        } else if ((2000 > peso || peso > 1500) && meses > 9) {
            printf("Parto normal.");
        } else {
            printf("Parto cesariana.");
        }
    }

    return 0;
}