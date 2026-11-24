// ============================================================
// ACTIVITY 1: POINTER ARITHMETIC
// ============================================================

#include <iostream>
using namespace std;

int main() {

    // Declare and initialize an array
    int numbers[5] = {10, 20, 30, 40, 50};

    // Create a pointer to the first element
    int* ptr = numbers;

    cout << "Array elements accessed via pointer arithmetic:" << endl;

    // Access elements using pointer arithmetic
    for (int i = 0; i < 5; i++) {
        cout << "Value: " << *ptr << endl;
        ptr++;
    }

    // Reset pointer to the beginning
    ptr = numbers;

    cout << "\nAccessing using offset arithmetic:" << endl;

    // Access elements using pointer offsets
    for (int i = 0; i < 5; i++) {
        cout << "Index " << i << " has value: " << *(ptr + i) << endl;
    }

    return 0;
}