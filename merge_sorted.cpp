#include <iostream>
using namespace std;

void merge(int arr1[], int m, int arr2[], int n, int arr3[]) {

    int i = 0;   // arr1
    int j = 0;   // arr2
    int k = 0;   // arr3

    // Merge both arrays
    while (i < m && j < n) {

        if (arr1[i] < arr2[j]) {
            arr3[k++] = arr1[i++];
        }
        else {
            arr3[k++] = arr2[j++];
        }
    }

    // Copy remaining elements of arr1
    while (i < m) {
        arr3[k++] = arr1[i++];
    }

    // Copy remaining elements of arr2
    while (j < n) {
        arr3[k++] = arr2[j++];
    }
}

int main() {

    int arr1[5] = {2, 4, 6, 9, 12};
    int arr2[3] = {1, 3, 5};
    int arr3[8];

    merge(arr1, 5, arr2, 3, arr3);

    for (int i = 0; i < 8; i++) {
        cout << arr3[i] << " ";
    }

    return 0;
}