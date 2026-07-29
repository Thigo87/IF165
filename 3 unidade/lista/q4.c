#include <stdio.h>

typedef struct funcionario {
    char nome[50];
    char setor[50];
} Func;

int main() {
    Func funcionarios[5] = {
        {"Joao", "Financeiro"},
        {"Maria", "Recursos Humanos"},
        {"Pedro", "TI"},
        {"Ana", "Marketing"},
        {"Lucas", "Vendas"}
    };
    Func *p = funcionarios;
    int i;

    for (i = 0; i < 5; i++) {
        printf("Funcionario: %s\n", p->nome);
        printf("Setor: %s\n", p->setor);
        p++;
    }

    return 0;

}