#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//Constanten
#define MAX_EINGABE 10

int eingabe[MAX_EINGABE];
int pruefung;
int index=0;

int main() {
    for (int i = 0; i < MAX_EINGABE; i++)
    {
        scanf("%i", &pruefung);
        if (pruefung>0&&pruefung<7) {            //Ausgeführt wenn richtige Eingabe
            eingabe[i] = pruefung;
            index++;
        }
        else {
            break;
        }

    }

    double summe=0;
    double durchschnitt;

    for (int i = 0; i <= index; i++)
    {
        summe += eingabe[i];
    }
    if (index != 0) {
        durchschnitt = summe / index;
    }
    else {
        durchschnitt = 0;
    }
    

    printf("Durchschnitt (N=%i): %.2f", index, durchschnitt);
    
    return 0;
}
