#include <stdio.h>

float valor_pagamento(float prestacao, int dias_atraso) {
    if (dias_atraso == 0) {
        return prestacao;
    } else {
        return prestacao + (prestacao * 0.03) + (prestacao * 0.001 * dias_atraso);
    }
}

int main() {
    float prestacao, total_pago = 0;
    int dias_atraso, num_prestacoes = 0;

    while (1) {
        printf("Digite o valor da prestacao: ");
        scanf("%f", &prestacao);

        if (prestacao == 0) {
            break;
        }

        printf("Digite o numero de dias em atraso: ");
        scanf("%d", &dias_atraso);

        total_pago += valor_pagamento(prestacao, dias_atraso);
        num_prestacoes++;

    }

    printf("Valor total pago: %.2f\n", total_pago);
    printf("Numero de prestacoes: %d\n", num_prestacoes); 

    return 0;
}