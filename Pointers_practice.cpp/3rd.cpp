// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int first = 10;
    int *ptr = &first;
    cout << (*ptr)++ << endl;
    cout << *ptr << endl;
    
    return 0;
}