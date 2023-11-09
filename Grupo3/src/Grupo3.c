/*
 ============================================================================
 Name        : Jaanpead.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main(void) {
	int dia;
	int adultos;
	int child;
	char palomitas;
	int cantidadPalomitas;
	float entradas=5;
	float p=3;
	char otrodia;
	do{
		puts("Cine: ");
		puts("1:Lunes ");
		puts("2:Martes ");
		puts("3:Miércoles: ");
		puts("4.Jueves: ");
		puts("5.Viernes: ");
		puts("6.Sábado: ");
		puts("Que día quieres:");

		fflush(stdout);
		scanf("%d",&dia);

		switch(dia){
			case 1:puts("2x1 en las entradas.");break;
			case 2:break;
			case 3:puts("Tu descuento es del 50% por entrada donde un niño tendría un 75% de descuento.");break;
			case 4:break;
			case 5:puts("Por cada 2 entradas, se regala una bolsa de palomitas.");break;
			case 6:break;
		}

		printf("Cuantos adultos vienen:\n ");
		fflush(stdout);
		scanf("%d",&adultos);

		printf("Cuantos niños vienen:\n ");
		fflush(stdout);
		scanf("%d",&child);

		puts("Quiere palomitas (s/n):\n ");
		fflush(stdin);
		fflush(stdout);
		scanf("%c",&palomitas);

		if (palomitas=='s'||palomitas=='S'){
			printf("Cuantas palomitas quieres:\n ");
			fflush(stdout);
			scanf("%d",&cantidadPalomitas);
		}else
			cantidadPalomitas=0;


		int normal=adultos+child;

		if(dia==3){
			printf("Tu factura es: %.2f €\n",diaEspectador(adultos,child,entradas,cantidadPalomitas,p));
		}else if(dia==5){
			printf("Tu factura es: %.2f €\n",palomitasDescuento(normal,cantidadPalomitas,entradas,p));
		}else if(dia==1){
			printf("Tu factura es: %.2f €\n",descuento2x1(normal,entradas,cantidadPalomitas,p));
		}else
			printf("Tu factura es: %.2f €\n",facturaCine(adultos,child,cantidadPalomitas));

		printf("Quiere reservar otro dia?:\n ");
		fflush(stdin);
		fflush(stdout);
		scanf("%c",&otrodia);
	}while(otrodia=='s');
}
