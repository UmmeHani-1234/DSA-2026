#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,2,3,4,5,9,1,8};
    int n = sizeof(arr)/ sizeof(arr[0]);
    int sum = 0;
    for (int i = 0; i < n ; i++ ){
        swap(arr[i], arr[i+1]);
        i++;
    }
    for (int i =  0; i < n; i++){
        cout<< arr[i] <<" ";
    }
    

    return 0;
}