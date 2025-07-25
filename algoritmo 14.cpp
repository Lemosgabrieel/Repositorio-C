#include <stdio.h>

int main() {
    int n1;

    // Entrada
    printf("Digite um numero inteiro: ");
    scanf("%d", &n1);

    // Verifica se é positivo, negativo ou zero
    if (n1 > 0) {
        printf("O numero é positivo\n");
    } else if (n1 < 0) {
        printf("O numero é negativo\n");
    } else {
        printf("O numero é zero\n");
    }

    // Verifica se é par ou ímpar
    if (n1 % 2 == 0) {
        printf("O numero é par\n");
    } else {
        printf("O numero é impar\n");
    }

    return 0;
}