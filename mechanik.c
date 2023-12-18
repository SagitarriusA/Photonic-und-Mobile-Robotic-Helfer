/* Taschenrechner_mit_Operationszeichen.c
Das ist die Arbeit der Gruppe Mechanik
Autor: Tino Spescha, Maurus Kunfermann, Fabian Holzknecht
Firma: FHGR
Version: 0.1
Datum: 11.12.2023
0.1_11.12.2023 Erste Version
0.2_11.12.2023 minimaler Aufwand Impuls
0.3_12.12.2023 Kraft begonnen
0.4_16.12.2023 Energie und Leistung
0.5 17.12.2023 Statik
*/

// Einbinden von Headerdateien der Programmbibliothek.
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include "mechanik.h"
#include <windows.h>

// ANSI Escape Codes für Farben
#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"


char delta[] = "Δ";
char entspricht[] = ":=";
char entspricht3[] = "≡";
char tief1[] = "₁";
char hoch2[] = "²";
char eta[] = "η";
char quer[] = "o";
char rho[] = "ρ";
char eps[] = "Σ";
char Fschlange []="˜F";

void Statik()
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	printf("Der Druck als Kraft pro Fläche ist sowohl in der Technik als auch in der Natur von interesse:\n\n");

	printf("Druck als Kraft durch Flaeche:");
	SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
	printf("\t\t\t\tP = F%s / A\n",quer);
	SetConsoleTextAttribute(hConsole, 15);
	printf("Mit orthogonaler Kraft durch Flaeche.\n\n");

	printf("Das hydraulische Prinzip beschreibt die Verhaeltnisse der Kraefte und Flaechen an beiden beweglichen Stempeln..\n");
	SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
	printf("\t\t\t\t\t\t\tF1 / A1 = P = F2 / A2\n\n");
	SetConsoleTextAttribute(hConsole, 15);

	printf("Der Schweredruck einer Fluessigkeit ist:");
	SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
	printf("\t\tp = %s * g * h\n",rho);
	SetConsoleTextAttribute(hConsole, 15);
	printf("Mit der Dichte %s; tiefe h und fallbeschleunigung g\n\n",rho);

	printf("Zum Schluss die barometrische Hoehenformel:");
	SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
	printf("\t\tp(h) = p0 * a**((h-h0)/%s)\n", eps);
	SetConsoleTextAttribute(hConsole, 15);
	printf("Als Luftdruck abhaengig von einem Startluftruck in Abhaengigkeit der Hoehe h, a = 0.5 sowie %s = 5500 m\n",eps);
}

void Energie()

{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        printf("Wir unterscheiden drei Formen der Energie:\n\n");

        printf("Die Formel fuer die potentielle Energie lautet:");
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
        printf("\t\tEpot(h) = m * g * h\n");
        SetConsoleTextAttribute(hConsole, 15);
        printf("Zur Berechnung werden die Masse (m), die Hoehe (h) sowie die Fallbeschleunigung (g) benoetigt.\n\n");

        printf("Die Formel fuer die kinetische Energie lautet:");
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
        printf("\t\tEkin(v) = m / 2 * v%s\n", hoch2);
        SetConsoleTextAttribute(hConsole, 15);
        printf("Hinzugekommen ist hier die Geschwindigkeit (v).\n\n");

        printf("Die Formel fuer die elastische Energie lautet:");
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
        printf("\t\tEela(s) = D / 2 * (S-Sm)%s\n", hoch2);
        SetConsoleTextAttribute(hConsole, 15);
        printf("Mit der Federkonstante D, der Mittellage Sm sowie der ausgelenkten Position S der Feder.\n");

}



void Leistung()

{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        printf("Wir benoetigen zwei Formeln zur Leistung:\n\n");

        printf("Die Formel fuer die Leistung in einer Wechselwirkung:");
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
        printf("\tP = %sE / %st\n", delta, delta);
        SetConsoleTextAttribute(hConsole, 15);
        printf("Wobei es sich um die uebertragene Energie geteilt durch die benoetigte Zeit handelt.\n\n");

        printf("Die Formel fuer die Leistung einer Kraft:");
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
        printf("\t\tPk = Fk / v\n");
        SetConsoleTextAttribute(hConsole, 15);
        printf("Wobei es sich bei Fk um die Kraft und v um deren Geschwindigkeit handelt.\n\n");

        printf("Und zur Einschaetzung der Leistung, der Wirkungsgrad:");
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
        printf("\t %s = Nutzleistung / Verbrauchsleistung\n", eta);
        SetConsoleTextAttribute(hConsole, 15);

}


