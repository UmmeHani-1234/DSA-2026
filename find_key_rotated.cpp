#include <iostream>
using namespace std;

int binarySearch(int arr[], int start, int end, int key) {
    cout << "Program Started\n";
    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == key)
            return mid;

        else if (arr[mid] < key)
            start = mid + 1;

        else
            end = mid - 1;
    }

    return -1;
}

int main() {

    int arr[] = {9, 10, 11, 1, 2, 3, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    int pivot = 3;      // Found using pivot algorithm
    int key = 2;

    int ans;

    // Decide which subarray to search
    if (key >= arr[pivot] && key <= arr[size - 1]) {
        ans = binarySearch(arr, pivot, size - 1, key);
    }
    else {
        ans = binarySearch(arr, 0, pivot - 1, key);
    }

    if (ans != -1)
        cout << "Element found at index " << ans;
    else
        cout << "Element not found";

    return 0;
}