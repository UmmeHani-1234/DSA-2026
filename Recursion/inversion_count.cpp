#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& arr, int s, int e) {

    int mid = (e + s) / 2;

    // Create temporary vectors
    vector<int> arr1;
    vector<int> arr2;

    // Copy left half
    int n1 = mid - s + 1;

    for (int i = 0; i < n1; i++) {
        arr1.push_back(arr[s + i]);
    }

    // Copy right half
    int n2 = e - mid;

    for (int i = 0; i < n2; i++) {
        arr2.push_back(arr[mid + 1 + i]);
    }

    // Merge
    int i = 0;
    int j = 0;
    int k = s;

    while (i < n1 && j < n2) {

        if (arr1[i] <= arr2[j]) {
            arr[k] = arr1[i];
            i++;
        }
        else {
            arr[k] = arr2[j];
            j++;
        }

        k++;
    }

    // Remaining elements of arr1
    while (i < n1) {
        arr[k] = arr1[i];
        i++;
        k++;
    }

    // Remaining elements of arr2
    while (j < n2) {
        arr[k] = arr2[j];
        j++;
        k++;
    }
}


void sort(vector<int>& arr, int s, int e) {

    if (s >= e) {
        return;
    }

    int mid = (e + s) / 2;

    // Sort left half
    sort(arr, s, mid);

    // Sort right half
    sort(arr, mid + 1, e);

    // Merge both halves
    merge(arr, s, e);
}


void mergeSort(vector<int>& arr, int n) {

    sort(arr, 0, n - 1);
}


int main() {

    vector<int> arr = {8, 2, 10, 4, 5, 7};
    int n = arr.size();
    mergeSort(arr, n);

    for (int i = n; i > 0; i--) {
        cout << arr[i] << " ";
    }

    return 0;
}