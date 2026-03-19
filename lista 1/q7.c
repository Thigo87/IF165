#include <stdio.h>

int main() {
    char ligou, local, mora, devia, trabalhou;
    int score = 0;


    printf("Telefonou para a vitima? (s/n): ");
    scanf(" %c", &ligou);
    ligou == 's' || ligou == 'S' ? score++ : 0;

    printf("Esteve no local do crime? (s/n): ");
    scanf(" %c", &local);
    local == 's' || local == 'S' ? score++ : 0;

    printf("Mora perto da vitima? (s/n): ");
    scanf(" %c", &mora);
    mora == 's' || mora == 'S' ? score++ : 0;

    printf("Devia para a vitima? (s/n): ");
    scanf(" %c", &devia);
    devia == 's' || devia == 'S' ? score++ : 0;

    printf("Ja trabalhou com a vitima? (s/n): ");
    scanf(" %c", &trabalhou);
    trabalhou == 's' || trabalhou == 'S' ? score++ : 0;

    if (score == 5) {
        printf("Assassino\n");
    } else if (score >= 3) {
        printf("Cumplice\n");
    } else if (score == 2) {
        printf("Suspeito\n");
    } else {
        printf("Inocente\n");
    }
    
    return 0;
}