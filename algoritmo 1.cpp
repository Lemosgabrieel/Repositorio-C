#include <stdio.h>

int main(){
    int n1, n2, multiplicacao, soma;
	
	printf("digite o primeiro numero: ");
	scanf("%d" , &n1);
	
	printf("digite o segundo numero: ");
	scanf("%d", &n2);
	
	soma = n1 + n2;
	multiplicacao = soma * n1;
	
	printf("o resultado da multiplicacao e: %d", multiplicacao);
	
}
	
