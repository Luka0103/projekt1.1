#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//Constanten
#define MAX_EINGABE 40

char eingabe[MAX_EINGABE];
char vokale[] = { 'a','e','i','o','u','A','E','I','O','U' };
int anzahlVokale = 0;
int main() {
    for (int i = 0; i < MAX_EINGABE; i++)   //Nicht gut besser wäre scanf mit %s aber nimmt moodle nicht
    {
        scanf("%c", &eingabe[i]);
    }

    for (int i = 0; i < MAX_EINGABE; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (eingabe[i] == vokale[j]) {
                anzahlVokale++;
            }
        }
    }
    printf("%i Vokale", anzahlVokale);
    
    return 0;
}
