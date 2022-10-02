/*
 ============================================================================
 Name        : Biblioteca.c
 Author      : Campos Alejo
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#include "UTN.h"

#define TAM 5
#define LEN 10

void listarMenu(char *array,int tam, int len);
void imprimirString(char *mensaje,int max);
int main(void) {
	setbuf(stdout,NULL);

	char menu[TAM][LEN]=
	{
			"hola",
			"como",
			"estas",
			"yo",
			"bien"
	};

	listarMenu(&menu[0][0], TAM,LEN);

	return EXIT_SUCCESS;
}


void imprimirString(char *mensaje,int max)
{
	for (int i = 0; i < 10&&mensaje[i]!='\0'; ++i) {
		printf("%c",mensaje[i]);
	}
}

void listarMenu(char *array,int tam, int len)
{
	for (int i = 0; i < tam; ++i) {
		printf("%d - ",i);
		imprimirString(&array[i*len], len);
		printf("\n");
	}
}
