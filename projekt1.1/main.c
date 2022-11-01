#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//Constanten

int teilbar(int zahl1, int zahl2) {//1 wenn teilbar ohne rest 0 wenn nicht
    if (zahl1 % zahl2 == 0) {
        return 1;
    }
    else {
        return 0;
    }
}

int main() {
    int n=0,m = 0;
    int schreibzahl=0;
    scanf("%i %i", &n, &m);

    for (int i = 1; i <= 200; i++)
    {
        schreibzahl = 1;
        if (teilbar(i, n)) {
            printf("fizz");
            schreibzahl = 0;
        }
        if(teilbar(i, m)) {
            printf("buzz");
            schreibzahl = 0;
        }
        if(schreibzahl) {
            printf("%i", i);
        }
        printf("\n");
    }

    return 0;
}


