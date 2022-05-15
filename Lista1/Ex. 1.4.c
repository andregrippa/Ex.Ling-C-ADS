#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	int numero;
	
	printf("\nInforme o número: ");
	scanf("%d", &numero);
	
	printf("\nQual o antecessor: %d \nQual o seu sucessor: %d", numero -1, numero +1);
	
	
	
}



