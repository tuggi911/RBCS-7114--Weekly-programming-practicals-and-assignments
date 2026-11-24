// ============================================================
// ACTIVITY 3: MEMORY LEAKS AND DELETE
// ============================================================

#include <iostream>
using namespace std;

// Function that creates a memory leak
void createLeak() {

    // Allocate memory dynamically
    int* ptr = new int(42);

    cout << "Inside function. The value is: " << *ptr << endl;
    cout << "Memory allocated at address: " << ptr << endl;

    // Memory leak: We do not delete the allocated memory.
}

// Function that fixes the memory leak
void fixLeak() {

    // Allocate memory dynamically
    int* ptr = new int(42);

    cout << "Inside fixed function. Value: " << *ptr << endl;
    cout << "Memory allocated at address: " << ptr << endl;

    // Release the allocated memory
    delete ptr;

    // Set pointer to nullptr
    ptr = nullptr;

    cout << "Memory has been successfully freed." << endl;
}

int main() {

    cout << "Calling function that leaks memory..." << endl;
    createLeak();

    cout << "\nFunction finished. The memory is now leaked." << endl;

    cout << "\n--- Testing the Fix ---" << endl;
    fixLeak();

    return 0;
}