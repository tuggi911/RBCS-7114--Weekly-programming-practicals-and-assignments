// ============================================================
// ACTIVITY 3: MEMORY LEAKS (C VERSION)
// ============================================================

#include <stdio.h>
#include <stdlib.h>

// Function that creates a memory leak
void createLeak() {

    // Allocate memory for one integer
    int *ptr = (int*)malloc(sizeof(int));

    // Check whether memory allocation succeeded
    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }

    // Store a value
    *ptr = 42;

    printf("Inside function. The value is: %d\n", *ptr);
    printf("Memory allocated at address: %p\n", (void*)ptr);

    // Memory leak: We do not free the allocated memory.
}

int main() {

    printf("Calling function that leaks memory...\n");

    createLeak();

    printf("Function finished. The memory is now leaked.\n");

    return 0;
}