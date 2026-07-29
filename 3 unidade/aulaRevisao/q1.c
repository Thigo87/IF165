#include <stdio.h>

typedef struct produto { //tipo estruturado (estrutura)
    char nome[31];
    float preco;
} tProduto;

void LerProdutos(tProduto produtos[]) {
    int i;
    for (i = 0; i < 8; i++){
        printf("Produto %d\n", i+1);
        printf("Nome: ");
        scanf(" %[^\n]", produtos[i].nome);
        printf("Preco: ");
        scanf("%f", &produtos[i].preco);
    }
}

void SalvarProdutos(tProduto produtos[]){
    FILE* arq;

    arq = fopen("produtos.txt", "w");

    if (arq == NULL) {
        printf("Erro ao abrir");
    } else {
        int i;
        for (i = 0; i < 8; i++) {
            fprintf(arq, "%s\t %.2f\n", produtos[i].nome, produtos[i].preco);
        }
        printf("Produtos salvos com sucesso no arquivo produtos.txt!\n");
        fclose(arq);
    }
}

int main() {
    tProduto produtos[8];
    
    LerProdutos(produtos);

    SalvarProdutos(produtos);

    return 0;
}