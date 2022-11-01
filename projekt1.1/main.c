#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//Constanten
#define MAX_EINGABE 40

char eingabe[MAX_EINGABE];
int startIndex;
int endIndex;
char ausgabe[MAX_EINGABE];
int zaehler=0;
int main() {
    scanf("%s %i %i", eingabe,&startIndex,&endIndex);

    for (int i = startIndex; i <= endIndex; i++)
    {
        ausgabe[zaehler] = eingabe[i];
        zaehler++;
    }

    printf("%s %i-%i: %s", eingabe,startIndex,endIndex,ausgabe);
    return 0;
}
