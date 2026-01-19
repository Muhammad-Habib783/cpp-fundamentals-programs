#include <iostream>
using namespace std;

int main() {
    int marks;
    char choice;

    do {
        // Input marks
        cout << "Enter your marks: ";
        cin >> marks;

        // Determine grade
        if (marks >= 90) {
            cout << "Grade: A" << endl;
        } else if (marks >= 80) {
            cout << "Grade: B" << endl;
        } else if (marks >= 70) {
            cout << "Grade: C" << endl;
        } else if (marks >= 60) {
            cout << "Grade: D" << endl;
        } else {
            cout << "Grade: F" << endl;
        }

        // Ask if the user wants to enter marks again
        cout << "Do you want to check another grade? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y'); // Continue if the user inputs 'y' or 'Y'

    return 0;
}

