/*
 ============================================================================
 Name        : ejercicio.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Ejercicio 2-6:
	Ingresar 5 caracteres e informar cuantas letras m (minúsculas) se ingresaron.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define CANT 5

int main(void) {

	setbuf(stdout,NULL);

	char caracter;
	int contador=0;
	int m=0;
	do
	{

		printf("ingresar %d caracteres\n",CANT-contador);
		do
		{
			scanf("%c",&caracter);
			if(caracter=='m')m++;
			if(caracter!='\n')
			{
				contador++;
			}
		}while(contador<5);
		setbuf(stdin,NULL);

	}while(contador<5);

	printf("Se ingresaron %d letras m\n ",m);
	return EXIT_SUCCESS;
}
