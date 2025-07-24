#include <stdio.h>

int main () { 
	int n1, n2, n3, n4;
	int q1, q2, q3, q4;
	
	printf("digite o primeiro numero: ");
	scanf("%d", &n1);
	
	printf("digite o segundo numero: ");
	scanf("%d", &n2);
	
	printf("digite o terceiro numero: ");
	scanf("%d", &n3);
	
	printf("digite o quarto numero: ");
	scanf("%d", &n4);
	
	q1 = n1 * n1; 
	q2 = n2 * n2; 
	q3 = n3 * n3; 
	q4 = n4 * n4; 
    if (q3 >= 1000) {
        printf("O quadrado do terceiro numero e: %d\n", q3);
    } else {
        printf("n1 = %d | q1 = %d\n", n1, q1);
        printf("n2 = %d | q2 = %d\n", n2, q2);
        printf("n3 = %d | q3 = %d\n", n3, q3);
        printf("n4 = %d | q4 = %d\n", n4, q4);
    }

    return 0;
}