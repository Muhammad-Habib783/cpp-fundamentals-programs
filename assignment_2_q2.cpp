#include <iostream>
using namespace std;
int main() {
    int n, sum = 0;
 // Input the size of the array
    cout << "Enter the size of the array: ";
    cin >> n;
   int arr[n];
  // Input elements into the array
    cout << "Enter " << n << " elements: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
   // Calculate the sum of all elements
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    // Output the sum
    cout << "The sum of all elements in the array is: " << sum << endl;
   return 0;
}