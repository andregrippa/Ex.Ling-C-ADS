#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	float valor_b, valor_h;
	
	printf("\nInforme o valor da base: ");
	scanf("%f", &valor_b);
	
	printf("\nInforme o valor da altura: ");
	scanf("%f", &valor_h);
	
	printf("\nA área é = %f", valor_b * valor_h);
	
	

	
	
	
	
	
	
}
