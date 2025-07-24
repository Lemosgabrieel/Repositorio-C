#include <stdio.h>

int main () { 
//variaveis 
 	int codigo_do_operario, numero_de_horas_trabalhadas; 
 	float salario, excedente; 
 	const float valor_hora_normal = 10.00;
	const float valor_hora_extra = 20.00;
	
	 //entrada 
	 printf("digite o numero de horas trabalhadas: ");
	 scanf("%d", &numero_de_horas_trabalhadas);
	 
	 printf("digite o codigo do operario: "); 
	 scanf("%d", &codigo_do_operario);
	 
	 //processamento 
	 if (numero_de_horas_trabalhadas > 50) {
	 salario = 50 * valor_hora_normal; 
	 excedente = (numero_de_horas_trabalhadas - 50) * valor_hora_extra; 
	 } else {
	 	salario = numero_de_horas_trabalhadas * valor_hora_normal;
	 	excedente = 0;
	
	 }
//saida
	printf("Codigo do operario: %d\n", codigo_do_operario);
	printf("salario base: R$ %.2f\n", salario);
	printf("valor excedente: R$ %2.f\n", excedente);
	printf("salario total: R$ %.2f\n", salario + excedente); 
	
	return 0;



}	