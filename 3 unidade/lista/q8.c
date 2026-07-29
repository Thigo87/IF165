#include <stdio.h>

typedef struct laboratorio {
    char nome[100];
    int computadores;
} Lab;


int main() {
    FILE* f;
    Lab lab;
    
    f = fopen("laboratorios.txt", "r");

    printf("--------------------------------------------\n");
    printf("\t LABORATORIOS CADASTRADOS\n");
    printf("--------------------------------------------\n");
    printf("%-30s %s\n", "NOME", "COMPUTADORES");

    if (f == NULL) {
        printf("Erro ao abrir o arquivo.\n");
    } else {
        while (!feof(f)) {
            if (fscanf(f, "%s %d", lab.nome, &lab.computadores) == 2) {
                printf("%-30s %d\n", lab.nome, lab.computadores);
            }

        }
    }

    printf("--------------------------------------------\n");

    return 0;

}