#include <stdio.h>
#include <conio.h>
#include <locale.h>

//Autor: Edwin Rond�n, C.I.: V-31.157.974, Trayecto II, Secci�n 01.
//Ejercicio N� 2 de Paradigmas de programaci�n.

int main()
{
	setlocale(LC_ALL, "");
	int n;
	
	printf("Ingrese un n�mero:");
	scanf("%d", &n);
	
	if(n%2==0)
	{
		printf("%d es par\n", n);
	}
	else
	{
		printf("%d es impar\n", n);
	}	
	
	getch();
	
	return(0);
}
