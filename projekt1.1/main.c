#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//Konstanten
#define ARRAY_LENGHT 4



int eingabe[ARRAY_LENGHT];
double summe=0;
double durchschnitt = 0;

int main() {
    
    for (int i = 0; i < ARRAY_LENGHT; i++)
    {
        scanf("%i", &eingabe[i]);
    }
    for (int i = 0; i < ARRAY_LENGHT; i++)
    {
        summe += eingabe[i];
    }

    durchschnitt = summe / ARRAY_LENGHT;
    

    printf("Summe: %i\nDurchschnitt: %lf", (int) summe,durchschnitt);

    return 0;
}
