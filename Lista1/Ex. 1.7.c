#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	float metros;
	
	printf("\nInforme o valor em metros: ");
	scanf("%f", &metros);
	
	printf("\nMetros em dec�metro: %.2f", metros * 10);
	printf("\nMetros em centr�metros: %.2f", metros * 100);
	printf("\nMetros em mil�metros: %.2f", metros * 1000);
	
	
	
}
