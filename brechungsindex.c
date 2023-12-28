/* brechungsindex.c
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
#include "brechungsindex.h"
#define Lichtgeschwindigkeit (299792458)

// Mit brechungsindex beginnt das Programm.
void brechungsindex()
{
	// Variablen definieren
	float cM = 0;
	float nM = 0;
	double a = 0;
	
	// Durch die While-Schleife kann das Programm mehrmals ausgefuert werden.
	while(a == 0)
	{
		printf("\nBitte gib die Lichtgeschwindigkeit im Material an: \n");
		a = scanf("%f", &cM);
		fflush(stdin);
	}
	// Berechnung des Resultats samt ausgabe.
	if(cM < 0)
	{
		printf("\nVorsicht! Dies ist ein Spezialfall. Damit dies geht muss das Licht an einem Punkt angehalten werden. Im Anschluss daran muss ein Medium eingesetzt werden und das Licht in die andere Richtung zurueckgeschickt werden!\n\n");
		
		nM = Lichtgeschwindigkeit / cM; 
		
		printf("Das Ergebnis der Berechnung ist: %f\n\n", nM); 	
	}
	
	else if(cM == 0)
	{
		printf("\nVorsicht! Dies ist ein Spezialfall! Damit dies geht muss das Licht an einem Punkt angehalten werden. Dies geht ueber eine beliebig lange Zeitspanne.\n\n");
	}
	
	else
	{
		nM = Lichtgeschwindigkeit / cM; 
			
		printf("\nDas Ergebnis der Berechnung ist: %f\n\n", nM); 
	}
	
    return;
}
