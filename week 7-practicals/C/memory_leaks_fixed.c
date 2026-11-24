// ============================================================
// ACTIVITY 3: FIXING MEMORY LEAKS (C VERSION)
// ============================================================

#include <stdio.h>
#include <stdlib.h>

void fixLeak() {

    // Allocate memory for one integer
    int *ptr = (int*)malloc(sizeof(int));

    // Check whether allocation succeeded
    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }

    // Store a value
    *ptr = 42;

    printf("Inside fixed function. Value: %d\n", *ptr);

    // Release the allocated memory
    free(ptr);

    // Set pointer to NULL
    ptr = NULL;

    printf("Memory has been successfully freed.\n");
}

int main() {

    printf("--- Testing the Fix ---\n");

    fixLeak();

    return 0;
}