// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    float f = 12.5;
    float p = 21.5;
    float *ptr = &f;
    (*ptr) ++;
    *ptr = p;
    
    return 0;
}