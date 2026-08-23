#include <iostream>
using namespace std;

int main() {
    int num = 5;
    cout << &num;
    int *ptr = &num;
    cout <<"num : " <<&num << endl; // prints address of num
    cout <<"address of num : " <<num <<endl; // prints value of num
    cout <<"prints address of num : " <<ptr<<endl; // prints address of num
    cout << "prints value of num: "<<*ptr<<endl; // dereferencing pointer

    num++;
    cout << " increments bvalue stored at num by 1 "<< num <<endl;
    *ptr++;
    int *p = &(*ptr);
    cout  << *p <<endl;
    cout <<"the address of *ptr is stored in p :" <<p<<endl;
    cout << "increments value stored at num by 1 using pointer :"<< *ptr <<endl;  
    return 0;
}