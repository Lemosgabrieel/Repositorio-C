/*
faça um programa que contenha um array de inteiros contendo 5 elementos. Utilizando apenas aritmetica de ponteiros, leia este array do 
teclado e imprima o dobro de cada valor lido. 
*/
#include <stdio.h> 

int main() {
    int inteiros[5];

    for(int i = 0; i < 5; i++) {
        printf("informe o valor %d de 5: ", i + 1);
        scanf("%d", &inteiros[i]);
    }

    for (int i = 0; i < 5; i++) {
        printf("o dobro de %d é %d\n", *(inteiros + i), *(inteiros + i) * 2);
    }
    
    
    return 0;
}