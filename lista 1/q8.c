#include <stdio.h>
#include <math.h>

int main() {
    char combustivel;
    float volume, total;

    printf("Tipo de combustivel (A - alcool e G - gasolina): ");
    scanf(" %c", &combustivel);

    printf("Quantos litros foram abastecidos? ");
    scanf("%f", &volume);

    if (combustivel == 'A' || combustivel == 'a') {
        if (volume <= 20) {
            total = volume * 1.90 * 0.97;
        } else {
            total = volume * 1.90 * 0.95;
        }
        printf("Valor total a pagar: RS %.2f\n", total);
    } else if (combustivel == 'G' || combustivel == 'g') {
        if (volume <= 20) {
            total = volume * 1.90 * 0.96;
        } else {
            total = volume * 1.90 * 0.94;
        }
        printf("Valor total a pagar: RS %.2f\n", total);
    } else {
        printf("Tipo de combustivel invalido. \n");
    }

    return 0;
}