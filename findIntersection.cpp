#include <iostream>
using namespace std;

int main() {
    int arr1[] = {1,2,3,4,5,9,1,8};
    int arr2[] = {1,2,3};
    int size1 = sizeof(arr1)/ sizeof(arr1[0]);
    int size2 = sizeof(arr2)/ sizeof(arr2[0]);
    int sum = 0;
    
        for (int i = 0; i < size1; i++){
            for (int j = 0; j < size2; j++){
                if (arr1[i] == arr2[j]){
                    cout<< arr1[i] <<" ";
                }
            }

        }
    
    

    return 0;
}