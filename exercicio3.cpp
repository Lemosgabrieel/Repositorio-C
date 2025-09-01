#include <stdio.h> 

int main() {
    float aposta1, aposta2, aposta3, total_apostas; 
    float premio;
    float porcentagem1, porcentagem2, porcentagem3, total_porcentagem;
    float premio1, premio2, premio3;
    float premio_total;

    printf("digite o valor da primeira aposta: ");
    scanf("%f", &aposta1);
    printf("digite o valor da segunda aposta: ");
    scanf("%f", &aposta2);
    printf("digite o valor da terceira aposta: ");
    scanf("%f", &aposta3);
    printf("digite o valor do premio");
    scanf("%f", &premio);

    total_apostas = aposta1 + aposta2 + aposta3;
    printf("o valor total das apostas e: %.2f\n", total_apostas);

    porcentagem1 = (aposta1 / total_apostas);
    porcentagem2 = (aposta2 / total_apostas);
    porcentagem3 = (aposta3 / total_apostas);
    total_porcentagem = porcentagem1 + porcentagem2 + porcentagem3;
    printf("o valor total das porcentagens e: %.2f\n", total_porcentagem);

    premio1 = premio * porcentagem1;
    premio2 = premio * porcentagem2;
    premio3 = premio * porcentagem3;
    premio_total = premio1 + premio2 + premio3;
    printf("o valor total do premio e: %.2f\n", premio_total);

    printf("o valor do premio da primeira aposta e: %.2f\n", premio1);
    printf("o valor do premio da segunda aposta e: %.2f\n", premio2);   
    printf("o valor do premio da terceira aposta e: %.2f\n", premio3);

    return 0;
}