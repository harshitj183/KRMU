#include <iostream>
using namespace std;

// Function to perform Insertion Sort
void insertionSort(int arr[], int n, int &stepCount) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        stepCount++; // Counting assignment
        while (j >= 0 && arr[j] > key) {
            stepCount++; // Counting comparison
            arr[j + 1] = arr[j];
            stepCount++; // Counting assignment
            j--;
        }
        arr[j + 1] = key;
        stepCount++; // Counting assignment
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
    
    insertionSort(arr, n, stepCount);
    
    cout << "Sorted Array (Ascending Order): ";
    printArray(arr, n);
    cout << "Step Count: " << stepCount << endl;
    
    return 0;
}
