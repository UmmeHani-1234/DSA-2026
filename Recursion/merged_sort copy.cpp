#include <iostream>
#include <vector>
using namespace std;

   void merge(vector<int>& arr, int s, int e) {

    int mid = (e + s) / 2;

    vector<int> temp;

    int i = s;       // left half
    int j = mid + 1; // right half


    while (i <= mid && j <= e) {

        if (arr[i] <= arr[j]) {
            temp.push_back(arr[i]);
            i++;
        }
        else {
            temp.push_back(arr[j]);
            j++;
        }
    }

    while (i <= mid) {
        temp.push_back(arr[i]);
        i++;
    }

    while (j <= e) {
        temp.push_back(arr[j]);
        j++;
    }

    for (int x = 0; x < temp.size(); x++) {
        arr[s + x] = temp[x];
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


    merge(arr, s, e);
}


void mergeSort(vector<int>& arr, int n) {

    sort(arr, 0, n - 1);
}


int main() {

    vector<int> arr = {8, 2, 10, 4, 5, 7};

    mergeSort(arr, arr.size());

    for (int i : arr) {
        cout << i << " ";
    }

    return 0;
}