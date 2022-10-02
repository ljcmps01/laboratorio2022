/*
 ============================================================================
 Name        : Ejercicio 2-2.c
 Author      : Alejo Campos
 Version     :
 Copyright   : Your copyright notice
 Ejercicio 2-2: Ingresar números enteros, hasta que el usuario pida. Mostrar:
  a) El promedio de los positivos y su mínimo.
  b) El promedio de los negativos y su máximo.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);

	int ingreso;
	int numero;

	int acumNeg=0;
	int contNeg=0;
	float promedioNeg;
	int maximoNeg;
	int flagNeg=1;

	int acumPos=0;
	int contPos=0;
	float promedioPos;
	int minimoPos;
	int flagPos=1;

	do
	{
		printf("ingrese un numero: \n");
		scanf("%d",&numero);

		if(numero<0)
		{
			contNeg++;
			acumNeg+=numero;
			if(flagNeg)
			{
				flagNeg=0;
				maximoNeg=numero;
			}
			else
			{
				if(numero>maximoNeg)
				{
					maximoNeg=numero;
				}
			}
		}
		else
		{
			if(numero>0)
			{
				contPos++;
				acumPos+=numero;
				if(flagPos)
				{
					flagPos=0;
					minimoPos=numero;
				}
				else
				{
					if(numero<minimoPos)
					{
						minimoPos=numero;
					}
				}
			}
		}

		printf("desea seguir ingresando numeros?(0-no 1-si)\n");
		scanf("%d",&ingreso);

	}while(ingreso);

	if(contNeg)
	{
		promedioNeg=(float)acumNeg/contNeg;
		printf("El promedio de negativos es: %.2f\nY el maximo es %d\n",promedioNeg,maximoNeg);
	}

	if(contPos)
	{
		promedioPos=(float)acumPos/contPos;
		printf("El promedio de positivos es: %.2f\nY el minimo es %d\n",promedioPos,minimoPos);
	}

	return EXIT_SUCCESS;
}
