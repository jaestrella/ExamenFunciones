/*
 ============================================================================
 Name        : EstrellaFernandezJoseAntonio_UF1286_Ej1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char caracter;
	int totalCaracteres=0;
	int totalVocales=0;
	int totalPalabras=1;
	int opcion;

	printf("Introduce el texto que quieras, deberás acabar con un intro.\n");

	do{
		fflush(stdout);
		scanf("%c",&caracter);
		totalCaracteres++;
		if(caracter=='a'||caracter=='e'||caracter=='i'||caracter=='o'||caracter=='u'){
			totalVocales++;
		}
		if(caracter==' '){
			totalPalabras++;
		}

	}while(caracter!='\n');

	totalCaracteres--;
	do{
		printf("Menú de opciones:\n");
		printf("1 - Número de caracteres\n");
		printf("2 - Número de vocales\n");
		printf("3 - Número de palabras\n");
		printf("¿Qué quieres que calcule (1-3)?:\n");
		fflush(stdout);
		scanf("%d",&opcion);
		switch(opcion){
			case 1:printf("Hay %d caracteres.\n",totalCaracteres);break;
			case 2:printf("Hay %d vocales.\n",totalVocales);break;
			case 3:printf("Hay %d palabras.\n",totalPalabras);break;
			default:printf("Error.Opcion no válida\n");
		}
	}while(opcion!=0);
}
