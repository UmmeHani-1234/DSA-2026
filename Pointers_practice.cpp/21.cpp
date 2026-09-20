#include <iostream>
using namespace std;


void increment (int **q){
    ++(**q);
}
int main(){

int first = 110;
int *ptr = &first;
increment(&ptr);
cout << first << endl;

}
