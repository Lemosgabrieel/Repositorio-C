#include <stdio.h>

int main() {
    //variaveis 
    int vetor[5], pares[2], cont_p=0;
    //leitura do vetor
    for(int i = 0; i < 5; i++) {
        printf("informe um valor para o vetor: ");
        scanf("%d", &vetor[i]);
        if (vetor[i] % 2 == 0) {
            if (vetor[i] > 0) {
                pares[cont_p] = vetor[i];
                cont_p++;
            }
        }
    }    
    for (int i = 0; i < cont_p; i++) {
        printf("%d ", pares[i]);
    }
}