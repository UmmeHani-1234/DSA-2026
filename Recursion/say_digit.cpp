#include <iostream>
#include <string>
using namespace std;

void say_digit(int n) {
    string arr[]= {"zero","one", "two", "three", "four", "five","six", "seven","eight", "nine"};
    if (n == 0){
        return ;
    }
    int num = n%10;
    say_digit(n/10);
    cout << " "<<arr[num];
}

int main() { 

    int n = 10;

    say_digit (n);

}