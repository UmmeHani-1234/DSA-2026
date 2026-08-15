#include <iostream>
#include <string>
using namespace std;

string removeDuplicates(string s) {

    int i = 0;

    while (i + 1 < s.length()) {

        if (s[i] == s[i + 1]) {
            s.erase(i, 2);

            if (i > 0)
                i--;
        }
        else {
            i++;
        }
    }

    return s;
}

int main() {

    string s;

    cout << "Enter string: ";
    cin >> s;

    string ans = removeDuplicates(s);

    cout << "After removing duplicates: " << ans << endl;

    return 0;
}