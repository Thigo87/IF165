#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef struct pessoa {
    char nome[21];
    int idade;
} tPessoa;

void LerPessoas(tPessoa pessoas[]) {
    int i;
    for(i = 0; i < 3; i++) {
        printf("Pessoa %d\n", i + 1);
        printf("Nome: ");
        scanf(" %20[^\n]", pessoas[i].nome);
        printf("Idade: ");
        scanf("%d", &pessoas[i].idade);
    }
}

int main() {
    tPessoa pessoas[3];
    int i;
    int qtdVogal = 0;
    int qtdMaiuscula = 0;
    int qtdMinuscula = 0;
    char maiorNome[21];

    LerPessoas(pessoas);

    strcpy(maiorNome, pessoas[0].nome);

    for(i = 0; i < 3; i++) {

        if(toupper(pessoas[i].nome[0]) == 'A' ||
           toupper(pessoas[i].nome[0]) == 'E' ||
           toupper(pessoas[i].nome[0]) == 'I' ||
           toupper(pessoas[i].nome[0]) == 'O' ||
           toupper(pessoas[i].nome[0]) == 'U')
        {
            qtdVogal++;
        }

        if(strlen(pessoas[i].nome) > 5) {
            printf("Nome com mais de 5 caracteres: %s\n",
                   pessoas[i].nome);
        }

        if(strlen(pessoas[i].nome) > strlen(maiorNome)) {
            strcpy(maiorNome, pessoas[i].nome);
        }

        if(isupper(pessoas[i].nome[0])) {
            qtdMaiuscula++;
        }

        if(islower(pessoas[i].nome[0])) {
            qtdMinuscula++;
        }
    }

    printf("\nQuantidade de nomes iniciados por vogal: %d\n",
           qtdVogal);

    printf("Maior nome digitado: %s\n", maiorNome);

    printf("Quantidade de nomes iniciados por letra maiuscula: %d\n",
           qtdMaiuscula);

    printf("Quantidade de nomes iniciados por letra minuscula: %d\n",
           qtdMinuscula);

    return 0;
}
