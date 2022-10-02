/*
 ============================================================================
 Name        : Ejercicio 2-1.c
 Author      : Alejo Campos
 Version     :
 Copyright   : Your copyright notice
 Ejercicio 2-1: Ingresar 7 números negativos distintos de 0 calcular y mostrar el
 promedio de los números. Probar la aplicación con distintos valores.
  Ejemplo 1: (-7)( - 5)( - 12) (- 1)( - 2)
  Ejemplo 2: (-9)( - 15)( - 12) (- 1)( - 21)
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define MAX 7

int main(void) {
	setbuf(stdout,NULL);

	int contador=0;
	int acumulador=0;
	int numero;
	float promedio;

	do
	{
		printf("Ingrese numero negativo: \n");
		scanf("%d",&numero);
		if(numero<0)
		{
			contador++;
			acumulador+=numero;
		}
	}while(contador<7);

	promedio=(float)acumulador/MAX;

	printf("el promedio es: %f\n",promedio);
	return EXIT_SUCCESS;
}
