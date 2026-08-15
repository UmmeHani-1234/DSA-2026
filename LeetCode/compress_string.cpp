class Solution {
public:
    int compress(vector<char>& chars) {

        string s1(chars.begin(), chars.end());

        int i = 0;

        while (i < s1.length()) {

            char current = s1[i];
            int count = 1;
            int j = i + 1;

            // Count duplicates
            while (j < s1.length() && s1[j] == current) {
                count++;
                j++;
            }

            // Remove duplicates
            s1.erase(i + 1, count - 1);

            // Insert count
            if (count > 1) {
                s1.insert(i + 1, to_string(count));
            }

            // Move to next character
            i = i + 1 + (count > 1 ? to_string(count).length() : 0);
        }

        // Put compressed string back into chars
        chars.clear();

        for (char c : s1) {
            chars.push_back(c);
        }

        return chars.size();
    }
};