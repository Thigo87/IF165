#include <stdio.h>

int main() {
    int n, c, d, u;

    printf("Digite um numero entre 0 e 999: ");
    scanf("%d", &n);

    c = n / 100;
    d = (n % 100) / 10;
    u = n % 10;

    printf("O numero tem %d centena(s), %d dezena(s) e %d unidade(s).\n", c, d, u);

    return 0;
}