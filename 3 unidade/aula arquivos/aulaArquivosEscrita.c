#include <stdio.h>

int main() {
    //Criando um arquivo em branco
    FILE *p;

    p = fopen("arquivo.txt", "w");
    if (p == NULL) {
        printf("Erro na criacao!\n");
    } else {
        for (int i = 0; i < 10; i++) {
            fprintf(p, "%d ", i); //Escrevendo vários inteiros no arquivo
        }
    }

    fclose(p);

    return 0;

}