#include <stdio.h>

int main() {
    float salarioB, horas, vHoras, descontos, salarioL, vHora;

    printf("Digite o seu salario: ");
    scanf("%f", &salarioB);

    printf("Digite as suas horas extras: ");
    scanf("%f", &horas);

    vHora = (float) 1.50 * (salarioB / 160.0);
    vHoras = (float) horas * vHora;

    if (horas > 20.0) {
        vHoras += salarioB * 0.05;
    }

    descontos = (float) salarioB * 0.08;

    if (salarioB <= 3000.0) {
        descontos += salarioB * 0.05;
    } else {
        descontos += salarioB * 0.10;
    }

    salarioL = (salarioB + vHoras) - descontos;

    printf("O valor do salario liquido e: %.2f", salarioL);

    return 0;


}