#include <stdio.h>

int main() {
    int x;
    FILE* p = fopen("novoArquivo.txt", "r+"); //w+ vai apagar tudo, r+ não apaga e escreve no início, a+ não apaga e escreve no final do arquivo

    if (p == NULL) {
        printf("Erro\n");
    } else {
        x = 3;
        fprintf(p, "%d\n", x);
        x = 4;
        fprintf(p, "%d\n", x);
        rewind(p); //Volta o ponteiro do arquivo para o início

        while (fscanf(p, "%d", &x) == 1) {
            printf("%d\n", x);
        }
    }

    fclose(p);

    return 0;
}