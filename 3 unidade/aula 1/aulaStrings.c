#include <stdio.h>
#include <string.h> //biblioteca para manipulação de strings

int main() {
    char n[10], m[10];
    int tamanho, i;


    printf("Digite o seu nome: ");
    fflush(stdin);
    fgets(n, 10, stdin); //input da string, também pode usar o scanf("%9[^\n]", n); 
    fflush(stdin);
    printf("O seu nome e: %s", n);

    tamanho = strlen(n); //tamanho da string, o valor será o tamanho do nome + 1, pois no fim da string temos um /0 que é o final da string;

    printf("O tamanho da string e: %d\n", tamanho);
    printf("O tamanho do nome e: %d\n", tamanho - 1);

    for (i = 0; i < tamanho - 1; i++) { //printando cada caracter;
        printf("%c\n", n[i]);
    }

    printf("%d\n", strcmp("A", "B")); // Retorna -1 pois A vem antes de B
    printf("%d\n", strcmp("B", "B")); // Retorna 0 pois as strings são iguais
    printf("%d\n", strcmp("B", "A")); // Retorna 1 pois B vem depois de A

    printf("Digite o novo nome: ");
    fflush(stdin);
    fgets(m, 10, stdin);
    fflush(stdin);

    char nickname[12]; 

    strcpy(nickname, n);

    strcat(nickname, "01"); // concatena a string "01" ao final da string n. Importante que o tamanho de n seja suficiente para armazenar a nova string.

    printf("Nickname: %s\n", nickname);

    strcpy(n, m); // o valor de m é o novo valor de n. Importante que sejam de tamanhos iguais.
    printf("O nome atualizado e: %s", n);

    return 0;
}