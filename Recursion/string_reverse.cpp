#include <iostream>
#include <string>
using namespace std;

string reverse(int i, int j, string &str) {

    // Base case
    if (i > j) {
        return str;
    }

    swap(str[i], str[j]);

    i++;
    j--;

    reverse(i, j, str);

    return str;
}

int main() {

    string str = "HAANI";

    int i = 0;
    int j = str.length() - 1;

    cout << reverse(i, j, str);

    return 0;
}