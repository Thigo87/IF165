#include <stdio.h>

void matriz(int n) {
    int i, j;
    char m[5][n];
    
    m[0][0] = '*';

    for (i = 0; i < 5; i++) {
        for (j = 0; j < n; j++) {
            if (j != n) {
                if (m[i][j - 1] == '*') {
                    m[i][j] = '_';
                } else {
                    m[i][j] = '*';
                }
            } else {
                if (m[i - 1][n] == '*') {
                    m[i][j] = '_';
                } else {
                    m[i][j] = '*';
                }

            }
        }
    }

    for (i = 0; i < 5; i++) {
        for (j = 0; j < n; j++) {
            printf("%c ", m[i][j]);
        }
        printf("\n");
    }


}


int main() {
    int n;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    matriz(n);

    return 0;
}