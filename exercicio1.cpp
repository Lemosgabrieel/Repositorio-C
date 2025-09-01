#include <stdio.h> 

int main() {
    int n1, n2, n3, q1, q2, q3, soma; 

    printf("digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("digite o segundo numero: ");
    scanf("%d", &n2);
    printf("digite o terceiro numero: ");
    scanf("%d", &n3);

    q1 = n1 * n1;
    q2 = n2 * n2;
    q3 = n3 * n3;
    soma = q1 + q2 + q3;

    printf("a soma dos quadrados dos numeros e: %d", soma);
    return 0;
}