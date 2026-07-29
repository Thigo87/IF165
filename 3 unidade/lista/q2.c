#include <stdio.h>

typedef struct disciplina {
    char nome[50];
    int carga_horaria;
} Disciplina;

int main() {
    Disciplina disciplinas[5];
    int i;

    for (i = 0; i < 5; i++) {
        printf("Digite o nome da disciplina %d: ", i + 1);
        scanf(" %[^\n]", disciplinas[i].nome);
        printf("Digite a carga horaria da disciplina %d: ", i + 1);
        scanf("%d", &disciplinas[i].carga_horaria);
    }

    printf("---------------------------------------------------------\n");
    printf("\t\tDISCIPLINAS CADASTRADAS\n");
    printf("---------------------------------------------------------\n");

    for (i = 0; i < 5; i++) {
        printf("%d\t |\t %s\t |\t %d horas\n", i + 1, disciplinas[i].nome, disciplinas[i].carga_horaria);
    }

    printf("---------------------------------------------------------\n");

    return 0;

}