/*
 ============================================================================
 Name        	: ejercicio3-4.c
 Author      	: Alejo Campos
 Version     	:
 Copyright   	: Your copyright notice
 Ejercicio 3-4	: Especializar la función del punto 3.1 y 3.2 para que valide el número en
un rango determinado.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define MAX 10
#define MIN 5
int mostrarNumero(int numero, int max, int min);
float retornoFlotante(int max,int min);

int main(void) {
	setbuf(stdout,NULL);


	mostrarNumero(11, MAX, MIN);
	mostrarNumero(9, MAX, MIN);
	mostrarNumero(2, MAX, MIN);

	printf("la funcion de retorno flotante devolvio: %f\n",retornoFlotante(MAX, MIN));


	return EXIT_SUCCESS;
}

int mostrarNumero(int numero, int max, int min)
{
	if(numero>min && numero <max)
	{
		printf("%d\n",numero);

		return 0;
	}

	return 1;
}


float retornoFlotante(int max,int min)
{
	float aux;

	do
	{

		printf("Ingresar numero flotante entre %d y %d\n",min, max);
		scanf("%f",&aux);

	} while (!(aux>min && aux<max));

	return aux;
}
