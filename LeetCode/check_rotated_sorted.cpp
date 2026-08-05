#include <iostream>
using namespace std;

int main() {
    int arr[] = {5,6,1,2,3,4};
    int size = sizeof(arr) / sizeof(arr[0]);

    int drops = 0;

    for (int i = 0; i < size - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            drops++;
        }
    }

    // Check the last element with the first
    if (arr[size - 1] > arr[0]) {
        drops++;
    }

    if (drops == 1)
        cout << "It is a sorted and rotated array";
    else
        cout << "Not a sorted and rotated array";

    return 0;
}