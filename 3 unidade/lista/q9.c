#include <stdio.h>
#include <ctype.h>

int main() {
    char cidades[10][20] = {
        "Sao Paulo",
        "Rio de Janeiro",
        "Belo Horizonte",
        "Curitiba",
        "Porto Alegre",
        "Salvador",
        "Fortaleza",
        "Recife",
        "Brasilia",
        "Manaus"
    };
    char letra;
    int i;

    printf("Digite uma letra: ");
    scanf(" %c", &letra);

    letra = toupper(letra);

    printf("Cidades que comecam com a letra '%c': \n", letra);
    for (i = 0; i < 10; i++) {
        if (toupper(cidades[i][0]) == letra) {
            printf("%s\n", cidades[i]);
        }
    }

    return 0;

}