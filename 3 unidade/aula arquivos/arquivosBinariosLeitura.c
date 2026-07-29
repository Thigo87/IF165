#include <stdio.h>

typedef struct ponto { float x, y; } Ponto;

int main() {
    Ponto pto;

    FILE* p;

    p = fopen("arquivo_vetor.bin", "rb");

    if (p == NULL) {
        printf("Erro ao abrir arquivo \n");
    } else {
        while (fread(&pto, sizeof(pto), 1, p) == 1) { //Lê o valor do arquivo binário e armazena em pto
            printf("Ponto: (%.2f, %.2f)\n", pto.x, pto.y);
        }

        rewind(p); //Volta o ponteiro do arquivo para o início
        printf("\nLendo novamente o arquivo:\n");

        while (fread(&pto, sizeof(pto), 1, p) == 1) { //Lê o valor do arquivo binário e armazena em pto
            printf("Ponto: (%.2f, %.2f)\n", pto.x, pto.y);
        }
    }
    fclose(p);
    return 0;
}