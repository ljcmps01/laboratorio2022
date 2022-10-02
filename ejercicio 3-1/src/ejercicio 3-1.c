/*
 ============================================================================
 Name        : ejercicio 3-1.c
 Author      : Alejo Campos
 Version     :
 Copyright   : Your copyright notice
 Ejercicio 3-1: Crear una función que muestre por pantalla el número entero que
	recibe como parámetro.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int mostrarNumero(int numero);

int main(void) {
	setbuf(stdout,NULL);

	mostrarNumero(12);
	mostrarNumero(0);
	mostrarNumero(-1);

	return EXIT_SUCCESS;
}

int mostrarNumero(int numero)
{
	printf("%d\n",numero);

	return 0;
}

