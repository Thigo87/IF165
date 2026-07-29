#include <stdio.h>
#include <string.h>

int main() {
    char p1[100], p2[100];
    int tamanho, i, j, comp;
    
    printf("Digite uma palavra: ");

    fflush(stdin);
    fgets(p1, 100, stdin);
    fflush(stdin);


    tamanho = strlen(p1);

    if (p1[tamanho - 1] == '\n') {
        p1[tamanho - 1] = '\0';
    }

    tamanho = strlen(p1);

    for (i = tamanho - 1, j = 0; i >= 0 && j < tamanho; i--, j++) {
        p2[j] = p1[i];
    }

    p2[j] = '\0';

    printf("A palavra original e: %s\n", p1);

    printf("A palavra invertida e: %s\n", p2);

    comp = strcmp(p1,p2);

    if (comp == 0) {
        printf("A palavra e um palindromo.\n");
    } else {
        printf("A palavra nao e um palindromo.\n");
    }

    return 0;
}