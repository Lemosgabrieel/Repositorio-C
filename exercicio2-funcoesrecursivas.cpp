/*
Crie um programa que tenha uma funcao recursiva que calcule e retorno o fatorial de um numero inteiro N. 
*/
#include <stdio.h> 

int fatorial(int n) {
    if(n >= 1) {
        return n * fatorial(n - 1);
    }else{
        return 1;
    }
}

int main() {
    int n = 5; // 5 * 4 * 3 * 2 * 1 = 120
    printf("Fatorial de %d = %d", n, fatorial(n));
    return 0;
}