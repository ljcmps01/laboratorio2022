/*
 ============================================================================
 Name        : Ejercicio 2-4.c
 Author      : Alejo Campos
 Version     :
 Copyright   : Your copyright notice
 Ejercicio 2-4:
	 Ingresar 8 números enteros, distintos de cero. Mostrar:
	 a. El menor número ingresado.
	 b. De los pares el mayor número ingresado.
	 c. Producto de los negativos.
	 d. En qué lugar fue ingresado el mayor numero
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define MAX 8

int main(void) {
	setbuf(stdout,NULL);

	int contador=1;
	int numero;

	int menor;
	int flagMinMax=1;

	int mayorPar;
	int flagMayorPar=1;

	int productoNeg;
	int flagNeg=1;

	int mayor;
	int posMayor;

	do
	{

		printf("%d - Ingresar numero\n",contador);
		scanf("%d",&numero);
		if(numero)
		{
			if(flagMinMax)
			{
				flagMinMax=0;
				menor=numero;
				mayor=numero;
				posMayor=contador;
			}

			//consulto si es nuevo minimo
			if(numero<menor)
			{
				menor=numero;
			}

			//consulto si es nuevo max
			if(numero>mayor)
			{
				mayor=numero;
				posMayor=contador;
			}

			//consulto si es par y luego mayor par
			if(!(numero%2))
			{
				if(flagMayorPar)
				{
					flagMayorPar=0;
					mayorPar=numero;
				}
				else
				{
					if(numero>mayorPar)
					{
						mayorPar=numero;
					}
				}
			}

			//consulto si es negativo

			if(numero<0)
			{
				if(flagNeg)
				{
					flagNeg=0;
					productoNeg=numero;
				}
				else
				{
					productoNeg*=numero;
				}
			}
			contador++;
		}

	}while(contador<=MAX);

	printf("numero minimo %d\n",menor);
	printf("numero mayor par %d\n",mayorPar);
	printf("producto neg %d\n",productoNeg);
	printf("pos mayor %d\n",posMayor);

	return EXIT_SUCCESS;
}
