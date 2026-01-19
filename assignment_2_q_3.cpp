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
   // Initialize max and min with the first element
    int max = arr[0];
    int min = arr[0];
   // Find maximum and minimum elements
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i]; // Update maximum
        }
        if (arr[i] < min) {
            min = arr[i]; // Update minimum
        }
    }
    // Output the results
    cout << "Maximum element in the array is: " << max << endl;
    cout << "Minimum element in the array is: " << min << endl;
    return 0;
}