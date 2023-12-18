/* brechungsindex.c
Das Programm soll ein Helfer fuer Photonics und Mobile Robotics Studenten sein.
Autor: Emrah, Simon
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
#define C (3.0e8) // C ist Lichtgeschwindigkeit. (3.0e8 bedeutet 300000000 m/s)

void elektromagnetischesSpektrum(void)
{
	double wellenlaenge;
	double frequenz = C / wellenlaenge;
	double a = 0;
	char ja[3] = "ja";
	char Ja[3] = "Ja";
	char weitereRechnungSpektrum[3] = "ja";
	
	while(strcmp (weitereRechnungSpektrum, ja) == 0 || strcmp (weitereRechnungSpektrum, Ja) == 0)
	{
		while(a == 0)
		{
			printf("Bitte Geben Sie die Wellänge des Licht ein (in Meter) : \n");
			a = scanf("%lf",&wellenlaenge);
			fflush(stdin);
		}
		
		if(wellenlaenge <= 0)
		{
			printf("Ga hei! Wellenlaenge cha noed chliner als 0 si!\n");
		}
		else
		{
			if(wellenlaenge  >= 1 && wellenlaenge <= 1e5)
			{
			printf("Das Licht Strahl im Bereich der Radiowellen. \n");
			}
			
			else if(wellenlaenge >= 1e-3 && wellenlaenge <= 1)
			{
				printf("Das Licht Strahl im Bereich der Mikrowellen.\n");
			}
			
			else if(wellenlaenge >= 7e-7 && wellenlaenge <= 1e-3)
			{
				printf("Das Licht Strahl im Bereich der Infrarotstrahlung.\n");
			}
			
			else if(wellenlaenge >= 620e-9 && wellenlaenge <= 750e-9)
			{
				printf("Das Licht Strahl im Sichtbares Bereich Rotes Licht.\n");
			}
			
			else if(wellenlaenge >= 590e-9 && wellenlaenge <= 620e-9)
			{
				printf("Das Licht Strahl im Sichtbares Bereich Orange Licht.\n");
			}
			
			else if(wellenlaenge >= 570e-9 && wellenlaenge <= 590e-9)
			{
				printf("Das Licht Strahl im Sichtbares Bereich Gelb Licht.\n");
			}
			else if(wellenlaenge >= 520e-9 && wellenlaenge <= 570e-9)
			{
				printf("Das Licht Strahl im Sichtbares Bereich Grün Licht.\n");
			}
			
			else if(wellenlaenge >= 450e-9 && wellenlaenge <= 520e-9)
			{
				printf("Das Licht Strahl im Sichtbares Bereich Orange Licht.\n");
			}
			
			else if(wellenlaenge >= 380e-9 && wellenlaenge <= 450e-9)
			{
				printf("Das Licht Strahl im Sichtbares Bereich Blau-Violett Licht.\n");
			}
			
			else if(wellenlaenge >= 10e-9 && wellenlaenge <= 400e-9)
			{
				printf("Das Licht Strahl im Bereich der Ultraviolettstrahlung. \n");
			}
			
			else if(wellenlaenge >= 0,01e-9 && wellenlaenge <= 10e-9)
			{
				printf("Das Licht Strahl im Bereich der Röntgenstrahlung. \n");
			}
			
			else if(wellenlaenge >= 0,001e-9 && wellenlaenge <= 0,01e-9)
			{
				printf("Das Licht Strahl im Bereich der GammaStrahlung. \n");
			}

			printf(" Frequenz : %lf Hz \n", frequenz);
			printf(" Wellenlaenge : %lf Meter\n", wellenlaenge);

			printf(" \n"); 
		}
		
		printf("\nWillst du eine weitere Rechnung im Elektromagnetischen Spektrum durchfueren? Wenn ja, dann schreibe ja oder Ja.\n");
		scanf("%s", weitereRechnungSpektrum);
		fflush(stdin);
		
		a = 0;
		
		system("cls");
	}
	
    return;
}
