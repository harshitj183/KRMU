#include <iostream>
using namespace std;

// Function to perform Selection Sort
void selectionSort(int arr[], int n, int &stepCount) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            stepCount++; // Counting comparisons
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            swap(arr[i], arr[minIndex]);
            stepCount++; // Counting swaps
        }
    }
}

// Function to print an array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {35, 12, 48, 7, 22};
    int n = sizeof(arr) / sizeof(arr[0]);
    int stepCount = 0;
    
    cout << "Original Array: ";
    printArray(arr, n);
    
    selectionSort(arr, n, stepCount);
    
    cout << "Sorted Array (Ascending Order): ";
    printArray(arr, n);
    cout << "Step Count: " << stepCount << endl;
    
    return 0;
}
