#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void) {
    int groesse;
    scanf("%i", &groesse);
    for (int i = 0; i < groesse; i++)
    {
        for (int j = 0; j < groesse; j++)
        {
            //letze oder erste zeile
            if (i == 0 || i == groesse - 1) {
                printf("*");
            }
            else if (j == 0 || j == groesse - 1) {
                printf("*");
            }
            else if (i-j==0||i+j==groesse-1) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
