/* hangman.c
Das Programm soll ein Helfer fuer Photonics und Mobile Robotics Studenten sein.
Autor: Lenny,Morad,Ivan
Firma: FHGR
Version: 0.1
Datum: 18.12.2023
Änderungen: 
1.0_4.12.2023 Erste Version 
2.0_18.12.2023 Switch Befehlk eingefügt
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include "hangman.h"

//testkommentar
void hangman(void)
{
	char ja[3] = "ja";
	char Ja[3] = "Ja";
	char weitereGames[3] = "ja";
	
	while(strcmp (weitereGames, ja) == 0 || strcmp (weitereGames, Ja) == 0)
	{

		int menu = 0;
		printf("\n Press 1 for Hangman. \n");
		printf("\n Press 2 for. \n");

		scanf("%i", &menu);
		fflush(stdin);

		switch(menu)
	{
		case 1:
		hangman();
		break;

		case 2:
		SSP();
		break;

		default:
		printf("Ungueltige Eingabe.");

	}

		printf("Willst du eine weitere Partie spielen? Wenn ja, dann schreibe ja oder Ja.\n");
		scanf("%s", weitereGames);
		fflush(stdin);
		
		system("cls");
	}
	return;
}