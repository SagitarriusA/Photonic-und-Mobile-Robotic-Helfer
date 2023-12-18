#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Funktion, um die Wahl des Computers zu generieren
int computerAuswahl() 
{
    return rand() % 3;  // Generiere eine Zufallszahl zwischen 0 und 2
}

// Funktion, um das Spiel zu bewerten und den Gewinner zu bestimmen
int bewerteSpiel(int spieler, int computer) 
{
    if (spieler == computer) 
	{
        return 0;  // Unentschieden
    } 
	else if ((spieler == 0 && computer == 2) || (spieler == 1 && computer == 0) || (spieler == 2 && computer == 1)) {
        return 1;  // Spieler gewinnt
    } 
	else 
	{
        return -1;  // Computer gewinnt
    }
}

// Funktion, um zu überprüfen, ob der Benutzer nochmal spielen möchte
int nochmalSpielen() 
{
    char antwort;

    // Benutzer auffordern, ob er nochmal spielen möchte
    printf("Moechtest du nochmal spielen? (j/n) ");
    scanf(" %c", &antwort);  // Beachte das Leerzeichen vor %c, um Whitespaces zu ignorieren

    return (antwort == 'j' || antwort == 'J');
}

void SSP(void) 
{
    int spielerWahl, computerWahl, ergebnis;
    srand(time(NULL));  // Initialisiere den Zufallszahlengenerator mit der aktuellen Zeit

    do {
        // Spieler auffordern, eine Wahl zu treffen
        printf("Schere (0), Stein (1) oder Papier (2)? ");
        
        // Benutzereingabe als Zahl erfassen
        if (scanf("%d", &spielerWahl) != 1) {
            printf("Ungültige Eingabe. Bitte gib eine Zahl zwischen 0 und 2 ein.\n");
            // Leere den Eingabepuffer, um unerwünschte Zeichen zu entfernen
            while (getchar() != '\n');
            continue;  // Springe zurück zum Anfang der Schleife
        }

        // Überprüfe, ob die Eingabe des Spielers gültig ist
        if (spielerWahl < 0 || spielerWahl > 2) {
            printf("Ungültige Eingabe. Bitte wähle zwischen 0 und 2.\n");
            continue;  // Springe zurück zum Anfang der Schleife
        }

        // Generiere die Wahl des Computers
        computerWahl = computerAuswahl();

        // Zeige die Wahl des Computers an
        printf("Der Computer hat ");
        if (computerWahl == 0) {
            printf("Schere");
        } else if (computerWahl == 1) {
            printf("Stein");
        } else {
            printf("Papier");
        }
        printf(" gewaehlt.\n");

        // Bewertung des Spiels
        ergebnis = bewerteSpiel(spielerWahl, computerWahl);

        // Zeige das Ergebnis an
        if (ergebnis == 0) {
            printf("Unentschieden!\n");
        } else if (ergebnis == 1) {
            printf("Herzlichen Glueckwunsch, du gewinnst!\n");
        } else {
            printf("Schade, der Computer gewinnt. Versuche es erneut!\n");
        }

    } while (nochmalSpielen());

    // Verabschiedung
    printf("Vielen Dank fuers Spielen. Auf Wiedersehen!\n");

    return 0;  // Beende das Programm erfolgreich
}