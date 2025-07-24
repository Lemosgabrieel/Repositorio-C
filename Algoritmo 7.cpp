#include <stdio.h>

int main() {
	// variaveis 
	int n; 
	
	//entrada 
	printf("informe um numero: ");
	scanf("%d", &n);
	
	//processamento 
	if (n > 100) {
		printf("%d", n);	
	}else{
		n=0; 
		printf("%d", n); 
	}
}