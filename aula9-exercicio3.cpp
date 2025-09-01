//faça um programa que leia 10 números e escreva o maior e o menor valor lido
#include <stdio.h> 

int main() {
    int numero, maior, menor = 0;

    for(int i = 0; i < 10; i++) {
        printf("informe o valor %d de 10: ", i + 1);
        scanf("%d", &numero);
        //no primeiro loop
        if(i ==0) {
            maior = numero;
            menor = numero;  
        }
        //nos demais loops
        //maior
        if(numero > maior) {
            maior = numero;
        }
        //menor
        if(numero < menor) {
            menor = numero;
        }
    }
    printf("o maior valor é %d e o menor valor é %d", maior, menor);
    return 0;
}