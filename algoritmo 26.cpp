#include <stdio.h>

int main() {
    //variaveis
    int vetor[20], soma = 0;

    //entrada 
    for (int i = 0; i < 20; i++) {
        printf("digite o valor para o vetor %d/20: ", (i + 1));
        scanf("%d", &vetor[i]);

        //processamento 
        soma = soma + vetor[i];

        //saida
        printf("a soma dos elementos do vetor e: %d\n", soma);

    }
} 