#include <iostream>
#include <string>
using namespace std;

bool permutationCheck(int count1[], int count2[]) {

    for (int i = 0; i < 26; i++) {
        if (count1[i] != count2[i]) {
            return false;
        }
    }

    return true;
}

int main() {

    string s1 = "abcbbbbabb";
    string s2 = "ab";
    bool ans = false;
    int windowSize = s1.length();

    int count1[26] = {0};
    int count2[26] = {0};

    // Count characters of s1
    for (int i = 0; i < s1.length(); i++) {

        int index = s1[i] - 'a';
        count1[index]++;
    }

    // Check if s1 is bigger than s2
    if (s1.length() > s2.length()) {
        cout << false;
        return 0;
    }

    // First window of s2
    for (int i = 0; i < windowSize; i++) {

        int index = s2[i] - 'a';
        count2[index]++;
    }

    // Check first window
    if (permutationCheck(count1, count2)) {
        cout << true;
        return 0;
    }

    // Sliding window
    int i = windowSize;

    while (i < s2.length()) {

        // Character leaving the window
        char oldChar = s2[i - windowSize];

        // Character entering the window
        char newChar = s2[i];

        int oldIndex = oldChar - 'a';
        int newIndex = newChar - 'a';

        count2[oldIndex]--;
        count2[newIndex]++;

        if (permutationCheck(count1, count2)) {
            bool ans = true;
            return ans;
        }

        i++;
    }

    cout << ans;
    return 0;
}