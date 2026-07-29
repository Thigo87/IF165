#include <stdio.h>

typedef struct serie {
    char titulo[100];
    int temporadas;
} Serie;

int main() {
    Serie serie;

    printf("Digite o titulo da serie: ");
    scanf(" %[^\n]", serie.titulo);
    printf("Digite o numero de temporadas: ");
    scanf("%d", &serie.temporadas);

    printf("Serie: %s\n", serie.titulo);
    printf("Temporadas: %d\n", serie.temporadas);

    return 0;
}