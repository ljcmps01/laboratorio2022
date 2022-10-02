/*
 ============================================================================
 Name        : ejercicio3-2.c
 Author      : Alejo Campos
 Version     :
 Copyright   : Your copyright notice
 Ejercicio 3-2: Crear una función que pida el ingreso de un flotante y lo retorne.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

float retornoFlotante(void);

int main(void) {
	setbuf(stdout,NULL);

	for (int i = 0; i < 3; ++i)
	{
		printf("%f\n",retornoFlotante());
	}


	return EXIT_SUCCESS;
}

float retornoFlotante(void)
{
	float aux;

	printf("Ingresar numero flotante\n");
	scanf("%f",&aux);

	return aux;
}
