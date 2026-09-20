// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int first = 10;
    int second = 12;
    int *ptr = &second;
    *ptr = 9;
    cout << first << " "<< *ptr <<endl;
    
    return 0;
}