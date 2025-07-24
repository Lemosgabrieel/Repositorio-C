#include <stdio.h>

int main() {
    int numero;
    int p = 0; // Para armazenar número par
    int i = 0; // Para armazenar número ímpar

    // Entrada
    printf("Digite um numero: ");
    scanf("%d", &numero);

    // Processamento
    if (numero % 2 == 0) {
        p = numero;
    } else {
        i = numero;
    }

    // Saída
    if (p != 0) {
        printf("O numero %d e par.\n", p);
    }
    if (i != 0) {
        printf("O numero %d e impar.\n", i);
    }

    return 0;
}
