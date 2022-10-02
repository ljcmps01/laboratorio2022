/*
 ============================================================================
 Name        : Estructuras.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define TAM 2

typedef struct
{
	char nombre[10];
	int materiasAprobadas;
	int sumaNotas;
	float promedio;

}eAlumnos;

eAlumnos cargarAlumnos();
int imprimirEstructura(eAlumnos estructura);
float calcularPromedio(int total,int cantidad);

int main(void) {
	setbuf(stdout,NULL);

	eAlumnos estudiantes[TAM];

	for(int i=0;i<TAM;i++)
	{
		estudiantes[i]=cargarAlumnos();
		estudiantes[i].promedio=calcularPromedio(estudiantes[i].sumaNotas, estudiantes[i].materiasAprobadas);
	}

	for(int i=0;i<TAM;i++)
	{
		imprimirEstructura(estudiantes[i]);
	}
	return EXIT_SUCCESS;
}

eAlumnos cargarAlumnos()
{
	eAlumnos aux;

	printf("Ingrese nombre\n");
	fflush(stdin);
	scanf("%s",aux.nombre);

	printf("Ingrese materias aprobadas\n");
	scanf(" %d",&aux.materiasAprobadas);
	printf("Ingrese suma notas\n");
	scanf(" %d",&aux.sumaNotas);
	printf("Ingrese promedio\n");
	scanf(" %02f",&aux.promedio);

	return aux;
}

float calcularPromedio(int total,int cantidad)
{
	return (float)total/cantidad;
}

int imprimirEstructura(eAlumnos estructura)
{
	printf(" %s\n",estructura.nombre);
	printf(" %d\n",estructura.materiasAprobadas);
	printf(" %d\n",estructura.sumaNotas);
	printf(" %.02f\n",estructura.promedio);

	return 0;
}
