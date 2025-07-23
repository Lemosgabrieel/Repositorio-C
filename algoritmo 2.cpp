#include <stdio.h>

int main() {
	int quantidade_minima, quantidade_maxima;
	float estoque_medio; 
	
	printf("informe a quantidade minima: ");
	scanf("%d", &quantidade_minima);
	
	printf("informe a quantidade maxima: ");
	scanf("%d", &quantidade_maxima);
	
	estoque_medio = (quantidade_minima + quantidade_maxima) / 2; 
	
	printf("o valor do estoque medio e: %.2f", estoque_medio);
	
	
} 