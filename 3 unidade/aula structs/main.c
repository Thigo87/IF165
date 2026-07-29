#include <stdio.h>

struct socio {
    int mat;
    int idade;
    double altura;
};

typedef struct socio soc; //"Apelido"

int main() {
    soc s[2];
    int i;

    for (i = 0; i < 2; i++) {
        printf("Digite a matricula, idade e altura do socio %d: \n", i+1);
        scanf("%d %d %lf", &s[i].mat, &s[i].idade, &s[i].altura);
    }
    
    for (i = 0; i < 2; i++) {
        printf("Socio: %d\n", i + 1);
        printf("Matricula: %d\n", s[i].mat);
        printf("Idade: %d\n", s[i].idade);
        printf("Altura: %.2f m\n", s[i].altura);
        printf("\n");
    }

    return 0;
}