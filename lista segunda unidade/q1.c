#include <stdio.h>

int matriz(int n) {
    int m[n][n], i, j;


    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i >= j) {
                m[i][j] = j + 1;
            } else {
                m[i][j] = 0;
            }
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (m[i][j] != 0) {
                printf("%d ", m[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}


int main() {
    int n;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    matriz(n);

    return 0;
}