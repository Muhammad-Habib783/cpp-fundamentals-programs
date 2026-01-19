#include <iostream>
using namespace std;

void mergeArrays(int arr1[], int n1, int arr2[], int n2, int merged[]) {
    int i = 0, j = 0, k = 0;

    // Merge elements from both arrays
    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }

    // Copy remaining elements from arr1
    while (i < n1) {
        merged[k++] = arr1[i++];
    }

    // Copy remaining elements from arr2
    while (j < n2) {
        merged[k++] = arr2[j++];
    }
}

int main() {
    int n1, n2;

    // Input size and elements of the first sorted array
    cout << "Enter the size of the first sorted array: ";
    cin >> n1;
    int arr1[n1];
    cout << "Enter " << n1 << " elements of the first sorted array: ";
    for (int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }

    // Input size and elements of the second sorted array
    cout << "Enter the size of the second sorted array: ";
    cin >> n2;
    int arr2[n2];
    cout << "Enter " << n2 << " elements of the second sorted array: ";
    for (int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }

    // Array to store the merged result
    int merged[n1 + n2];
    mergeArrays(arr1, n1, arr2, n2, merged);

    // Display the merged sorted array
    cout << "Merged sorted array: ";
    for (int i = 0; i < n1 + n2; i++) {
        cout << merged[i] << " ";
    }
    cout << endl;

    return 0;
}