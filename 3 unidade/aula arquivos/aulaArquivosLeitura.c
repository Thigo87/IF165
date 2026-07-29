#include <stdio.h>

int main() {
    //Criando um arquivo em branco
    FILE *p;
    int n;

    p = fopen("arquivo.txt", "r");

    if (p == NULL) {
        printf("Erro na criacao!\n");
    } else {
        while (fscanf(p, "%d", &n) == 1) { //Lendo todos os numeros;
            printf("Valor de n: %d\n", n);
        } 
    }

    fclose(p);

    return 0;

}