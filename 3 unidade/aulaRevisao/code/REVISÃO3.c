#include <stdio.h>

typedef struct aluno {
    char nome[21];
    float nota;
} tAluno;

void LerAlunos(tAluno alunos[]) {
    int i;

    for(i = 0; i < 3; i++) {
        printf("Aluno %d\n", i + 1);
        printf("Nome: ");
        scanf(" %20[^\n]", alunos[i].nome);
        printf("Nota: ");
        scanf("%f", &alunos[i].nota);
    }
}

float CalcularMedia(tAluno alunos[]) {
    int i;
    float soma = 0;

    for(i = 0; i < 3; i++) {
        soma = soma + alunos[i].nota;
    }

    return soma / i;
}

int main() {
    tAluno alunos[3];
    int i;
    float media;

    LerAlunos(alunos);

    media = CalcularMedia(alunos);

    printf("\nNome\t\tNota\tSituacao\n");

    for(i = 0; i < 3; i++) {
        printf("%s\t\t%.1f\t", alunos[i].nome, alunos[i].nota);

        if(alunos[i].nota >= 7.0)
            printf("Aprovado\n");
        else
            printf("Reprovado\n");
    }

    printf("\nMedia da turma: %.2f\n", media);

    return 0;
}
