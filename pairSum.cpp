#include <iostream>
#include <vector>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5, 9, 1, 8};

    int size = sizeof(arr) / sizeof(arr[0]);

    vector<int> arr1;

    for (int i = 0; i < size - 1; i++) {
        arr1.push_back(arr[i] + arr[i + 1]);
    }

    cout << "Adjacent sums: ";
    for (int i = 0; i < arr1.size(); i++) {
        cout << arr1[i] << " ";
    }

    return 0;
}