#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void hangman_spiel(void) 
{
    char word[100]; // Annahme: das Wort ist nicht länger als 99 Zeichen
    printf("Bitte geben Sie ein Wort ein: ");
    scanf("%s", word);
    
    // Terminal bereinigen
    #ifdef _WIN32
    system("cls");
    #else
    system("clear");
    #endif

    char display[strlen(word) + 1];
    memset(display, '_', strlen(word));
    display[strlen(word)] = '\0';
    int maxTries = 10;
    int tries = 0;
    int guessed = 0;

    while(tries < maxTries && !guessed) {
        printf("Bisher erraten: %s\n", display);
        printf("Buchstabe eingeben: ");
        char guess;
        scanf(" %c", &guess);

        int found = 0;
        for(int i = 0; i < strlen(word); i++) {
            if(word[i] == guess) {
                display[i] = guess;
                found = 1;
            }
        }

        if(!found) {
            tries++;
            printf("Falsch! Versuche übrig: %d\n", maxTries - tries);
        }

        if(strcmp(word, display) == 0) {
            guessed = 1;
        }
    }

    if(guessed) {
        printf("Gewonnen! Das Wort war: %s\n", word);
    } else {
        printf("Verloren! Das Wort war: %s\n", word);
    }

    return 0;
}
