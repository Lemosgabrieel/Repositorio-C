/*
crie um programa que tenha uma funcao recursiva que receba um valor inteiro e converta este numero para binario. 
*/
#include <stdio.h> 

int binario(int n) {
    if(n == 0) {
        return 0;
    }else{
        return(n % 2 + 10 * binario(n / 2));
    }
}
int main() {
    int n = 5; //101
    printf("o numero %d em binario é: %d\n", n, binario(n));
    return 0;
}