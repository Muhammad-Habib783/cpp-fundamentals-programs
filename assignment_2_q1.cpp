#include <iostream>
using namespace std;
int main() {
    int n;
   // Input the size of the array
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    // Input elements into the array
    cout << "Enter " << n << " elements: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
     // Print negative elements
    cout << "Negative elements in the array are: ";
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) { // Check if the element is negative
            cout << arr[i] << " ";
        }
    }
    cout << endl;
    return 0;
}
