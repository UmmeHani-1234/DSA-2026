#include <iostream>
using namespace std;

void findSum(int arr[][4]) {
    int sums[3];

    for (int i = 0; i < 3; i++) {
        int rowSum = 0;

        for (int j = 0; j < 4; j++) {
            rowSum += arr[i][j];
        }

        sums[i] = rowSum;
    }
    int max = 0;
    for (int i = 0; i < 3; i++) {
        if (sums[i] > max){
            max = sums[i];
        }
    }
    cout << "The largest row sum is: " << max << endl;
}

int main() {
    int arr[3][4] = {
        {1, 0, 0, 0},
        {1, 2, 0, 0},
        {0, 0, 0, 0}
    };

    findSum(arr);

    return 0;
}