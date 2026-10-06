#include <iostream>
#include <string>
using namespace std;

string reverseString(int i, string &str) {

    // Base case
    if (i < 0) {
        return "";
    }

    string temp = str[i] + reverseString(i - 1, str);

    return temp;
}

int main() {

    string str = "HAANI";

    int i = str.length() - 1;

    cout << reverseString(i, str);

    return 0;
}