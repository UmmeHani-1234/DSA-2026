#include <iostream>
#include <string>
using namespace std;

string reverseString(int i, string str) {

    // Base case
    if (i < 0) {
        return "";
    }

    string temp = str[i] + reverseString(i - 1, str);

    return temp;
}

int main() {

    string str = "abba";

    int i = str.length() - 1;

    string temp = reverseString(i, str);

    if (temp == str) {
        cout << "string is a palindrome";
    }
    else {
        cout << "string is not a palindrome";
    }

    return 0;
}