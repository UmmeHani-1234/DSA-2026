#include <iostream>
using namespace std;

bool isSolution(int arr[], int size, int start, int end, int mid, int m) {

    int painter = 1;
    int paintSum = 0;

    for (int i = 0; i < size; i++) {

        if (paintSum + arr[i] <= mid) {
            paintSum += arr[i];
        }
        else {
            painter++;

            if (painter > m || arr[i] > mid) {
                return false;
            }

            paintSum = arr[i];
        }
    }

    return true;
}

int main() {

    int arr[] = {1, 2, 3, 4, 5, 6, 10};
    int m = 3;

    int size = sizeof(arr) / sizeof(arr[0]);

    int start = 0;

    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    int end = sum;
    int ans = -1;

    while (start <= end) {

        int mid = start + (end - start) / 2;

        if (isSolution(arr, size, start, end, mid, m)) {
            ans = mid;
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
    }

    cout << ans;

    return 0;
}