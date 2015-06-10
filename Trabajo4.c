/*
	Nombre: Ricardo Gonzalez Fernandez
	RUN: 19.291.921-5
	Tarea Número: 4
*/
#include <stdio.h>  // biblioteca standar I/O.

// Si desea cambiar el tamaño de la palabra es necesario poner como valor de N el numero sucesor a la cantidad de letras de la palabra ingresada.
// ejemplo .. la palabra posee 5 caracteres (kajak) N = 6
#define N 6

int main (){
	char arr[N]="kajak";
	int cant = N -1;
	int i=0;
	int j=cant;
	int mit=0;
	int ac=0;
	int k = 0;
	mit = cant%2;


	// si es una palabra con una cantidad par de letras
	if (mit==0){
		for (i = 0; i < cant; ++i){
			for (k = 0; k <= cant; ++k){
				if (arr[i] == arr[k]){
					ac=ac+1;
				}
			}
			ac= ac%2;
			if (ac != 0){
				printf("0" );
				return 0;
			}

		}
		printf("1" );
	}

	// Si es una palabra con una cantidad impar de letras
	if (mit!=0){
		for (i = 0; i < cant; ++i){
			for (k = 0; k <= cant; ++k){
				if (arr[i] == arr[k]){
					ac=ac+1;
				}
			}
			

		}
		// Intenté encontrar una relacion en la suma de caracteres y la cantidad de veces que se repite en la palabra.
		// ejemplo: (kajak = 2 2 1 2 2) y descubrí una cadena .. (1,5,9,13.....) (n4+1) 
		ac= ac -1;
		ac = ac%4;
		if (ac == 0){
			printf("1");
		}
		else{
			printf("0");
		}
		
	}
	
}
