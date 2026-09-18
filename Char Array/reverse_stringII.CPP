#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {

    string str = "hellomyname";
    int k = 3;

    string ans;
    int count = str.size();
    int start = 0;

    while (count >= k) {

        string temp;

        for (int i = start; i < start + k; i++) {
            temp += str[i];
            count--;
        }

        reverse(temp.begin(), temp.end());

        ans += temp;

        // Add the next k characters without reversing
        for (int i = start + k; i < start + 2 * k && i < str.size(); i++) {
            ans += str[i];
            count--;
        }

        start += 2 * k;
    }

    // Remaining characters fewer than k
    if (count > 0) {

        string temp;

        for (int i = start; i < str.size(); i++) {
            temp += str[i];
        }

        reverse(temp.begin(), temp.end());

        ans += temp;
    }

    cout << ans;

    return 0;
}