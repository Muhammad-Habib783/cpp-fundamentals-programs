#include <iostream>
using namespace std;

int main() {
    int rows = 7; // Number of rows in the pattern
    int cols = 5; // Number of columns in the pattern

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            // Logic to print the pattern of '7'
            if (i == 0 || // Top horizontal line
                (j == cols - 1 && i != rows - 1)) { // Right vertical line, excluding the last row
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}