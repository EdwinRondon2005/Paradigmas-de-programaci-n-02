#include <stdio.h>
#include <conio.h>
#include <locale.h>

//Autor: Edwin Rondón, C.I.: V-31.157.974, Trayecto II, Sección 01.
//Ejercicio N° 1 de Paradigmas de programación.

int main()
{
	setlocale(LC_ALL, "");
	int a, b, c, d;
	
	printf("Ingrese el primer número:");
	scanf("%d", &a);
	printf("Ingrese el segundo número:");
	scanf("%d", &b);
	printf("Ingrese el tercer número:");
	scanf("%d", &c);
	printf("Ingrese el cuarto número:");
	scanf("%d", &d);
	
	if(a > b)
	{
		if(a > c)
		{
			if(a > d)
			{
				printf("El mayor es %d.\n", a);
			}
			else
			{
				printf("El mayor es %d.\n", d);
			}
			if(c > d)
			{
				printf("El mayor es %d.\n", c);
			}
			else
			{
				printf("El mayor es %d.\n", d);
			}
		}
	}
	if(b > c)
	{
		if(b > d)
		{
			printf("El mayor es %d.\n", b);
		}
		else
		{
			printf("El mayor es %d.\n", d);
		}
	}
	else
	{
		if(c > d)
		{
			printf("El mayor es %d.\n", c);
		}
		else
		{
			printf("El mayor es %d.\n", d);
		}
	}
	
	getch();
	
	return(0);
}
