#include <iostream>
using namespace std;

void getreverse(string &s, int size) {
    int start = 0;
    int end = size - 1;

    while (start < end) {
        swap(s[start], s[end]);
        start++;
        end--;
    }
}

bool checkPalindrome(string s) {

    string temp = "";

    for (int i = 0; i < s.size(); i++) {

        if (isalnum(s[i])) {          // keeps only letters and digits
            temp += tolower(s[i]);    // converts letters to lowercase
        }
    }

    string reverse = temp;
    getreverse(reverse, reverse.size());

    return reverse == temp;
}
int main (){
    string s = "hani";
    if (checkPalindrome(s)) {
        cout << "is a palindrome";
    }
    else{
        cout << "not a palindrome";
    }
}