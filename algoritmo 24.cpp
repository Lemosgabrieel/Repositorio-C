#include <stdio.h> 

int main () {
 //variaveis 
 int vetor1[10], vetor2[10], soma[10];
 
 //entrada 
 for (int i = 0; i < 10; i++) {
    printf("informe o valor do primeiro vetor: ");
    scanf("%d", &vetor1[i]);
    printf("informe o valor do segundo vetor: ");
    scanf("%d", &vetor2[i]);

    //processamento
    soma[i] = vetor1[i] + vetor2[i];
    }
    for (int i = 0; i < 10; i++) {
        printf("soma dos vetores: %d\n", soma[i]);
    }
}    