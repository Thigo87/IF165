#include <stdio.h>
#include <ctype.h>

typedef struct jogo {
    char nome[100];
    char plataforma[50];
} Jogo;

void exibirJogos(FILE* f) {
    
}

int main() {
    FILE* f;
    Jogo jogo;
    f = fopen("jogos.txt", "r");
    char letra;
    int qtd = 0;
    if (f == NULL) {
        printf("Erro ao abrir o arquivo.\n");
    } else {
        printf("--------------------------------------------\n");
        printf("\t JOGOS CADASTRADOS\n");
        printf("--------------------------------------------\n");
        printf("%-30s %s\n", "NOME", "PLATAFORMA");

        while (!feof(f)) {
            if (fscanf(f, " %30s %30s", jogo.nome, jogo.plataforma) == 2) {
                printf("%-30s %s\n", jogo.nome, jogo.plataforma);
            }
        }
        printf("--------------------------------------------\n");


    }

    printf("Digite uma letra: ");
    scanf(" %c", &letra);
    letra = toupper(letra);

    rewind(f);
    

    if (f == NULL) {
        printf("Erro ao abrir o arquivo.\n");
    } else {
        printf("--------------------------------------------\n");
        printf("\tJOGOS ENCONTRADOS COM A LETRA %c\n", letra);
        printf("--------------------------------------------\n");
        printf("%-30s %s\n", "NOME", "PLATAFORMA");

        while (!feof(f)) {
            if (fscanf(f, " %30s %30s", jogo.nome, jogo.plataforma) == 2) {
                if (toupper(jogo.nome[0]) == letra) {
                    printf("%-30s %s\n", jogo.nome, jogo.plataforma);
                    qtd++;
                }
            }
        }
        printf("--------------------------------------------\n");
        if (qtd == 0) {
            printf("Nenhum jogo encontrado com a letra %c.\n", letra);
        } else {
            printf("Total de jogos encontrados: %d\n", qtd);
        }

        printf("--------------------------------------------\n");

    }


    return 0;
}