#include <iostream>
using namespace std;
 
int main() {
    int n, key;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
 
    cout << "Enter the element to search: ";
    cin >> key;
 
    // Search for the element
    bool found = false;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            cout << "Element found at index " << i << endl;
            found = true;
            break;
        }
    }
 
    if (!found) {
        cout << "Element not found." << endl;
    }
 
    return 0;
}