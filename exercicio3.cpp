#include <stdio.h> 

int main() {
    int n1, quadrado; 

    printf("digite um numero: ");
    scanf("%d", &n1);
    quadrado = n1 * n1;
    printf("o quadrado de %d é %d", n1, quadrado);
    return 0;
}