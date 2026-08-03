// find pivot in a rotated sorted array
#include <iostream>
using namespace std;

int main() {

    int arr[] = {9, 10, 11, 1, 2, 3, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    int start = 0;
    int end = size - 1;
    int pivot = -1;

    while (start <= end) {

        int mid = start + (end - start) / 2;

        // Check if mid is the pivot
        if (mid > 0 && mid < size - 1 &&
            arr[mid] < arr[mid - 1] &&
            arr[mid] < arr[mid + 1]) {

            pivot = mid;
            break;
        }

        // Search in the correct half
        if (arr[mid] >= arr[0]) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }

    cout << "Pivot index: " << pivot << endl;
    cout << "Pivot element: " << arr[pivot] << endl;

    return 0;
}