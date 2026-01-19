#include <iostream>
using namespace std;

int main() {
    int rows = 7; 
    int cols = 5; // Number of columns in the pattern

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            // Logic to print the pattern of '3'
            if ((i == 0 && j > 0 && j < cols - 1) || // Top horizontal line
                (i == rows - 1 && j > 0 && j < cols - 1) || // Bottom horizontal line
                (i == rows / 2 && j > 0 && j < cols - 1) || // Middle horizontal line
                (j == cols - 1 && i != 0 && i != rows - 1 && i != rows / 2)) { // Vertical line on the right
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}