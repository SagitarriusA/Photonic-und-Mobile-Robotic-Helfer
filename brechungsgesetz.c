/* brechungsgesetz.c
Das Programm soll ein Helfer fuer Photonics und Mobile Robotics Studenten sein.
Autor: Julian Walter, York Willmann
Firma: FHGR
Version: 0.1
Datum: 4.12.2023
Änderungen: 
1.0_4.12.2023 Erste Version 
*/

// Einbinden der Programmbibliotheken.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "brechungsgesetz.h"
#define Pi (3.141592654)

// Mit brechungsgesetz beginnt das Programm.
void brechungsgesetz()
{   
	// Variablen definieren  
	double T2 = 0;
	double n1 = 0;
	double n2 = 0;
	double t2 = 0;
	double val = 0;
	double ergebnis = 0;
	double a = 0;
	
	// Durch die While-Schleife kann das Programm mehrmals ausgefuert werden.
	while(a == 0)
	{
		printf("\nBitte gib einen Winkel Theta 2 an: \n");
		a = scanf("%lf", &T2);
		fflush(stdin);
	}
	
	// Berechnung des Resultats samt ausgabe.
	while(n1 < 1)
	{	
		printf("\nBitte gib die Brechzahl des inneren Materials an: \n");
		scanf("%lf", &n1);
		fflush(stdin);
	}
	
	while(n2 < 1)
	{
		printf("\nBitte gib die Brechzahl des aeusseren Materials an: \n");
		scanf("%lf", &n2);
		fflush(stdin);
	}
	
	if(n1 > n2)
	{
		t2 = T2*Pi/180;
		
		val = (n2*sin(t2))/n1;
		
		ergebnis = (asin(val))*180/Pi;
			
		printf("\nDer Winkel Theta 1 betraegt %lf \n\n", ergebnis);
	}
	
	else
	{
		printf("\nDie erste Brechungszahl muss groesser als die zweite Brechungszahl sein!\n\n");
	}	
    return;
}
   