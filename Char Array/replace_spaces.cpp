#include <iostream>
using namespace std;

int main() {
    string s = "my name is hani";

    int i = 0;

    while (i < s.size()) {
        if (s[i] == ' ') {
            s.replace(i, 1, "@20"); // because we are replacing a single space with three characters, we need to move the index forward by 3 to skip over the newly inserted characters
            i += 3;
        } else {
            i++;
        }
    }

    cout << s;

    return 0;
}