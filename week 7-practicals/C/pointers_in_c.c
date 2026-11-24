// ============================================================
// ACTIVITY 2: POINTERS IN C
// ============================================================

#include <stdio.h>

int main() {

    // Create a normal integer variable
    int originalValue = 100;

    // Create two pointers to the same variable
    int *ptr1 = &originalValue;
    int *ptr2 = &originalValue;

    printf("--- Initial State ---\n");
    printf("originalValue: %d\n", originalValue);
    printf("Value via ptr1: %d\n", *ptr1);

    // Modification 1: Change value using ptr1
    *ptr1 = 200;

    printf("\n--- After setting *ptr1 = 200 ---\n");
    printf("originalValue: %d\n", originalValue);
    printf("Value via ptr2: %d\n", *ptr2);

    // Modification 2: Change value using ptr2
    *ptr2 = 300;

    printf("\n--- After setting *ptr2 = 300 ---\n");
    printf("originalValue: %d\n", originalValue);
    printf("Value via ptr1: %d\n", *ptr1);

    // Modification 3: Make ptr1 point to another variable
    int anotherValue = 500;

    ptr1 = &anotherValue;

    printf("\n--- After pointing ptr1 to anotherValue ---\n");
    printf("originalValue: %d\n", originalValue);
    printf("Value via ptr1: %d\n", *ptr1);

    return 0;
}