#include <stdio.h>
#include <conio.h>
#include <locale.h>

//Autor: Edwin Rondón, C.I.: V-31.157.974, Trayecto II, Sección 01.
//Ejercicio N° 4 de Paradigmas de programación.

int main()
{
	setlocale(LC_ALL, "");
	int n;
	float precio, IVA, descuento = 0, ttl, precio_bruto;
	
	printf("Ingresar el precio del artículo:");
	scanf("%f", &precio);
	printf("Ingresar la cantidad a comprar:");
	scanf("%d", &n);
	
	precio_bruto = precio * n;
	IVA = precio_bruto * .12;
	ttl = precio_bruto + IVA;
	
	if(ttl > 50000)
	{
		descuento = ttl * .05;
	}
	
	printf("Precio bruto: %f\n", precio_bruto);
	printf("IVA: %f\n", IVA);
	printf("Descuento: %f\n", descuento);
	printf("Total a pagar: %f\n", ttl - descuento);
	
	getch();
	
	return(0);
}
