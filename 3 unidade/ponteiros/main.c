#include <stdio.h>

int main() {
    int *p;
    int x;
    p = &x;
    *p = 52;

    printf("Valor de x: %d\n", x);
    printf("Endereco de x: %p\n", &x);
    printf("Valor de p: %d\n", p);
    printf("Endereco de p: %p\n", &p);

    return 0;

}