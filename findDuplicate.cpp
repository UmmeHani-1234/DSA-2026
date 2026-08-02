#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 2, 3, 4, 5, 1, 9, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    bool duplicateFound = false;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                duplicateFound = true;
                break;
            }
        }
    }

    cout << "Duplicate present: " << duplicateFound;

    return 0;
}