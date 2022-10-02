/*
 ============================================================================
 Name        : ejercicio 2-5.c
 Author      : Alejo Campos
 Version     :
 Copyright   : Your copyright notice
 Ejercicio 2-5:
	Debemos generar el pedido de libretas universitarias a la imprenta para los alumnos
	al regreso a la presencialidad. De cada persona debemos obtener los siguientes
	datos:
	número de legajo (4 cifras sin ceros a la derecha),
	estado civil ('s' para soltero", 'c' para casado o 'v' viudo),
	edad (más de 17),
	año de ingreso (validar por favor)
	y género ('f' para femenino, 'm' para masculino, 'o' para no binario).
	NOTA: El precio por libreta universitaria es de $450.
	Se debe informar (solo si corresponde):
	a) La cantidad de personas mayores de 60 años.
	b) El legajo y edad de la mujer que ingreso hace más tiempo.
	c) Cuanto debe abonar la facultad por las libretas sin el descuento
	d) Si se solicitan mas de 5 libretas hay un 5% de descuento, si se solicitan más de
	10 libretas se hace 10%. Además, por cada alumno mayor de 60 años al valor original
	de la libreta se le hace un 25%. Informar los valores si corresponde.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LIBRETA 450
#define ANIOACTUAL 2022
#define EDADMINIMA 17

int main(void) {

	setbuf(stdout,NULL);

	int legajo;
	char estadoCivil;
	int edad;
	int ingreso;
	char genero;

	int precioBruto;

	int sextagenarios=0;

	int legajoMujerAntigua;
	int edadMujerAntigua;
	int ingresoMujerAntigua;
	int flagMujerAntigua=1;

	float precioNeto;

	char opcion;
	int contador=0;

	do
	{
		do
		{
			printf("ingresar numero de legajo\n");
			scanf("%d",&legajo);
		}while(legajo<999||legajo>9999);

		do
		{
			printf("ingresar estado civil\n");
			setbuf(stdin,NULL);
			scanf("%c",&estadoCivil);
		}while(estadoCivil!='s'&&estadoCivil!='c'&&estadoCivil!='v');

		do
		{
			printf("ingresar edad\n");
			scanf("%d",&edad);
		}while(edad<EDADMINIMA);


		do
		{
			printf("ingresar ingreso\n");
			scanf("%d",&ingreso);
		}while(ingreso<2000||ingreso>=ANIOACTUAL||(edad-(ANIOACTUAL-ingreso)-EDADMINIMA)<0);

		do
		{
			printf("ingresar genero\n");
			setbuf(stdin,NULL);
			scanf("%c",&genero);
		}while(genero!='f'&&genero!='m'&&genero!='o');

		if(edad>60)
		{
			sextagenarios++;
		}

		if(genero!='m')
		{
			if(flagMujerAntigua)
			{
				flagMujerAntigua=0;
				legajoMujerAntigua=legajo;
				edadMujerAntigua=edad;
				ingresoMujerAntigua=ingreso;
			}

			else if(ingreso<ingresoMujerAntigua)
			{
				legajoMujerAntigua=legajo;
				edadMujerAntigua=edad;
				ingresoMujerAntigua=ingreso;
			}
		}

		contador++;
		printf("Se ingresaron %d alumnos\n",contador);

		printf("desea ingresar otro alumno? (S)i / (N)o\n");
		setbuf(stdin,NULL);
		scanf("%c",&opcion);
		opcion=tolower(opcion);
	}while(opcion=='s');

	precioBruto=contador*LIBRETA;
	precioNeto=precioBruto;

	if(sextagenarios)
	{
		precioNeto=precioBruto-sextagenarios*LIBRETA*0.25;

		printf("Hay %d personas mayores a 60\n",sextagenarios);
	}

	if(!flagMujerAntigua)
	{
		printf("La mujer que ingreso hace mas tiempo tiene el legajo %d y edad %d\n",legajoMujerAntigua,edadMujerAntigua);
	}

	printf("El precio total por las libretas es %d\n",precioBruto);

	if(contador>5)
	{
		if(contador>10)
		{
			precioNeto*=0.9;
		}
		else
		{
			precioNeto*=0.95;
		}
	}

	if(sextagenarios || contador>5)
	{
		printf("El precio final con descuento es %.2f",precioNeto);
	}

	return EXIT_SUCCESS;
}
