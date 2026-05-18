#include <stdio.h>

int busca(int v[], int n) {
    int i;

    for (i = 0; i < 10; i++) {
        if (v[i] == n) {
            return 0;
        }
    }

    return 1;

}

int main() {
    int v[10], i, num;

    printf("Digite 10 numeros: \n");

    for (i = 0; i < 10; i++) {
        scanf("%d", &v[i]);
    }

    printf("Digite um numero para buscar: \n");
    scanf("%d", &num);

    if (busca(v, num) == 0) {
        printf("ACHEI\n");
    } else {
        printf("NAO ACHEI\n");
    }

    return 0;
}