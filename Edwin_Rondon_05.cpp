#include <stdio.h>
#include <conio.h>
#include <locale.h>

//Autor: Edwin Rond�n, C.I.: V-31.157.974, Trayecto II, Secci�n 01.
//Ejercicio N� 5 de Paradigmas de programaci�n.

int main()
{
	setlocale(LC_ALL, "");
	int d, dist;
	float cost;
	
	printf("Ingresar la distancia del viaje (en kil�metros):");
	scanf("%d", &dist);
	printf("Ingresar los d�as de estancia:");
	scanf("%d", &d);
	
	if(d > 7 && (dist * 2) > 800)
	{
		cost = (dist * 2 * 2.5 * 0.7);
		/*Aqu� calcul� el costo del billete en base a la ida y la vuelta. O sea,
		que seg�n el problema, el coste del billete por kil�metro es de 2,5 bol�vares
		as� que un kil�metro son 2,5 bol�vares. El precio de ida y vuelta ser�a de 
		5,0 bol�vares.*/
	}
	else
	{
		cost = dist * 2 * 2.5;
	}
	
	printf("El costo del billete es de: %f\n", cost);
	
	getch();
	
	return(0);
}
