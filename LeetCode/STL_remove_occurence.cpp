#include <iostream>
#include <string>
using namespace std;

int main() {

    string s = "abcabcsiiiiabv";
    string part = "abc";

    int i = 0;
    int j = 0;
    int start = 0;
    string temp;

    while (s.length()!=0 &&  s.find(part) < s.length()){
        s.erase(s.find(part), part.length());
}
    cout << s;

    return 0;
}