/*
 ============================================================================
 Name        : Ejercicio 1-2.c
 Author      : Campos Alejo
 Version     :
 Copyright   : Your copyright notice
 Description : Ejercicio 1-2: ingresar 3 números y mostrar cuál de los tres es el mayor.
Ejemplo: Si ingresamos 5, 9 y 3 el programa mostrará: “El mayor de los números es el
segundo: 9”
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define CANT 3


int main(void) {
	setbuf(stdout,NULL);

	int maximo;
	int numero;
	int pos;

	int flag=1;

	for(int i=1;i<=CANT;i++)
	{
		printf("ingrese un numero: ");
		scanf("%d",&numero);

		if(flag)
		{
			flag=0;
			maximo=numero;
			pos=i;
		}
		else
		{
			if(numero>maximo)
			{
				maximo=numero;
				pos=i;
			}
		}
	}

	printf("el numero maximo ingresado es %d ingresado en la posicion %d\n",maximo,pos);
	return EXIT_SUCCESS;
}
