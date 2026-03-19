#include <stdio.h>

int main() {
    int saque, notas100, notas50, notas20, notas10, notas5, notas1;

    printf("Digite o valor do saque (entre 10 e 600): ");
    scanf("%d", &saque);
    if (10 <= saque && saque <= 600) {
        notas100 = saque / 100;
        saque = saque % 100;
        notas50 = saque / 50;
        saque = saque % 50;
        notas20 = saque / 20;
        saque = saque % 20;
        notas10 = saque / 10;
        saque = saque % 10;
        notas5 = saque / 5;
        notas1 = saque % 5;

        printf("Serao fornecidas %d notas de 100, %d notas de 50, %d notas de 20, %d notas de 10, %d notas de 5 e %d notas de 1.\n",
            notas100, notas50, notas20, notas10, notas5, notas1);
        } else {
            printf("O saque deve ser entre 10 e 600 reais.\n");
        }
    
    return 0;
}