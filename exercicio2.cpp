#include <stdio.h> 

int main() {
    int n1, n2, n3, soma; 
    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);
    printf("Digite o terceiro numero: ");
    scanf("%d", &n3);
    soma = n1 + n2 + n3;
    printf("A soma dos numeros e: %d", soma);
    return 0;
}