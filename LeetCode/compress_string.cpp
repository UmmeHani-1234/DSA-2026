#include <iostream>
#include <string>
using namespace std;

int main() {

    string s1 = "aaaabbbbccddddddeeeeeeee";

    int i = 0;

    while (i < s1.length()) {

        char current = s1[i];
        int count = 1;
        int j = i + 1;

        // Count how many times current is repeated
        while (j < s1.length() && s1[j] == current) {
            count++;
            j++;
        }

        // Remove duplicates
        s1.erase(i + 1, count - 1);

        // Insert count
        s1.insert(i + 1, to_string(count));

        // Move to next character
        i = i + 1 + to_string(count).length();
    }

    cout << s1;

    return 0;
}