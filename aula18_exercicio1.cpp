//Faça um programa que tenha uma função que receba um vetor de inteiros como parâmetro e rertorne o maior valor 
#include <stdio.h> 

int maior_valor(int vetor[], int qtd){
    int maior = 0; 

    for(int i = 0; i < qtd; i++) {
        if(i == 0) {
            maior = vetor[i];
        }

        if (vetor[i] > maior) {
            maior = vetor[i];
        } 
    }
    return maior;
}

int main() {
    int vetor[10] = {1, 6, 8, 115, 24, 32, 47, 88, 4, 2};
    int maior = maior_valor(vetor, 10); 
    printf("o maior valor do vetor é %d", maior);
    return 0; 
}