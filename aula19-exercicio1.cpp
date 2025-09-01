/*
Faça um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real e char. Associe as variaveis aos ponteiros
(use &). Modifique os valores de cada variavel usando os ponteiros. imprima os valores das variaveis antes e após a modificação. 
*/
#include <stdio.h> 

int main() {
    int valor_inteiro = 1;
    float valor_real = 1.1;
    char valor_char = 103;

    int* ponteiro_inteiro; 
    float* ponteiro_real;
    char* ponteiro_char;

    printf("Valor inteiro antes: %d\n", valor_inteiro);
    printf("Valor real antes: %.2f\n", valor_real);
    printf("Valor char antes: %c\n", valor_char);

    ponteiro_inteiro = &valor_inteiro;
    ponteiro_real = &valor_real;
    ponteiro_char = &valor_char;

    printf("Valor inteiro depois: %d\n", valor_inteiro);
    printf("Valor real depois: %.2f\n", valor_real);
    printf("Valor char depois: %c\n", valor_char);


    return 0;
}