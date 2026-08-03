#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 3, 2,5, 4,6};

    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size - 1; i++) {
    for (int j = i; j < size - 1 - i; j++) {
        if (arr[j] > arr[j + 1]) {
            swap(arr[j], arr[j + 1]);
        }
    }

    }        

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}