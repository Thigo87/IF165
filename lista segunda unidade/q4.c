#include <stdio.h>

int main() {
    int m[4][4], i, j;
    int values[3] = {0, 0, 0};

    printf("Digite a matriz 4x4: \n");

    for(i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            scanf("%d", &m[i][j]);
            if (m[i][j] > values[0]) {
                values[0] = m[i][j];
                values[1] = i;
                values[2] = j;
            }
        }
    }

    printf("O maior elemento e %d e esta na posicao [%d][%d]\n", values[0], values[1], values[2]);

    return 0;


}