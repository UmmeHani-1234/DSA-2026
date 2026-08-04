// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int arr[7] = {1,2,3,4,5,6,7};
    int i = 1;
    int k = 3;
    int size = sizeof(arr)/ sizeof(arr[0]);
    while (i < k){
        int temp = arr[size - 1];
        for (int j = size - 1; j > 0 ; j-- ){
            arr[j] = arr[j-1];
        }
        arr[0] = temp;
        i++;
    }
    for (int i: arr){
        cout << i << " ";
        
    }
    return 0;
}