// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int arr [] = {11,12,13,14,15};
    int (*p) = arr;
    cout << *arr << " "<< *(arr + 3) << endl; 
    
    return 0;
}