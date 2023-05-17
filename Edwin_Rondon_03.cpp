#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>
#define PI 3.141592

//Autor: Edwin Rondón, C.I.: V-31.157.974, Trayecto II, Sección 01.
//Ejercicio N° 3 de Paradigmas de programación.

int main()
{
	setlocale(LC_ALL, "");
	int opcion;
	float A, l, r, h, b;
	
	printf("\t\tMenú\t\t\n");
	printf("1. Cuadrado\n");
	printf("2. Triángulo\n");
	printf("3. Círculo\n");
	scanf("%d", &opcion);
	
	switch(opcion)
	{
		case 1:
		{
			printf("Ingresar un lado:");
			scanf("%f", &l);
			
			A = l * l;
			
			printf("El área del cuadrado es:%f\n", A);
			
			/* Para esta parte tomé como caso si todos los lados del cuadrado fueran iguales que es lo más común.
			Usé solo una variable "l" para el lado a ingresar.*/
			
			break;
		}
		case 2:
		{
			printf("Ingresar la base:");
			scanf("%f", &b);
			printf("Ingresar la altura:");
			scanf("%f", &h);
			
			A = (b * h / 2);
			
			printf("El área del triángulo es:%f\n", A);
			
			break;
		}
		case 3:
		{
			printf("Introduzca el radio:");
			scanf("%f", &r);
			
			A = PI * pow(r, 2);
			
			printf("El área del círculo es:%f\n", A);
			
			break;
		}
		
		default:
		
			printf("Ingrese una opción válida.\n");
			
			break;
	}
	
	getch();
	
	return(0);
}
