/*
 ============================================================================
 Name        : EstrellaFernandez_UF1268_Ej2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "funcionesEx.h"

int main(void) {
	int unidades3x2;
	int unidades80;
	float precioUnitario;

	float precio3p2, precio2u80p;
	printf("Introduce unidades de 3x2: ");
	fflush(stdout);
	scanf("%d",&unidades3x2);

	printf("Introduce unidades 80%%: ");
	fflush(stdout);
	scanf("%d",&unidades80);

	printf("Introduce el precio unitario: ");
	fflush(stdout);
	scanf("%f",&precioUnitario);

	precio3p2=precio3x2(precioUnitario,unidades3x2);
	precio2u80p=precio2Unidad80p(precioUnitario,unidades80);

	printf("Comprando %d unidades en 3x2 sale el total a: %.2f. Precio unitario: %.2f "
			"y %d unidades en segunda unidad al 80%% a: %.2f. Precio Unitario: %.2f",
			unidades3x2,precio3p2,precio3p2/unidades3x2,
			unidades80,precio2u80p,precio2u80p/unidades80);
}
