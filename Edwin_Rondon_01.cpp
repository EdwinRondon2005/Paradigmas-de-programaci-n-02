#include <stdio.h>
#include <conio.h>
#include <locale.h>

//Autor: Edwin Rond�n, C.I.: V-31.157.974, Trayecto II, Secci�n 01.
//Ejercicio N� 1 de Paradigmas de programaci�n.

int main()
{
	setlocale(LC_ALL, "");
	int a, b, c, d;
	
	printf("Ingrese el primer n�mero:");
	scanf("%d", &a);
	printf("Ingrese el segundo n�mero:");
	scanf("%d", &b);
	printf("Ingrese el tercer n�mero:");
	scanf("%d", &c);
	printf("Ingrese el cuarto n�mero:");
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
