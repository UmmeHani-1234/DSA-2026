#include <iostream>
using namespace std;

void sort(int arr[], int n, int i) {

    if (i == n) {
        return;
    }

    for (int j = i; j > 0; j--) {

        if (arr[j] < arr[j - 1]) {
            swap(arr[j], arr[j - 1]);
        }
    }

    i++;

    sort(arr, n, i);
}

int main() {

    int arr[] = {8, 2, 10, 4, 5, 7};

    int i = 0;
    int n = sizeof(arr) / sizeof(arr[0]);

    sort(arr, n, i);

    for (int i : arr) {
        cout << i << " ";
    }

    return 0;
}