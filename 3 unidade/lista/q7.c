#include <stdio.h>

typedef struct laboratorio {
    char nome[100];
    int computadores;
} Lab;

int main() {
    FILE* f;
    
    Lab labs[5];
    int i;

    for (i = 0; i < 5; i++) {
        printf("Digite o nome do laboratorio: ");
        scanf(" %[^\n]", labs[i].nome);
        printf("Digite o numero de computadores: ");
        scanf("%d", &labs[i].computadores);
    }

    f = fopen("laboratorios.txt", "a+");
    if (f == NULL) {
        printf("Erro ao abrir o arquivo.\n");
    } else {
        for (i = 0; i < 5; i++) {
            fprintf(f, "%s %d\n", labs[i].nome, labs[i].computadores);
        }
        fclose(f);
    }

    return 0;

}