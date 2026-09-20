#include <iostream>
using namespace std;

void update(int **ptr2) {
    *ptr2 = *ptr2 + 1;
    **ptr2 = **ptr2 + 1;
}

int main() {
    int i = 5;
    int *ptr = &i;
    int **ptr2 = &ptr;

    cout << "before" << endl;
    cout << ptr << endl;      // address of i
    cout << *ptr << endl;     // value of i
    cout << ptr2 << endl;     // address of ptr
    cout << *ptr2 << endl;    // address of i
    cout << **ptr2 << endl;   // value of i

    update(ptr2);

    cout << "after" << endl;
    cout << ptr << endl;      // address of i
    cout << *ptr << endl;     // value of i
    cout << ptr2 << endl;     // address of ptr
    cout << *ptr2 << endl;    // address of i
    cout << **ptr2 << endl;   // value of i
    return 0;
}