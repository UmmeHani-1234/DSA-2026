#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string s = "hani"; //inah
    string goal = "niha";
    char temp;
    bool ans = false;
    int size = s.size() - 1;
    int i = 0;
    while (i <= size){
        temp = s[0];
        for (int j = 0; j < size; j++){
            
            s[j] = s[j+1];
        }
        s[size] = temp;
        i++;
        if(s == goal ){
            ans = true;
            break;
        }
    }

    cout << ans;

    return 0;
}