//Program to print all negative elements in an array.
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
}
    cout << "Negative elements in the array are: ";
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) { 
            cout << arr[i] << " ";
        }
    }

    cout << endl;
    return 0;
}