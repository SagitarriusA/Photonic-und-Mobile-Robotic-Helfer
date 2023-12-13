/* totalreflektion.c
Das Programm soll ein Helfer fuer Photonics und Mobile Robotics Studenten sein.
Autor: Julian Walter, York Willmann
Firma: FHGR
Version: 0.1
Datum: 4.12.2023
Änderungen: 
1.0_6.12.2023 Erste Version 
*/

// Einbinden von Headerdateien der Programmbibliothek.
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include "totalreflektion.h"
#define Pi (3.141592654)

void totalreflektion(void) {				
//~~~~~~~~~~~~~~~~~~~~~~~~Variablen~~~~~~~~~~~~~~~~~~~~~~~~
	double  n1 = 0;			//Brechzahl 1. Medium
	double  n2 = 0;			//Brechzahl 2. Medium
	double  Tk = 0;  		//Winkel Theta
	double  val = 0;  		//Zwischenspeicher
	double  ergebnis = 0;  	//Ergebnis
	int a = 0; 				//Abfrage Berechnung 
//~~~~~~~~~~~~~~~~~~~~~~~~Abfrage~~~~~~~~~~~~~~~~~~~~~~~~
	printf("\033[0;32m\nBitte geben sie vorhandene Werte an.\nFür den zu berechnende Wert MUSS 0 angegeben werden! \033[0m\n");
	//Brechzahl 1. Medium
	printf("\nBitte gib eine Brechzahl n1 an: \n");
	scanf("%lf", &n1);
	fflush(stdin);
	//Brechzahl 2. Medium
	printf("\nBitte gib eine Brechzahl n2 an: \n");
	scanf("%lf", &n2);
	fflush(stdin);
	//Winkel Theta
	printf("\nBitte gib eine Winkel Tk an: \n");
	scanf("%lf", &Tk);
	fflush(stdin);
//~~~~~~~~~~~~Berechnung der Formelumstellung~~~~~~~~~~~~
	if(n1 == 0 && n2 > 0 && Tk > 0){
		a = 2;
		printf("Sie haben sich für die Brechzahl n1 entschieden");
	}
	else if(n2 == 0 && n1 > 0 && Tk > 0){
		a = 3;
		printf("Sie haben sich für die Brechzahl n2 entschieden");
		}
	else if(Tk == 0 && n2 > 0 && n1 > 0){
		a = 1;
		printf("Sie haben sich für den Winkel Tk entschieden");
		}
	else{
		printf("\033[0;32m\nVERPISS DICH, DU LUMP!\033[0m\n\n");
	}
	
//~~~~~~~~~~~~~~~~~~~~~~~~Ausgabe~~~~~~~~~~~~~~~~~~~~~~~~
switch(a){

	case 1:							//Winkel Totalreflektion
		if(n1 > n2){				//Formel ist berechebar 
			val = n2 / n1;
			ergebnis = (asin(val))*180/Pi;
			printf("\nDer Winkel der Totalreflexion beträgt: %lf\n\n", ergebnis);
		}

		else{						//Abbruchbedingung
		
			printf("\nDie erste Brechungszahl muss groesser als die zweite Brechungszahl sein!\n\n");
		}
		break;

	case 2:							//Brechzahl 1
		val = Tk*(Pi/180);			//Berechnung Winkel
		ergebnis = (sin(val))/n2;
		printf("\nDie  Brechungszahl n1 beträgt: %lf\n\n", ergebnis);
		break;

	case 3:							//Brechzahl 2
		val = Tk*(Pi/180);			//Berechnung Winkel
		ergebnis = (sin(val))*n1;
		printf("\nDie  Brechungszahl n2 beträgt: %lf \n\n", ergebnis);
		break;
}
return;
}

