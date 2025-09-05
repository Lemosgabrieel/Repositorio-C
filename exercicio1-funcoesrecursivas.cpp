/*
crie um programa que tenha uma funcao recursiva que receba um numero inteiro positivo N e calcula e apresente o somatorio dos numeros 
de 1 a N.
*/
#include <stdio.h> 
int somatorio(int n) {
    if(n <= 1) {
        return n;
    }else{
        return n + somatorio(n - 1);
    }
}
int main() {
    int n = 5; //5 + 4 + 3 + 2 + 1 = 15
    printf("a soma dos %d primeiros numeros é: %d\n", n, somatorio(n));
    return 0;
}