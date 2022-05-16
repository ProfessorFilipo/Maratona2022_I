/*
** PROBLEMA 03
** Dado um número inteiro não negativo,
** determinar se este eh um nro triangular.
*/

#include <stdio.h>
#include <stdbool.h>

bool EhTriangular(int nro)
{
	int soma=0, n;
	
	if(nro < 0)
	{
		printf("\nNro invalido! [%d]\n", nro);
		return -1;
	}
    
    for(n=1; soma <= nro; n++)
    {
    	soma += n;
    	if(soma == nro)	return true;
	}
	
	return false;
}

int main()
{
	int nro, soma=0;;
	
	printf("Informe um nro inteiro nao negativo: ");
	scanf("%d", &nro);
	
	if(EhTriangular(nro))
	{
		printf("%d eh triangular!\n", nro);
	}
	else
	{
		printf("%d nao eh triangular!\n", nro);
	}
	
	return 0;
}
