#include <stdio.h>

int main() {
    int valor, i;
    int maior = -99999;
    int menor = 99999;
    int soma = 0;

    for (i = 0; i < 10; i++) {
        printf("Digite um valor inteiro e positivo: ");
        scanf("%d", &valor);

        // Garantir que o valor seja positivo
        while (valor < 0) {
            printf("Valor invalido. Informe um valor positivo: ");
            scanf("%d", &valor);
        }

        if (valor > maior) {
            maior = valor;
        }

        if (valor < menor) {
            menor = valor;
        }

        soma += valor;
    }

    float media = soma / 10.0;

    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);
    printf("Media dos valores: %.2f\n", media);

    return 0;
}