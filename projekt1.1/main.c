#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//Constanten
#define MAX_EINGABE 40

char eingabe[MAX_EINGABE];
char vokale[] = { 'a','e','i','o','u','A','E','I','O','U' };
int main() {
    for (int i = 0; i < MAX_EINGABE; i++)   //Nicht gut besser wäre scanf mit %s aber nimmt moodle nicht
    {
        scanf("%c", &eingabe[i]);           //eingabe0 == ersatz eingabe1== leerzeichen
    }

    for (int i = 2; i < MAX_EINGABE; i++)   //start bei eingabe2
    {
        for (int j = 0; j < 10; j++)
        {
            if (eingabe[i] == vokale[j]) {
                eingabe[i] = eingabe[0];
            }
        }
    }
    for (int i = 2; i < MAX_EINGABE; i++)
    {
        if (eingabe[i] != '\x00') {
            printf("%c", eingabe[i]);
        }
        
    }
    return 0;
}
