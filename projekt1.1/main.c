#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//Konstanten
#define ARRAY_LENGHT 4



int eingabe[ARRAY_LENGHT];




int arrayAusgeben() {
	for (int i = 0; i < ARRAY_LENGHT; i++)
	{
		printf("%i ", eingabe[i]);
	}
	printf("\n");
	return 0;
}

int main() {

	for (int i = 0; i < ARRAY_LENGHT; i++)
	{
		scanf("%i", &eingabe[i]);
	}

	int* eingabe2Pointer = &eingabe[2];
	arrayAusgeben();
	*eingabe2Pointer = 42;
	arrayAusgeben();


    return 0;
}