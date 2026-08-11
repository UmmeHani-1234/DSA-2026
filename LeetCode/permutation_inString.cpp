#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        int count = s1.length();

        if (count > s2.length())
            return false;

        for (int i = 0; i <= s2.length() - count; i++) {

            vector<int> arr(count, 0);
            int k = i;

            while (k < i + count) {

                int j = 0;

                while (j < count) {

                    if (s2[k] == s1[j] && arr[j] == 0) {
                        arr[j] = 1;
                        break;
                    }

                    j++;
                }

                k++;
            }

            int x;

            for (x = 0; x < count; x++) {
                if (arr[x] != 1)
                    break;
            }

            if (x == count)
                return true;
        }

        return false;
    }
};