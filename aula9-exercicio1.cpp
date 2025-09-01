 //faça um programa que determine e mostre os cinco primeiros multiplos de 3, considerando numeros maiores que 0.
#include <stdio.h>

int main() {
    int numero = 1;
    int contador = 0; 

    printf("apresentando os 5 primeiro múltiplos de 3: \n");
    while(contador < 5) {
        if(numero % 3 == 0) {
            printf("o número %d é múltiplo de 3.\n", numero);
            contador = contador + 1;
        }
        numero = numero + 1;
    }
    return 0;
}
