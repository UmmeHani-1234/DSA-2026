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
    cout << "increments bvalue stored at num: "<< num <<endl;
    (*ptr)++;
    cout << "increments bvalue stored at num using pointer : "<< num <<endl;
    int *p = ptr;
    cout  << "copy value pointing by *ptr "<<*p <<endl;
    cout <<"the address of *ptr is stored in p :" <<p<<endl;
    cout << "increments value stored at num by 1 using pointer :"<< *ptr <<endl;  


    //another way to initialize pointer
    int *ptr2 = 0;
    ptr2 = &num;
    cout << "address of num using ptr2 : " << ptr2 << endl;
    cout << "value of num using ptr2 : " << *ptr2 << endl;
    return 0;


}