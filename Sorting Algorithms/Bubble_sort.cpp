// Bubble Sort in C++
#include <iostream>
#include <vector>
using namespace std;

// Function to perform Bubble Sort
void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    bool swapped; // To optimize the algorithm if no swaps are done

    for (int i = 0; i < n - 1; ++i) {
        swapped = false;

        // Last i elements are already sorted, so skip them
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                // Swap if the current element is greater than the next
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        // If no elements were swapped, the array is already sorted
        if (!swapped) break;
    }
}

// Function to print the array
void printArray(const vector<int>& arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

// Main function
int main() {
    vector<int> arr = {64, 34, 25, 12, 22, 11, 90};

    cout << "Original array: ";
    printArray(arr);

    bubbleSort(arr);

    cout << "Sorted array: ";
    printArray(arr);

    return 0;
}

/*
Time Complexity:
Best-case: O(n) - When the array is already sorted.
Worst-case: O(n^2) - When the array is sorted in reverse order.
Average-case: O(n^2) - For random order of elements.

Space Complexity:
O(1) - In-place sorting algorithm.
*/
