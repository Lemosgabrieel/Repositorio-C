#include <stdio.h>

int main() {
	float vgh, salario; 
	int nht;
	
	printf("inserir numero de horas trabalhadas: ");
	scanf("%f", &nht);
	
	printf("digite o valor de ganho por hora: ");
	scanf("%f", &vgh);
	
	salario = vgh * nht; 
	
	printf("seu salario sera de: %.2f", salario);
}