void Impuls()
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	printf("\n\nHallo schön hast du heute den Impuls gewählt!\n\n");
	printf("Hier die Formel für den Impuls:\t\t");
	SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
	printf("p=m*v\n");
	SetConsoleTextAttribute(hConsole, 15);
	printf("wobei p der Impuls ist\n");
	printf("m die Masse\n");
	printf("v die Geschwindigekit\n\n");
}

void Kraft()
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	printf("Hallo schön hast du heute die Kraft gewählt!\n\n");
	printf("Kraft in Wechselwirkung:\n");
	SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
	printf("F %s %sp / %st %s übertragener Impuls / benötigte Zeit\n\n", entspricht, delta, delta, entspricht3);
	SetConsoleTextAttribute(hConsole, 15);

	printf("Resultierende Kraft auf ein Objekt konstanter Masse\n");
	SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
	printf("F=m*a\n");
	SetConsoleTextAttribute(hConsole, 15);

	printf("Aktionsprinzip\n");
	SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
	printf("F %s %sp / %st %s = F%s + ... + Fn \n\n", entspricht, delta, delta, entspricht3, tief1);
	SetConsoleTextAttribute(hConsole, 15);

	printf("Wechselwirken zwei Objekte ausschliesslich miteinander, dann gilt für die resultierenden Kräfte F und ˜F die Beziehung:\n");
	SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
	printf("F = ˜F\n\n");
	SetConsoleTextAttribute(hConsole, 15);

	printf("Haftreibungskraft\n");
	SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
	printf("FR,H ≤ μH · FN\n\n");
	SetConsoleTextAttribute(hConsole, 15);

	printf("Gleitreibungskraft\n");
	SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
	printf("FR,G = μG · FN\n\n");
	SetConsoleTextAttribute(hConsole, 15);

	printf("Rollreibungskraft\n");
	SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
	printf("FR,R = μR · FN\n\n");
	SetConsoleTextAttribute(hConsole, 15);

	printf("Elastizitätskräfte\n");
	SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
	printf("Fela(s) = D · (s − sM)\n\n");
	SetConsoleTextAttribute(hConsole, 15);

	printf("Laminare Strömungswiderstandskraft\n");
	SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
	printf("Fv = 0.5 · cv · η · L · v\n\n");
	SetConsoleTextAttribute(hConsole, 15);

	printf("Turbulente Stromungswiderstandskraft");
	SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
	printf("Fw =0.5 · cw · ρ · A · v%s\n\n", hoch2);
	SetConsoleTextAttribute(hConsole, 15);
}

void mechanik()
{
	char ja[3] = "ja";
	char Ja[3] = "Ja";
	int thema = 0;
	char weiteresThema[3] = "ja";

	system("chcp 65001");
	// Durch die While-Schleife kann das Programm mehrmals ausgefuert werden.
	while(strcmp (weiteresThema, ja) == 0 || strcmp (weiteresThema, Ja) == 0)
	{
		//die Themaauswahl wird in dei Konsole geschriben
		printf("\nFür Impuls wähle die 1.\n");
		printf("Für Kraft wähle die 2.\n");
		printf("Für Energie wähle die 3.\n");
		printf("Für Leistung wähle die 4.\n");
		printf("Für Statik wähle die 5.\n");

		// Abfrage des gewuenschten Fachs.
		printf("\nWelches Thema willst du angezeigt bekommen:\n");
		scanf("%i" ,&thema);
		fflush(stdin);

		// Aufrufen des gewuenschten Fachs.
		switch(thema)
		{
			case 1:
				Impuls();
				break;
			case 2:
				Kraft();
				break;
			case 3:
				Energie();
				break;
			case 4:
				Leistung();
				break;
			case 5:
				Statik();
				break;
			default:
				printf("Der eingegebene Wert ist keinem Fach zugewiesen!\n\n");
				break;
		}

		// Abfrage ob eine weitere Rechnung durchgefuert werden soll.
		printf("Willst du dir eine weiteres Thema dir anschauen? Dann schreibe ja.\n");
		scanf("%s" ,&weiteresThema);
	}
	//Rueckgabewert, dass das Programm erfolgreich beendet wurde.
	return;
}
