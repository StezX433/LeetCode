class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        unordered_set<char> seen;

        int j = 0;
        int ans = 0;

        for(int i = 0; i < s.length(); i++) {

            
            while(seen.count(s[i])) {
                seen.erase(s[j]);
                j++;
            }

            
            seen.insert(s[i]);

            
            ans = max(ans, i - j + 1);
        }

        return ans;
    }
};