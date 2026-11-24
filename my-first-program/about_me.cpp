
#include <iostream>
using namespace std;

int main() {

    // VARIABLE DECLARATIONS
    string name;
    string course;
    string hobby;
    string reason;
    string expectation;
    string definition;
    string favouriteFood;
    string dreamJob;

    // WELCOME MESSAGE
    cout << "========================================" << endl;
    cout << "   WELCOME TO YOUR FIRST PROGRAM!" << endl;
    cout << "========================================" << endl;
    cout << endl;

    // QUESTION 1: NAME
    cout << "1. What's your name? ";
    getline(cin, name);

    // QUESTION 2: COURSE
    cout << "2. What course are you doing? (BBIT/BCS): ";
    getline(cin, course);

    // QUESTION 3: HOBBY
    cout << "3. What's your hobby? ";
    getline(cin, hobby);

    // QUESTION 4: REASON
    cout << "4. Why did you choose this course? ";
    getline(cin, reason);

    // QUESTION 5: EXPECTATIONS
    cout << "5. What do you expect to learn in programming? ";
    getline(cin, expectation);

    // QUESTION 6: DEFINITION
    cout << "6. In your own words, what is programming? ";
    getline(cin, definition);

    // CHALLENGE 1: EXTRA QUESTIONS
    cout << "7. What's your favourite food? ";
    getline(cin, favouriteFood);

    cout << "8. What's your dream job? ";
    getline(cin, dreamJob);

    // CHALLENGE 2: NAME VALIDATION
    if (name.empty()) {
        cout << "You didn't enter a name!" << endl;
    }

    // DISPLAY PROFILE SUMMARY
    cout << endl;
    cout << "========================================" << endl;
    cout << "        YOUR PROFILE SUMMARY" << endl;
    cout << "========================================" << endl;
    cout << endl;

    cout << "Name:           " << name << endl;
    cout << "Course:         " << course << endl;
    cout << "Hobby:          " << hobby << endl;
    cout << "Reason:         " << reason << endl;
    cout << "Expectation:    " << expectation << endl;
    cout << "Programming is: " << definition << endl;
    cout << "Favourite food: " << favouriteFood << endl;
    cout << "Dream job:      " << dreamJob << endl;

    cout << endl;
    cout << "========================================" << endl;
    cout << "Great job, " << name
         << "! You are on your way to becoming a programmer!" << endl;
    cout << "========================================" << endl;

    return 0;
}
