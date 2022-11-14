#include <stdio.h>
int main(int argc, char* argv[]) {
    int value = 42;
    int* pointerValue = &value;
    printf("%d\n", *pointerValue);
    *pointerValue = 85;
    printf("%d\n", *pointerValue);
    *pointerValue = *pointerValue + 1;
    printf("%d\n", *pointerValue);
    return 0;
}