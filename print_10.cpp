#include <iostream>
using namespace std;

int main() {
    int rows = 7; // Number of rows in the pattern
    int cols = 5; // Number of columns in the pattern

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            // Logic to print the pattern of '1'
            if (j == 1 || // Vertical line of '1' (middle column)
                (i == 0 && j > 0 && j < cols - 1)) { // Top horizontal line of '1'
                cout << "*";
            } else {
                cout << " ";
            }
        }
        
        // Logic to print the pattern of '0'
        for (int j = cols; j < 2 * cols; j++) {
            if ((i == 0 && j > cols && j < 2 * cols - 1) || // Top horizontal line of '0'
                (i == rows - 1 && j > cols && j < 2 * cols - 1) || // Bottom horizontal line of '0'
                (j == cols && i != 0 && i != rows - 1) || // Left vertical line of '0'
                (j == 2 * cols - 1 && i != 0 && i != rows - 1)) { // Right vertical line of '0'
                cout << "*";
            } else {
                cout << " ";
            }
        }

        cout << endl;
    }

    return 0;
}