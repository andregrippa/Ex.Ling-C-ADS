#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	float metros;
	
	printf("\nInforme o valor em metros: ");
	scanf("%f", &metros);
	
	printf("\nMetros em decímetro: %.2f", metros * 10);
	printf("\nMetros em centrímetros: %.2f", metros * 100);
	printf("\nMetros em milímetros: %.2f", metros * 1000);
	
	
	
}
