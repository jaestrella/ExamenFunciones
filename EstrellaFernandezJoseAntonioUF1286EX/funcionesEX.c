/*
 * funcionesEX.c
 *
 *  Created on: 6 nov 2023
 *      Author: usuario
 */

float precio3x2(float precio,int cantidad){
	return (cantidad-cantidad/3)*precio;

}

float precio2Unidad80p(float precio,int cantidad){
	return precio*(cantidad-cantidad/2)+precio*0.8*cantidad/2;
}
