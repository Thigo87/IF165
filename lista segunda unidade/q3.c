#include <stdio.h>
#include <math.h>

int main() {
    int pot, i, f, j, div, k, zero, negativo;
    pot = 0;
    j = 0;
    f = 0;
    negativo = 0;

    printf("Digite um numero para ser invertido: ");
    scanf("%d", &i);

    if (i < 0) {
        i = i * -1;
        negativo = 1;
    }

    while (j == 0) {
        div = i / pow(10, pot);
        if (div < 10) {
            j = div;
        } else {
            pot++;
        }
    }

    int num[pot];

    j = 0;

    for (k = pow(10, pot); k > 0; k = k / 10) {
        num[j] = i / k;
        i = i % k;
        j++;
    }

    for (k = j - 1; k >= 0; k--) {
        if (num[k] != 0) {
            num[k] = (int)(num[k] * pow(10, k));
        } else {
            num[k] = num[k + 1] + (int)(num[k - 1] * pow(10, k - 1));
            zero = k;
        }
    }

    for (k = j - 1; k >= 0; k--) {
        if (k != zero - 1 && k != zero + 1) {
            f = f + num[k];
        }
    }

    if (negativo == 1) {
        f = f * -1;
    }

    printf("O numero invertido e: %d", f);


    return 0;
}