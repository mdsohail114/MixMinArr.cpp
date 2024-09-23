#include <iostream>
using namespace std;

void findMaxMin(int arr[], int size, int &maxElement, int &minElement) {
    maxElement = arr[0];  // Initialize maxElement to the first element
    minElement = arr[0];  // Initialize minElement to the first element

    // Traverse the array starting from the second element
    for (int i = 1; i < size; i++) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];  // Update maxElement if current element is greater
        }
        if (arr[i] < minElement) {
            minElement = arr[i];  // Update minElement if current element is smaller
        }
    }
}

int main() {
    int size;
    cout << "Enter the number of elements in the array: ";
    cin >> size;

    int arr[size];  // Array to store the elements
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];  // Taking array input from the user
    }

    int maxElement, minElement;
    findMaxMin(arr, size, maxElement, minElement);

    // Display the result
    cout << "Maximum Element: " << maxElement << endl;
    cout << "Minimum Element: " << minElement << endl;

    return 0;
}
