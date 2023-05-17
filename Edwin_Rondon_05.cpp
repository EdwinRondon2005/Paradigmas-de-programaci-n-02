#include <stdio.h>
#include <conio.h>
#include <locale.h>

//Autor: Edwin Rondón, C.I.: V-31.157.974, Trayecto II, Sección 01.
//Ejercicio N° 5 de Paradigmas de programación.

int main()
{
	setlocale(LC_ALL, "");
	int d, dist;
	float cost;
	
	printf("Ingresar la distancia del viaje (en kilómetros):");
	scanf("%d", &dist);
	printf("Ingresar los días de estancia:");
	scanf("%d", &d);
	
	if(d > 7 && (dist * 2) > 800)
	{
		cost = (dist * 2 * 2.5 * 0.7);
		/*Aquí calculé el costo del billete en base a la ida y la vuelta. O sea,
		que según el problema, el coste del billete por kilómetro es de 2,5 bolívares
		así que un kilómetro son 2,5 bolívares. El precio de ida y vuelta sería de 
		5,0 bolívares.*/
	}
	else
	{
		cost = dist * 2 * 2.5;
	}
	
	printf("El costo del billete es de: %f\n", cost);
	
	getch();
	
	return(0);
}
