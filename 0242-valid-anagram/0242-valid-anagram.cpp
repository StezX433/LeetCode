
class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) {
            return false;
        }

        unordered_map<char, int> seen;

        for (char x : s) {
            seen[x]++;
        }

        for (char x : t) {
            if (seen[x] == 0) {
                return false;
            }
            seen[x]--;
        }

        return true;
    }
};
