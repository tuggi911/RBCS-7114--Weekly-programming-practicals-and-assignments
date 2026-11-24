// ============================================================
// ACTIVITY 4: DYNAMIC ARRAY WRAPPER (MINI-VECTOR)
// ============================================================

#include <iostream>
using namespace std;

class DynamicArray {

private:
    int* data;
    int size;
    int capacity;

public:

    // Constructor
    DynamicArray(int initialCapacity) {

        capacity = initialCapacity;
        size = 0;

        // Allocate memory for the array
        data = new int[capacity];
    }

    // Destructor
    ~DynamicArray() {

        // Release dynamically allocated memory
        delete[] data;
    }

    // Add a new element to the array
    void push_back(int value) {

        // Check whether the array is full
        if (size == capacity) {

            // Double the capacity
            int newCapacity = capacity * 2;

            // Allocate a larger array
            int* newData = new int[newCapacity];

            // Copy old elements into the new array
            for (int i = 0; i < size; i++) {
                newData[i] = data[i];
            }

            // Delete the old array
            delete[] data;

            // Update the pointer and capacity
            data = newData;
            capacity = newCapacity;

            cout << "[Resized capacity from "
                 << capacity / 2 << " to "
                 << capacity << "]" << endl;
        }

        // Add the new value
        data[size] = value;
        size++;
    }

    // Display the array
    void display() {

        cout << "Array (Size: " << size
             << ", Capacity: " << capacity << "): ";

        for (int i = 0; i < size; i++) {
            cout << data[i] << " ";
        }

        cout << endl;
    }
};

int main() {

    // Create an array with an initial capacity of 2
    DynamicArray myArray(2);

    cout << "Created dynamic array with capacity 2." << endl;

    // Add the first two elements
    myArray.push_back(10);
    myArray.push_back(20);
    myArray.display();

    // Add a third element to trigger resizing
    cout << "\nAdding third element..." << endl;
    myArray.push_back(30);
    myArray.display();

    // Add fourth and fifth elements
    cout << "\nAdding fourth and fifth elements..." << endl;

    myArray.push_back(40);
    myArray.push_back(50);

    myArray.display();

    // Destructor automatically releases memory
    return 0;
}