#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,2,3,-4,5,-9,1,8};
    int n = sizeof(arr)/ sizeof(arr[0]);
    int sum = 0;
    for (int i = 0; i < n ; i++ ){
            sum += arr[i];
            if (sum < 0){
                sum = 0; 
            }
        }
    cout<< sum;

    return 0;
}