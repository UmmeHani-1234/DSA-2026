#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string str = "abcccdccicbsci";
    string sub = "ccc";
    cout<< "the original string is: "<<str<<endl;
    int i = 0;
    string temp;

    while (i < str.size()) {
        int j = 0;
        int count = 0;
        int start = i;
        int k = i;

        temp = "";

        if (str[i] == sub[j]) {

            while (k < str.size() && j < sub.size()) {

                if (str[k] == sub[j]) {
                    temp.push_back(str[k]);
                    k++;
                    j++;
                    count++;
                }
                else {
                    break;
                }
            }

            if (temp == sub) {
                str.erase(start, count);
                i = start;
            }
            else {
                i++;
            }
        }
        else {
            i++;
        }
    }
    
    cout << "the string after removing the occurence is: "<<str;

    return 0;
}