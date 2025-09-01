/*
Faça um programa que contenha duas variaveis inteiras. leia estas variaveis do teclado. em seguida, compare seus endereços e exiba o 
conteudo de maior endereço. 
*/
#include <stdio.h> 

int main() {
    int var1, var2;

    printf("informe o valor para var1: ");
    scanf("%d", &var1);
    printf("informe o valor para var2: ");
    scanf("%d", &var2);

    printf("endereco de memoria de var1: %p\n", &var1);
    printf("endereco de memoria de var2: %p\n", &var2);

    if (&var1 > &var2) {
        printf("O maior endereço é var1: %d\n", var1);
    } else {
        printf("O maior endereço é var2: %d\n", var2);
    }

    return 0; 
}