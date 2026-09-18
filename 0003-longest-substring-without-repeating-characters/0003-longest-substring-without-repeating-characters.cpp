class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0;
        unordered_set<char> st;
        int count =0;
        for (int right = 0; right < s.length() ; right++){
            while (st.count(s[right])){
                st.erase(s[left]);
                left++;
            }
            st.insert(s[right]);
            count = max(count,right-left+1);
        }

        return count;
    }
};