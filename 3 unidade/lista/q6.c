#include <stdio.h>
#include <string.h>

int main() {
    FILE* f;
    char local[100];
    char pais[100];

    while (1) {
        printf("Digite o nome do destino ou '#' para sair: ");
        scanf(" %[^\n]", local);
        if (strcmp(local, "#") == 0) {
            break;
        }

        printf("Digite o nome do pais: ");
        scanf(" %[^\n]", pais);

        strcat(local, " ");
        strcat(local, pais);
        printf("Destino completo: %s\n", local);

        f = fopen("destinos.txt", "a+");
        if (f == NULL) {
            printf("Erro ao abrir o arquivo.\n");
        } else {
            fprintf(f, "%s\n", local);
            fclose(f);
        }

    }

    return 0;
}
