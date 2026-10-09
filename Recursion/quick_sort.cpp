#include <iostream>
using namespace std;


int partition(int arr[], int s, int e) {
    int cnt = 0;
    int pivot = arr[s];

    for (int i = s + 1; i <= e; i++) {
        if (arr[i] < pivot) {
            cnt++;
        }
    }

    int pivotIndex = s + cnt;
    swap(arr[s], arr[pivotIndex]);

    int i = s;
    int j = e;

    while (i < pivotIndex && j > pivotIndex) {
        while (i < pivotIndex && arr[i] < pivot) {
            i++;
        }

        while (j > pivotIndex && arr[j] >= pivot) {
            j--;
        }

        if (i < pivotIndex && j > pivotIndex) {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }

    return pivotIndex;
}


void QuickSort(int arr[], int s, int e) {
    if (s >= e) {
        return;
    }
    int pivotIndex = partition(arr, s, e);

    QuickSort(arr, s, pivotIndex - 1);
    QuickSort(arr, pivotIndex + 1, e);
}

int main() {
    int arr[] = {3, 2, 5, 6, 7, 1, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    QuickSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}