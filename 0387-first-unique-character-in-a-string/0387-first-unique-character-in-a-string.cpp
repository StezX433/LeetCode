class Solution {
public:
    int firstUniqChar(string s) {

        unordered_map<char, int> seen;

        // Count frequency
        for (auto x : s) {
            seen[x]++;
        }

        // Find first character with frequency 1
        for (int i = 0; i < s.size(); i++) {
            if (seen[s[i]] == 1) {
                return i;
            }
        }

        return -1;
    }
};