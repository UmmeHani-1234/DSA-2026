#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;

    int arr[26] = {0};
    string alpha = "abcdefghijklmnopqrstuvwxyz";

    int a_size = alpha.length();
    int s_size = s.length();

    for (int i = 0; i < s_size; i++) {
        for (int j = 0; j < a_size; j++) {
            if (s[i] == alpha[j]) {
                arr[j]++;
                break;
            }
        }
    }

    int max = 0;
    char max_char;

    for (int i = 0; i < 26; i++) {
        if (arr[i] > max) {
            max = arr[i];
            max_char = alpha[i];
        }
    }

    cout << "Most frequent character: " << max_char << endl;
    cout << "Frequency: " << max << endl;

    return 0;
}