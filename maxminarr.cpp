#include <iostream>
using namespace std;

void findMaxMin(int arr[], int size, int &maxElement, int &minElement) {
    maxElement = arr[0]; 
    minElement = arr[0]; 

    for (int i = 1; i < size; i++) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];  
        }
        if (arr[i] < minElement) {
            minElement = arr[i]; 
        }
    }
}

int main() {
    int size;
    cout << "Enter the number of elements in the array: ";
    cin >> size;

    int arr[size];  
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i]; 
    }

    int maxElement, minElement;
    findMaxMin(arr, size, maxElement, minElement);
    cout << "Maximum Element: " << maxElement << endl;
    cout << "Minimum Element: " << minElement << endl;

    return 0;
}
