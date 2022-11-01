#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//Constanten
#define ARRAY_DIM 4


int main(void) {
    double eingabenArray[ARRAY_DIM];
    double kleinsteEingabe;
    int index;
    for (int i = 0; i < ARRAY_DIM; i++)
    {
        scanf("%lf", &eingabenArray[i]);
    }
    kleinsteEingabe = eingabenArray[0];
    index = 0;
    for (int i = 0; i < ARRAY_DIM; i++)
    {
        if (kleinsteEingabe > eingabenArray[i]) {
            kleinsteEingabe = eingabenArray[i];
            index = i;
        }
    }

    printf("Kleinste Zahl: %0.1lf an Index %i", kleinsteEingabe, index);
    return 0;
}
