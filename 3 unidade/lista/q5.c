#include <stdio.h>

typedef struct livro {
    char titulo[100];
    char genero[50];
} Livro;

void procurarLivro(Livro *livros) {
    int i;
    for (i = 0; i < 5; i++) {
        printf("Livro %d: %s\n", i + 1, livros->titulo);
        printf("Genero: %s\n", livros->genero);
        livros++;
    }
}

int main() {
    Livro livros[5] = {
        {"O Senhor dos Aneis", "Fantasia"},
        {"As Cronicas de Narnia", "Fantasia"},
        {"O Pequeno Principe", "Infantil"},
        {"A Guerra dos Tronos", "Fantasia"},
        {"O Hobbit", "Fantasia"}
    };

    procurarLivro(livros);

    return 0;
}