#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//Constanten
#define MAX_EINGABE 40

char eingabe[MAX_EINGABE];
int anzahlKB = 0;
int main() {
    for (int i = 0; i < MAX_EINGABE; i++)   //Nicht gut besser wäre scanf mit %s aber nimmt moodle nicht
    {
        scanf("%c", &eingabe[i]);
    }

    for (int i = 0; i < MAX_EINGABE; i++)
    {
        if (eingabe[i] > '\x60' && eingabe[i] < '\x7B') {
            anzahlKB++;
        }
    }
    printf("%i Kleinbuchstaben", anzahlKB);
    
    return 0;
}
