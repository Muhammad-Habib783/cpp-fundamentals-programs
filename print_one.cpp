#include <iostream>
using namespace std;
int main() 
 {
    int rows = 7;
    int cols = 5; 

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) 
		{
            if (j == 2 || (i == 0 && j == 1) || (i == rows - 1 && j > 0 && j < cols - 1)) 
            {
                cout << "*";
            } 
            else 
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}