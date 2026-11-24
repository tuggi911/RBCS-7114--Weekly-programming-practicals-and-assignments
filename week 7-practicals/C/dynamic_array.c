// ============================================================
// ACTIVITY 4: DYNAMIC ARRAY WRAPPER (C VERSION)
// ============================================================

#include <stdio.h>
#include <stdlib.h>

// Structure to store dynamic array information
typedef struct {

    int *data;
    int size;
    int capacity;

} DynamicArray;

// Initialize the dynamic array
void initArray(DynamicArray *arr, int initialCapacity) {

    arr->capacity = initialCapacity;
    arr->size = 0;

    // Allocate memory for the array
    arr->data = (int*)malloc(arr->capacity * sizeof(int));

    if (arr->data == NULL) {
        printf("Failed to allocate memory.\n");
        exit(1);
    }
}

// Free the dynamic array memory
void freeArray(DynamicArray *arr) {

    free(arr->data);

    arr->data = NULL;
    arr->size = 0;
    arr->capacity = 0;
}

// Add a new element to the array
void push_back(DynamicArray *arr, int value) {

    // Check whether the array is full
    if (arr->size == arr->capacity) {

        // Double the capacity
        int newCapacity = arr->capacity * 2;

        // Allocate a larger array
        int *newData = (int*)malloc(newCapacity * sizeof(int));

        if (newData == NULL) {
            printf("Failed to allocate memory during resize.\n");
            return;
        }

        // Copy old elements into the new array
        for (int i = 0; i < arr->size; i++) {
            newData[i] = arr->data[i];
        }

        // Free the old array
        free(arr->data);

        // Update pointer and capacity
        arr->data = newData;
        arr->capacity = newCapacity;

        printf("[Resized capacity from %d to %d]\n",
               newCapacity / 2, newCapacity);
    }

    // Add the new value
    arr->data[arr->size] = value;
    arr->size++;
}

// Display the array contents
void display(DynamicArray *arr) {

    printf("Array (Size: %d, Capacity: %d): ",
           arr->size, arr->capacity);

    for (int i = 0; i < arr->size; i++) {
        printf("%d ", arr->data[i]);
    }

    printf("\n");
}

int main() {

    // Create the dynamic array
    DynamicArray myArray;

    // Initialize with capacity 2
    initArray(&myArray, 2);

    printf("Created dynamic array with capacity 2.\n");

    // Add the first two elements
    push_back(&myArray, 10);
    push_back(&myArray, 20);

    display(&myArray);

    // Add a third element to trigger resizing
    printf("\nAdding third element...\n");

    push_back(&myArray, 30);

    display(&myArray);

    // Add fourth and fifth elements
    printf("\nAdding fourth and fifth elements...\n");

    push_back(&myArray, 40);
    push_back(&myArray, 50);

    display(&myArray);

    // Release allocated memory
    freeArray(&myArray);

    return 0;
}