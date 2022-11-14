#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//Konstanten

int main() {
    int i;
    int* ptr;
    int** ptrptr;
    ptr = &i;
    ptrptr = &ptr;
    i = 1;
    printf("%i\n", i);
    printf("%i\n", *ptr);
    **ptrptr = 2;
    printf("%i\n", i);
    return 0;
}
