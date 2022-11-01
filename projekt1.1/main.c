#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//Constanten
#define MAX_EINGABE 40

char eingabe[MAX_EINGABE];
int main() {
    for (int i = 0; i < MAX_EINGABE; i++)   //Nicht gut besser wäre scanf mit %s aber nimmt moodle nicht
    {
        scanf("%c", &eingabe[i]);          
    }
    for (int i = 0; i < MAX_EINGABE; i++)
    {
        if (eingabe[i] > '\x60' && eingabe[i] < '\x7B') { //Kleinbuchstabe
            eingabe[i] = eingabe[i] - '\x20';
        }
        else if (eingabe[i] > '\x40' && eingabe[i] < '\x5B') {
            eingabe[i] = eingabe[i] + '\x20';
        }
    }
    printf("%s", eingabe);
    //char test = 'a';
    //char ja = test - '\x20';
    //printf("%c",ja);

    return 0;
}
