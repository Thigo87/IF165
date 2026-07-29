#include <stdio.h>

typedef struct produto { //tipo estruturado (estrutura)
    char nome[31];
    float preco;
} tProduto;

int main() {
    FILE* arq;
    tProduto p;
    float valor;
    int qtd = 0;

    arq = fopen("produtos.txt", "r");
    if (arq == NULL) {
        printf("Erro ao abrir o arquivo!");
    } else {
        printf("------------------------------------\n");
        printf("%-30s %s\n", "NOME", "PRECO");
        printf("------------------------------------\n");

        while(!feof(arq)) {
            if (fscanf(arq, "%30s %f", p.nome, &p.preco) == 2) {
                printf("%-30s %.2f\n", p.nome, p.preco);
        }
    }
        printf("------------------------------------\n");
        fclose(arq);
    }

    arq = fopen("produtos.txt", "r");
    if (arq == NULL) {
        printf("Erro ao abrir o arquivo!");
    } else {
        printf("Informe um preco: ");
        scanf("%f", &valor);

        printf("------------------------------------\n");
        printf("PRODUTOS COM VALOR <= %.2f\n", valor);
        printf("------------------------------------\n");

        while(!feof(arq)) {
            if (fscanf(arq, "%30s %f", p.nome, &p.preco) == 2) {
                if ((p.preco <= valor)) {
                    printf("%-30s %.2f\n", p.nome, p.preco);
                    qtd++;
                }
            }
        }

        printf("------------------------------------\n");
        printf("Total de produtos: %d\n", qtd);
    }
}