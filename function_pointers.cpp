#include <iostream>
using namespace std;

void pointers(int *p) {
    cout << *p << endl;
}

void update(int *pt) {
    (*pt)++;
    cout <<*pt << endl;
}

int main() {
    
    int num = 5;
    int *ptr = &num;
    
    pointers(ptr);
    
    update(ptr);
    
    cout << ptr;
    
    return 0;
}