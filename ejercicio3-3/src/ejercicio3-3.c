/*
 ============================================================================
 Name        : ejercicio3-3.c
 Author      : Alejo Campos
 Version     :
 Copyright   : Your copyright notice
 Ejercicio 3-3: Crear una función que permita determinar si un número es par o no. La
función retorna 1 en caso afirmativo y 0 en caso contrario. Probar en el main.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int paridad(int numero);

int main(void) {
	setbuf(stdout,NULL);

	int input;

	for (int i = 0; i < 3; ++i) {
		printf("Ingresar numero\n");
		scanf("%d",&input);

		if(paridad(input))
		{
			printf("Se ingreso un numero par\n");
		}
		else
		{
			printf("Se ingreso un numero impar\n");
		}
	}

	return EXIT_SUCCESS;
}

int paridad(int numero)
{
	if(numero%2&&numero!=0)
	{
		return 0;
	}
	return 1;
}
