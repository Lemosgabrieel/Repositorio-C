#include <stdio.h>

int main() {
	int metros, centimetros;
	
	printf("informe o valor em metros: ");
	scanf("%d", &metros);
	
	centimetros = metros * 100;
	
	printf("o valor em centimetros e de: %d", centimetros);
}