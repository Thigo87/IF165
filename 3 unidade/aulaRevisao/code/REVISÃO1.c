#include <stdio.h>

typedef struct produto {
    char nome[31];
    float preco;
} tProduto;

void LerProdutos(tProduto produtos[]) {
    int i;

    for(i = 0; i < 3; i++) {
        printf("Produto %d\n", i + 1);

        printf("Nome: ");
        scanf(" %[^\n]", produtos[i].nome);

        printf("Preco: ");
        scanf("%f", &produtos[i].preco);
    }
}

void GravarProdutos(tProduto produtos[]) {
    FILE *arq;
    int i;

    arq = fopen("produtos.txt", "w");

    if(arq == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return;
    }

    for(i = 0; i < 3; i++) {
        fprintf(arq, "%s\t%.2f\n", produtos[i].nome, produtos[i].preco);
    }

    fclose(arq);
}

int main() {
    tProduto produtos[8];

    LerProdutos(produtos);
    GravarProdutos(produtos);

    printf("Dados gravados com sucesso em produtos.txt\n");

    return 0;
}

