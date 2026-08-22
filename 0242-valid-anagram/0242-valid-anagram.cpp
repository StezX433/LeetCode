class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> st;

        if(s.size()!=t.size()) return false;
        for (char c: s){
            st[c]++;
        }
        for(char x : t){
            if(st[x]==0){
                return false;
            }
            st[x]--;

        }

        return true;

    }
};