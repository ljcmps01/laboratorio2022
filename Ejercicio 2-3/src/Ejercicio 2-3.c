/*
 ============================================================================
 Name        : Ejercicio 2-3.c
 Author      : Alejo Campos
 Version     :
 Copyright   : Your copyright notice
 Ejercicio 2-3: Usando el concepto de operadores lógicos booleanos en el condicional.
				Solicitar un número al usuario e informar si el número es par o impar.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);

	int numero;

	printf("Ingrese un numero\n");

	scanf("%d",&numero);

	printf("%d\n",numero);
	if(numero%2)
	{
		printf("El numero es impar \n");
	}
	else
	{
		if(!(numero%2))
		{
			if(numero)
			{
				printf("El numero es par \n");
			}
			else
			{
				printf("El numero es 0 \n");
			}
		}
	}

	return EXIT_SUCCESS;
}
