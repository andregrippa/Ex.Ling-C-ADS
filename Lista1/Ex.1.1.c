#include <stdio.h>

int main ()
{
	float valor1, valor2, resultado;
	
	
	printf("\nSeu Salario atual: ");
	scanf("%f", &valor1);
	printf("\nSalario minimo em 2022: ");
	scanf("%f", &valor2);
	
	resultado = (valor1 / valor2);
	
	printf("\nCom base em seu salario, quantos salarios minimos voce recebe: %f", resultado);
	
}
