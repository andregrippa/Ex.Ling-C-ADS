#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	int numero, cont;
	
	printf("\nInforme o número que deseja ver a tabuada: ");
	scanf("%d", &numero);
	cont = 1;
	
	while(cont<11)
	{
		printf("%d x %d = %d \n", numero, cont, numero * cont);
		cont++;
	}
	
	
}
