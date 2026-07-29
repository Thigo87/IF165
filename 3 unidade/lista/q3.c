#include <stdio.h>

typedef struct musica {
    char titulo[100];
    char artista[100];
} Musica;

int main() {
    Musica musica;
    Musica *p = &musica;
    
    printf("Digite o nome da musica: ");
    scanf(" %[^\n]", p->titulo);

    printf("Digite o nome do artista: ");
    scanf(" %[^\n]", p->artista);

    printf("Musica: %s\n", p->titulo);
    printf("Artista: %s\n", p->artista);

    return 0;
}