#include <iostream>
using namespace std;

int main() {
    int arr[6] = {1, 3,0, 5,0,9};


    int size = sizeof(arr) / sizeof(arr[0]);
    int i = 0;
    while (i <= size){
        if (arr[i] == 0){
            for (int j = i; j < size-1; j++){
                arr[j] = arr[j+1];
            }
            arr[size - 1] = 0;
            
        }
            else {
                i++;
            }
        
    }
   

    for (int i: arr){
        cout << i << " ";
    }

    return 0;
}