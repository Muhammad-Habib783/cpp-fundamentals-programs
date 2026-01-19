#include <iostream>
using namespace std;

int main() {
    int rows = 7; // Number of rows in the pattern
    int cols = 5; // Number of columns in the pattern

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            // Logic to print the pattern of '8'
            if ((i == 0 && j > 0 && j < cols - 1) || // Top horizontal line
                (i == rows - 1 && j > 0 && j < cols - 1) || // Bottom horizontal line
                (i == rows / 2 && j > 0 && j < cols - 1) || // Middle horizontal line
                (j == 0 && i != 0 && i != rows - 1 && i != rows / 2) || // Left vertical line
                (j == cols - 1 && i != 0 && i != rows - 1 && i != rows / 2)) { // Right vertical line
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}