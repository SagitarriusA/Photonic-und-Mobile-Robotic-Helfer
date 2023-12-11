/* brechungsindex.c
Das Programm soll ein Helfer fuer Photonics und Mobile Robotics Studenten sein.
Autor: Julian Walter, York Willmann
Firma: FHGR
Version: 0.1
Datum: 4.12.2023
Änderungen: 
1.0_4.12.2023 Erste Version 
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include "elektromagnetischesSpektrum.h"

void elektromagnetischesSpektrum()
{
	double a = 0;
	int c = 0;
	char ja[3] = "ja";
	char Ja[3] = "Ja";
	int formel = 0;
	char reg[3] = "no";
	char weitereRechnungSpektrum[3] = "ja";
	
	while(strcmp (weitereRechnungSpektrum, ja) == 0 || strcmp (weitereRechnungSpektrum, Ja) == 0)
	{
		while(a == 0)
		{
			printf("\nFunktioniert das Programm? Schreibe 1.\n");
			a = scanf("%f", &c);
			fflush(stdin);
		}
		
		printf("\nWillst du eine weitere Rechnung im Elektromagnetischen Spektrum durchfueren? Wenn ja, dann schreibe ja oder Ja.\n");
		scanf("%s", weitereRechnungSpektrum);
		fflush(stdin);
		
		formel = 0;
		a = 0;
		
		system("cls");
	}
	
    return;
}
