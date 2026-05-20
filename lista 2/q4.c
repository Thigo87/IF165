#include <stdio.h>
#include <math.h>

int main() {
    char opcao;
    float pi = 22.0/7.0;
    float raio, base, altura, lado;

    printf("[C] - Calcular area do circulo\n[Q] - Calcular area do quadrado\n");
    printf("[T] - Calcular area do triangulo\n[S] - Encerrar programa\n");
    scanf(" %c", &opcao);

    if (opcao == 'C' || opcao == 'c') {
        printf("Digite o raio do circulo: ");
        scanf("%f", &raio);
        printf("A area do circulo e: %.2f", pi * (float) pow(raio, 2));
    } else if (opcao == 'Q' || opcao == 'q') {
        printf("Digite o lado do quadrado: ");
        scanf("%f", &lado);
        printf("A area do quadrado e: %.2f", (float) pow(lado, 2));
    } else if (opcao == 'T' || opcao == 't') {
        printf("Digite a base do triangulo: ");
        scanf("%f", &base);
        printf("Digite a altura do triangulo: ");
        scanf("%f", &altura);
        printf("A area do triangulo e: %.2f", (base * altura) / 2);
    } else if (opcao == 'S' || opcao == 's') {
        printf("O programa esta sendo encerrado…");
    } else {
        printf("Opcao invalida!");
    }

    return 0;
}