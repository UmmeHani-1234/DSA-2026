#include <iostream>
using namespace std;

bool isSolution(int arr[], int size, int start, int end, int mid, int m) {

    int student = 1;
    int studentSum = 0;

    for (int i = 0; i < size; i++) {

        if (studentSum + arr[i] <= mid) {
            studentSum += arr[i];
        }
        else {
            student++;

            if (student > m || arr[i] > mid) {
                return false;
            }

            studentSum = arr[i];
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