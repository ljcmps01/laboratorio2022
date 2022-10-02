/*
 ============================================================================
 Name        : Ejercicio 1-3.c
 Author      : Campos Alejo
 Version     :
 Copyright   : Your copyright notice
 Description : Ejercicio 1-3: ingresar 3 números y mostrar el número del medio, sólo si existe. En
caso de que no exista también informarlo.
Ejemplo:
1 5 3 el 3 es del medio
5 1 5 no hay número del medio
3 5 1 el 3 es del medio
3 1 5 el 3 es del medio
5 3 1 el 3 es del medio
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>

#define CANT 3


int main(void) {
	setbuf(stdout,NULL);

	int numeroA;
	int numeroB;
	int numeroC;

	int maximo;
	int minimo;

	printf("ingresar primer numero\n");
	scanf("%d",&numeroA);

	maximo=numeroA;
	minimo=numeroA;

	printf("ingresar segundo numero\n");
	scanf("%d",&numeroB);
	if(numeroB>maximo)
	{
		maximo=numeroB;
	}
	if(numeroB<minimo)
	{
		minimo=numeroB;
	}

	printf("ingresar tercer numero\n");
	scanf("%d",&numeroC);
	if(numeroC>maximo)
	{
		maximo=numeroC;
	}
	if(numeroC<minimo)
	{
		minimo=numeroC;
	}


	if(numeroA==numeroB||numeroA==numeroC||numeroB==numeroC)
	{
		printf("no hay medio\n");
	}
	else
	{
		if(numeroA!=maximo&&numeroA!=minimo)
		{
			printf("El numero del medio es %d\n",numeroA);
		}
		else
		{
			if(numeroB!=maximo&&numeroB!=minimo)
			{
				printf("El numero del medio es %d\n",numeroB);
			}
			else
			{
				if(numeroC!=maximo&&numeroC!=minimo)
				{
					printf("El numero del medio es %d\n",numeroC);
				}
			}
		}
	}


	return EXIT_SUCCESS;
}
