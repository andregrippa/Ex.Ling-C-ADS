#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	int n_a;
	float n_c, v_c, vt_c;
	
	printf("\nQuantidade de anos que a pessoa fuma: ");
	scanf("%d", &n_a);
	printf("\nQuantidade de cigarros fumados por dia: ");	
	scanf("%f", &n_c);
	printf("\nValor de cada carteira de cigarro: ");
	scanf("%f",&v_c);
	
	vt_c = n_a * 365 * n_c / 20 * v_c;
	
	printf("\nQuantidade de dinheiro gasto com cigarro: %.2f", vt_c);
	
	
	
}
