#include <iostream>
using namespace std;

int main() {

    int age;
    bool hasTicket;
    bool isMember;
    bool isBanned;
    bool hasParent;

    cout << "Enter age: ";
    cin >> age;

    cout << "Do you have a ticket? (1 for yes, 0 for no): ";
    cin >> hasTicket;

    cout << "Are you a member? (1 for yes, 0 for no): ";
    cin >> isMember;

    cout << "Are you banned? (1 for yes, 0 for no): ";
    cin >> isBanned;

    cout << "Do you have a parent with you? (1 for yes, 0 for no): ";
    cin >> hasParent;

    bool canEnter = ((age >= 18 && hasTicket) || isMember)
                    && !isBanned
                    && (age >= 16 || hasParent);

    if (canEnter) {
        cout << "You can enter the event!" << endl;
    } else {
        cout << "Sorry, you cannot enter." << endl;
    }

    return 0;
}