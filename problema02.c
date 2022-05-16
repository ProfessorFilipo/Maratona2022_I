/*
** PROBLEMA 02
** Dado um número inteiro não negativo,
** determinar o fatorial desse número.
*/

#include <stdio.h>

int main()
{
	
	int i;
	int nro, fatorial=1;
	
	printf("informe um numero inteiro nao negativo: ");
	scanf("%d", &nro);
	
	for(i=2; i<=nro; i++)
	{
		fatorial *= i;
	}
	
	printf("\nFatorial de %d eh igual a %d\n", nro, fatorial);

	
	return 0;
}
