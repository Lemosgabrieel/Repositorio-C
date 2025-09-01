//Faça um programa que tenha um função que, dado um caractere qualquer de entrada, retorne o mesmo caractere sempre em maiusculo
#include<stdio.h> 

char get_maiusculo(char caractere) {
    char maiusculo = (int)caractere - 32; 

    return maiusculo;
}

int main() {
    char caractere = 'g';
    char maiusculo = get_maiusculo(caractere);
    printf("o caractere '%c' maiúsculo é '%c'", caractere, maiusculo);

    return 0; 
}