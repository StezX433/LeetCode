class Solution {
public:
    bool isAnagram(string s, string t) {

        if (s.length() != t.length()) {
            return false;
        }
        unordered_map<char,int> seen;
        for (auto x : s){
            seen[x]++;
        }

       
        for (auto x : t){
            if (seen[x]>0){
                seen[x]--;
            }else{
                return false;
            }
        }

        return true;
    }
};