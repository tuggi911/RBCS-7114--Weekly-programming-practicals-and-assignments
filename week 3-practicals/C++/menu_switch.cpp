#include <iostream>
using namespace std;

int main() {

    int choice;

    cout << "Menu:\n";
    cout << "1. Start\n";
    cout << "2. Load\n";
    cout << "3. Settings\n";
    cout << "4. Exit\n";
    cout << "Choice: ";

    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Starting game..." << endl;
            break;

        case 2:
            cout << "Loading game..." << endl;
            break;

        case 3:
            cout << "Opening settings..." << endl;
            break;

        case 4:
            cout << "Exiting..." << endl;
            break;

        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}