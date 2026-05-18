#include <stdio.h>

int main() {
    int n, i;
    
    printf("Digite quantos numeros da sequencia de Fibonacci voce quer: ");
    scanf("%d", &n);

    int fib[n];
    fib[0] = 0;
    fib[1] = 1;

    for (i = 0; i < n; i++) {
        if (i > 1) {
            fib[i] = fib[i-1] + fib[i-2];
        }
    }

    for (i = 0; i < n; i++) {
        printf("%d ", fib[i]);
    }


    return 0;
}