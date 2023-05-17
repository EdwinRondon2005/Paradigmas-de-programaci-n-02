#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>
#define PI 3.141592

//Autor: Edwin Rond�n, C.I.: V-31.157.974, Trayecto II, Secci�n 01.
//Ejercicio N� 3 de Paradigmas de programaci�n.

int main()
{
	setlocale(LC_ALL, "");
	int opcion;
	float A, l, r, h, b;
	
	printf("\t\tMen�\t\t\n");
	printf("1. Cuadrado\n");
	printf("2. Tri�ngulo\n");
	printf("3. C�rculo\n");
	scanf("%d", &opcion);
	
	switch(opcion)
	{
		case 1:
		{
			printf("Ingresar un lado:");
			scanf("%f", &l);
			
			A = l * l;
			
			printf("El �rea del cuadrado es:%f\n", A);
			
			/* Para esta parte tom� como caso si todos los lados del cuadrado fueran iguales que es lo m�s com�n.
			Us� solo una variable "l" para el lado a ingresar.*/
			
			break;
		}
		case 2:
		{
			printf("Ingresar la base:");
			scanf("%f", &b);
			printf("Ingresar la altura:");
			scanf("%f", &h);
			
			A = (b * h / 2);
			
			printf("El �rea del tri�ngulo es:%f\n", A);
			
			break;
		}
		case 3:
		{
			printf("Introduzca el radio:");
			scanf("%f", &r);
			
			A = PI * pow(r, 2);
			
			printf("El �rea del c�rculo es:%f\n", A);
			
			break;
		}
		
		default:
		
			printf("Ingrese una opci�n v�lida.\n");
			
			break;
	}
	
	getch();
	
	return(0);
}
