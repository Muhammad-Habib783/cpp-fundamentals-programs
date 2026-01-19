#include <iostream>
using namespace std;

int main() {
    int rows = 7; // Number of rows in the pattern
    int cols = 5; // Number of columns in the pattern

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            // Logic to print the pattern of '4'
            if ((j == cols - 1) || // Right vertical line
                (i == rows / 2) || // Middle horizontal line
                (j == 0 && i < rows / 2)) { // Left vertical line at the top
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}