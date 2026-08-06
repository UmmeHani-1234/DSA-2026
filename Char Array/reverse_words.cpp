#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string s = "my name is hani";
    string ans;
    string temp;

    int size = s.size();
    int i = 0;

    while (i < size) {
        temp.clear();

        while (i < size && s[i] != ' ') {
            temp.push_back(s[i]);
            i++;
        }

        reverse(temp.begin(), temp.end());

        if (!ans.empty())
            ans += " ";

        ans += temp;

        i++; 
    }
    cout << ans;

    return 0;
}