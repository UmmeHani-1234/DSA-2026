#include <iostream>
using namespace std;

int main() {
    
    int arr[10] = {1,2,3,4,5};
    cout <<"this will print the address of the first element of array: "<< arr <<endl;
    char ch[10]  = {'a','b','c','d'};
    cout <<"this will print the first element of ch" <<ch << endl;
    char *ptr = &ch[0];
    cout << *ptr <<endl;
    cout <<ptr <<endl;
    return 0;
}