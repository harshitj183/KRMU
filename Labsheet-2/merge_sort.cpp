#include <iostream>
#include <vector>
#include <chrono>
using namespace std;
using namespace std::chrono;

// Function to merge two subarrays
void merge(vector<int> &arr, int left, int mid, int right, int &stepCount) {
    int n1 = mid - left + 1;
    int n2 = right - mid;
    vector<int> L(n1), R(n2);

    for (int i = 0; i < n1; i++) {
        L[i] = arr[left + i];
    }
    for (int j = 0; j < n2; j++) {
        R[j] = arr[mid + 1 + j];
    }

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        stepCount++;
        if (L[i] <= R[j]) {
            arr[k++] = L[i++];
        } else {
            arr[k++] = R[j++];
        }
    }

    while (i < n1) {
        arr[k++] = L[i++];
    }
    while (j < n2) {
        arr[k++] = R[j++];
    }
}

// Function to implement Merge Sort
void mergeSort(vector<int> &arr, int left, int right, int &stepCount) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid, stepCount);
        mergeSort(arr, mid + 1, right, stepCount);
        merge(arr, left, mid, right, stepCount);
    }
}

// Function to print an array
void printArray(const vector<int> &arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr = {35, 12, 48, 7, 22};
    int n = arr.size();
    int stepCount = 0;

    cout << "Original Array: ";
    printArray(arr);

    auto start = high_resolution_clock::now();
    mergeSort(arr, 0, n - 1, stepCount);
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);

    cout << "Sorted Array: ";
    printArray(arr);
    cout << "Step Count: " << stepCount << endl;
    cout << "Time Taken: " << duration.count() << " microseconds" << endl;

    return 0;
}
