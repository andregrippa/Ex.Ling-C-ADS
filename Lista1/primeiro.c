#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()

{
	/*setlocale(LC_ALL, "Portuguese");
	int num; 
	
	printf("\nDigite um número!");
	scanf("%d", &num);
	printf("\nVocê Digitou %d", num); */
	
	float tCelsius, tFahrenheit;
	
	printf("\nInforme o valor em Fahrenheit"); 
	scanf("%f", &tFahrenheit); 
	tCelsius = (5*(tFahrenheit - 32)/9);
	printf("\nValor em Celsius = %f", tCelsius);
	
		
}







