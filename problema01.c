/*
** PROBLEMA 01
** Deve trocar os valores de A e B
** sem o uso de nenhuma variável auxiliar
*/

#include <stdio.h>

int main()
{
	
	int A = 10, B = 20;
	
	printf("Valores originais: A = %d e B = %d\n", A, B);
	
	A = A + B; // A=30 B=20
	B = A - B; // A=30 B=10
	A = A - B; // A=20 B=10
	
	printf("Valores trocados:  A = %d e B = %d\n", A, B);
	
	return 0;
}
