#include <iostream>
using namespace std;

int main() {
    int arr[10]  = {1,5,3,4,5};
    cout <<"address of first memory block :" <<arr << endl;
    cout <<"address of first memory block :" << &arr[0] << endl;
    
    cout << "value at 1st memory block  :" << *arr + 1<< endl;
    cout << "value at 1st memory block  :" << *(arr + 1)<< endl;
    cout << "value at 1st memory block  :" << *(arr) + 1<< endl;
    cout << "value at 2nd memory block  :" << *(arr + 2)<< endl;

    // arr[i] = *(arr + i) 
    cout << "value at 3rd memory block  :" << *(3 + arr )<< endl;
    int *ptr = &arr[0];
    cout << "value at 1st memory block  :" << *ptr<<endl;
    cout << "address of 2nd memory block : " << arr + 1 <<endl;
    cout << "address of 2nd memory block : " << ptr + 1 <<endl;
    cout << sizeof(ptr);

    // arr = arr + 1; //will give me error coz symbol table me address cannot me edited
    ptr = ptr + 1;
    cout << ptr; // wont give error why, becoz ptr is a variable and we can change the value of variable which is storing address of arr[0]

    return 0;
}