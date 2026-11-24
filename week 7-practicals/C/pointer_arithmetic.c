// ============================================================
// ACTIVITY 1: POINTER ARITHMETIC (C VERSION)
// ============================================================

#include <stdio.h>

int main() {

    // Declare and initialize an array
    int numbers[5] = {10, 20, 30, 40, 50};

    // Create a pointer to the first element
    int *ptr = numbers;

    printf("Array elements accessed via pointer arithmetic:\n");

    // Access elements using pointer arithmetic
    for (int i = 0; i < 5; i++) {

        printf("Value: %d\n", *ptr);

        ptr++;
    }

    // Reset pointer to the beginning
    ptr = numbers;

    printf("\nAccessing using offset arithmetic:\n");

    // Access elements using pointer offsets
    for (int i = 0; i < 5; i++) {

        printf("Index %d has value: %d\n", i, *(ptr + i));
    }

    return 0;
}