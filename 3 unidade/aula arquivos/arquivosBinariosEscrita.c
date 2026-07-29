#include <stdio.h>

typedef struct ponto { float x, y; } Ponto;

int main() {
    Ponto vetor[3] = {{1.0, 2.0},{3.0, 4.0},{5.0, 6.0}};
    int i;

    FILE* p;
    
    p = fopen("arquivo_vetor.bin", "wb");
    if (p == NULL) {
        printf("Erro ao criar arquivo \n");
    } else {
        fwrite(vetor, sizeof(Ponto), 3, p); //Escreve o valor de vetor no arquivo binário
    }
    fclose(p);

    return 0;
}