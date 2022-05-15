#include <stdio.h>

int main ()
{
	int segundos, resultado;
	
	printf("\n Digite os segundos: ");
	scanf("%d", &segundos);
	
	resultado = ((segundos / 60) /60);
	
	printf("\nO valor informado corresponde a quantas horas: %d", resultado); 
	printf("\n%d segundos = %d horas", segundos, resultado);
	

	
}
