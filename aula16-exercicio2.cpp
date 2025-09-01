/*
Faça um programa que leia um vetor de 10 posições, conte e mostre quantos valores pares ele possui. 
*/
#include <stdio.h> 

int main() {
    int vetor[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int contador_pares = 0;

    for (int i = 0; i < 10; i++) {
        printf("digite o valor %d de 10: ", i + 1); 
        scanf("%d", &vetor[i]);
        
    for (int i = 0; i < 10; i++);    
        if (vetor[i] % 2 == 0) {
            printf ("o valor %d é par.\n", vetor[i]);
            contador_pares = contador_pares + 1; 
        }
    }
    printf("o vetor possui %d valores pares.\n", contador_pares);
    return 0;
}