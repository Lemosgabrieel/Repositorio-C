#include <stdio.h>

int main() {
	float peso_ideal, altura; 
	
	printf("digite sua altura em metros: ");
	scanf("%f", &altura);
	
	peso_ideal = (72.7 * altura) - 58;
	
	printf("seu peso ideal e de: %.2f", peso_ideal);
	
}