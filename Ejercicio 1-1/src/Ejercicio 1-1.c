/*
 ============================================================================
 Name        : Ejercicio1-1.c
 Author      : Campos Alejo
 Version     :
 Copyright   : Your copyright notice
 Description : Ingresar dos números enteros entre -50 y 100, sumarlos y mostrar el
resultado. Ejemplo: Si ingresamos 3 y 2 el programa mostrará: “La suma entre 3 y 2
da como resultado 5”
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);
	int contador=0;
	int acumulador=0;
	int numero;

	do {
		printf("ingrese un numero entre -50 y 100\n");
		scanf("%d",&numero);

		if(numero < 100 && numero > -50)
		{
			acumulador+=numero;
			contador++;
		}
	} while (contador<2);

	printf("la suma de los numeros ingresados es %d\n",acumulador);

	return EXIT_SUCCESS;
}
