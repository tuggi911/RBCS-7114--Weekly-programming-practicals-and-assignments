#include <iostream>
#include <iomanip>
#include <string>
#include <limits>
using namespace std;

int main() {

    int numberOfStudents;
    int countA = 0, countB = 0, countC = 0;
    int countD = 0, countF = 0;

    cout << "===== CLASS GRADE CALCULATOR =====" << endl;
    cout << "How many students? ";
    cin >> numberOfStudents;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int i = 1; i <= numberOfStudents; i++) {

        string studentName;
        double score;
        char grade;
        char modifier = ' ';

        cout << "\nStudent " << i << endl;

        cout << "Enter student name: ";
        getline(cin, studentName);

        cout << "Enter percentage score (0-100): ";
        cin >> score;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        if (score < 0 || score > 100) {
            cout << "Invalid score! Try again." << endl;
            i--;
            continue;
        }

        // Determine base grade
        if (score >= 90) {
            grade = 'A';
            countA++;
        } else if (score >= 80) {
            grade = 'B';
            countB++;
        } else if (score >= 70) {
            grade = 'C';
            countC++;
        } else if (score >= 60) {
            grade = 'D';
            countD++;
        } else {
            grade = 'F';
            countF++;
        }

        // Determine plus or minus
        int lastDigit = (int)score % 10;

        if (grade == 'A') {
            if (score >= 97)
                modifier = '+';
            else if (score < 93)
                modifier = '-';
        } else if (grade != 'F') {
            if (lastDigit >= 7)
                modifier = '+';
            else if (lastDigit <= 2)
                modifier = '-';
        }

        // Display student report
        cout << "\n===== STUDENT REPORT =====" << endl;
        cout << "Name: " << studentName << endl;
        cout << "Score: " << fixed << setprecision(1) << score << "%" << endl;
        cout << "Grade: " << grade;

        if (modifier != ' ')
            cout << modifier;

        cout << endl;

        // Personalised message
        switch (grade) {
            case 'A':
                cout << "Excellent work!" << endl;
                break;
            case 'B':
                cout << "Good job!" << endl;
                break;
            case 'C':
                cout << "Satisfactory." << endl;
                break;
            case 'D':
                cout << "Needs improvement." << endl;
                break;
            case 'F':
                cout << "Please seek help." << endl;
                break;
        }
    }

    // Display class summary
    cout << "\n===== CLASS SUMMARY =====" << endl;
    cout << "Grade A: " << countA << endl;
    cout << "Grade B: " << countB << endl;
    cout << "Grade C: " << countC << endl;
    cout << "Grade D: " << countD << endl;
    cout << "Grade F: " << countF << endl;

    return 0;
}
