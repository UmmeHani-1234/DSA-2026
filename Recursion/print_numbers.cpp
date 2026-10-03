#include <iostream>

using namespace std;


void printing_numbers (int n){
    if (n == 0){
        return ;
    }
    cout << n<< endl;

    printing_numbers(n -1 );
}


int main(){ 
    cout <<"enter a number : "<<endl;
    int n;
    cin >> n;
    printing_numbers(n);
}