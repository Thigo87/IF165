#include <stdio.h>
#include <math.h>

float f(float x) {
    return pow(x, 3) - x -2;
}

float erro(float a, float b) {
    return fabs(a - b);
}

float media(float a, float b) {
    return (a + b) / 2;
}

int main() {
    int a, b, i, j;
    int iteracoes;
    float erro_atual;
    float display[100][6];
    char header[6][20] = {"Iter", "a", "b", "m", "f(m)", "Erro"};


    printf("Digite o valor de a: ");
    scanf("%d", &a);

    printf("Digite o valor de b: ");
    scanf("%d", &b);

    if (f(a) * f(b) >= 0) {
        return 1;
    }

    iteracoes = 0;

    erro_atual = erro(a, b);

    while ((erro_atual >= 0.001) && (iteracoes <= 100)) {
        if (iteracoes == 0){
            display[iteracoes][0] = iteracoes + 1;
            display[iteracoes][1] = a;
            display[iteracoes][2] = b;
            display[iteracoes][3] = media(a,b);
            display[iteracoes][4] = f(media(a,b));
            display[iteracoes][5] = erro(a, b);

        } else {
            display[iteracoes][0] = iteracoes + 1;
            if (f(media(display[iteracoes - 1][1], display[iteracoes - 1][2])) < 0) {
                display[iteracoes][1] = media(display[iteracoes - 1][1], display[iteracoes - 1][2]);
                display[iteracoes][2] = display[iteracoes - 1][2];

            } else {
                display[iteracoes][1] = display[iteracoes - 1][1];
                display[iteracoes][2] = media(display[iteracoes - 1][1], display[iteracoes - 1][2]);
            }
            display[iteracoes][3] = media(display[iteracoes][1], display[iteracoes][2]);
            display[iteracoes][4] = f(display[iteracoes][3]);
            display[iteracoes][5] = erro(display[iteracoes][1], display[iteracoes][2]);
            erro_atual = display[iteracoes][5];
        }
        iteracoes++;

    }



    for (i = 0; i < 6; i++) {
        printf("%s\t\t", header[i]);
    }

    printf("\n");
    
    for (i = 0; i < iteracoes; i++) {
        for (j = 0; j < 6; j++) {
            j == 0 ? printf("%d\t", (int)display[i][j]) : printf("\t%f", display[i][j]);
        }
        printf("\n");
    }

    printf("Raiz aproximada: %f\n", display[iteracoes - 1][3]);
    printf("Iteracoes: %d\n", iteracoes);


    return 0;
}