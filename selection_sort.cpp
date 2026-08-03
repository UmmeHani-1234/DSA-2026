#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 3, 2, 6, 5, 4};

    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size - 1; i++) {

        int min = i;

        for (int j = i + 1; j < size; j++) {

            if (arr[min] > arr[j]) {
                min = j;
            }
        }

        swap(arr[i], arr[min]);
    }

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}