/* 
3. faça um programa que leia um vetor de 10 posições e atribua o valor 0 para todos os elementos que possuirem valores negativos. 
*/
#include <stdio.h> 

int main() {
    int vetor[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0};

    for (int i = 0; i < 10; i++) {
        printf("Digite o valor %d de 10: ", i + 1);
        scanf("%d", &vetor[i]);
        if (vetor[i] < 0) {
            vetor[i] = 0;
        }
    }
    for (int i = 0; i < 10; i++) {
        printf("Vetor na posicao %d vale %d\n", i, vetor[i]);
    }
    return 0; 
}