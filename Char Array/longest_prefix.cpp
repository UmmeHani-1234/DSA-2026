class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        int start = 0;
        string ans;

        int size = strs.size();

        while (start < strs[0].size()) {

            char comp = strs[0][start];

            for (int i = 0; i < size; i++) {

                if (start >= strs[i].size() || comp != strs[i][start]) {
                    return ans;
                }
            }

            ans.push_back(comp);
            start++;
        }

        return ans;
    }
};