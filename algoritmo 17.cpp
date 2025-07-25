#include <stdio.h>

int main() {
    int numero, maior = 0;

    printf("Digite um numero (0 para parar): ");
    scanf("%d", &numero);

    while (numero != 0) {
        if (numero > maior) {
            maior = numero;
        }
        printf("Digite um numero (0 para parar): ");
        scanf("%d", &numero);
    }

    if (maior == 0) {
        printf("Nenhum numero maior que zero foi digitado.\n");
    } else {
        printf("Maior valor: %d\n", maior);
    }

    return 0;
}
