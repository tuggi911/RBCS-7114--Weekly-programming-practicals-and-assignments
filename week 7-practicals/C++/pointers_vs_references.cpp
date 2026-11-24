// ============================================================
// ACTIVITY 2: POINTERS VS REFERENCES
// ============================================================

#include <iostream>
using namespace std;

int main() {

    // Create a normal integer variable
    int originalValue = 100;

    // Create a reference to the original variable
    int& refValue = originalValue;

    // Create a pointer to the original variable
    int* ptrValue = &originalValue;

    cout << "--- Initial State ---" << endl;
    cout << "originalValue: " << originalValue << endl;
    cout << "refValue: " << refValue << endl;
    cout << "ptrValue points to: " << *ptrValue << endl;

    // Modification 1: Change value using reference
    refValue = 200;

    cout << "\n--- After setting refValue = 200 ---" << endl;
    cout << "originalValue: " << originalValue << endl;
    cout << "ptrValue points to: " << *ptrValue << endl;

    // Modification 2: Change value using pointer
    *ptrValue = 300;

    cout << "\n--- After setting *ptrValue = 300 ---" << endl;
    cout << "originalValue: " << originalValue << endl;
    cout << "refValue: " << refValue << endl;

    // Modification 3: Make pointer point to another variable
    int anotherValue = 500;
    ptrValue = &anotherValue;

    cout << "\n--- After pointing ptrValue to anotherValue ---" << endl;
    cout << "originalValue: " << originalValue << endl;
    cout << "ptrValue points to: " << *ptrValue << endl;

    return 0;
}