#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	float valor_sf, valor_cd, valor_tv, valor_por, valor_cv, resultado;
	char nome[50];
	
	printf("\nNome do colaborador: ");
	scanf("%s", &nome);
	printf("\nSalário fixo: ");
	scanf("%f", &valor_sf);
	printf("\nComissão por venda de cada veículo: ");
	scanf("%f", &valor_cd);
	printf("\nNúmero de carros vendidos no mês: ");
	scanf("%f", &valor_cv);
	printf("\nValor total de vendas: ");
	scanf("%f", &valor_tv);
	printf("\nQual a porcentagem do valor da venda: ");
	scanf("%f", &valor_por);
	
	resultado = (valor_sf + (valor_cd * valor_cv) + valor_tv * (valor_por / 100));
	
	printf("\nQual o salário final do colaboradores em R$: %f", resultado);
	
		
	
	
}
