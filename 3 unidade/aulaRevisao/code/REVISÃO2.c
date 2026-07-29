#include <stdio.h>

typedef struct produto {
    char nome[31];
    float preco;
} tProduto;

int main() {
    FILE *arq;
    tProduto p;
    float valor;
    int qtd = 0;

    arq = fopen("produtos.txt", "r");

    if(arq == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    printf("LISTA DE PRODUTOS\n");
    printf("-------------------------------\n");
    printf("%-30s %s\n", "NOME", "PRECO");
    printf("-------------------------------\n");

    while(!feof(arq)) {
        if(fscanf(arq, "%30s %f", p.nome, &p.preco) == 2) {
            printf("%-30s %.2f\n", p.nome, p.preco);
        }
    }

    fclose(arq);

    printf("\nInforme um valor de preco: ");
    scanf("%f", &valor);

    arq = fopen("produtos.txt", "r");

    if(arq == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    printf("\nPRODUTOS COM PRECO <= %.2f\n", valor);
    printf("-------------------------------\n");

    while(!feof(arq)) {
        if(fscanf(arq, "%30s %f", p.nome, &p.preco) == 2) {
            if(p.preco <= valor) {
                printf("%-30s %.2f\n", p.nome, p.preco);
                qtd++;
            }
        }
    }

    fclose(arq);

    printf("\nQuantidade de produtos encontrados: %d\n", qtd);

    return 0;
}
