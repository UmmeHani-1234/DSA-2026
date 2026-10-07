#include <iostream>
using namespace std;

void sort(int arr[], int n, int i) {

    // Base case
    if (i == n - 1)
        return;

    int minIndex = i;

    // Find minimum element
    for (int j = i + 1; j < n; j++) {

        if (arr[j] < arr[minIndex]) {
            minIndex = j;
        }
    }

    // Put minimum at current position
    swap(arr[i], arr[minIndex]);

    // Move to next position
    sort(arr, n, i + 1);
}

int main() {

    int arr[] = {8, 2, 10, 4, 5, 7};

    int n = sizeof(arr) / sizeof(arr[0]);

    sort(arr, n, 0);

    for (int i : arr) {
        cout << i << " ";
    }

    return 0;
}