#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//Constanten
#define MAX_EINGABE 40

char eingabe[MAX_EINGABE];
int main() {
    scanf("%s", eingabe);

    for (int i = MAX_EINGABE; i >= 0; i--)
    {
        if (eingabe[i] != '\x00') {
            printf("%c", eingabe[i]);
        }
    }
    return 0;
}
