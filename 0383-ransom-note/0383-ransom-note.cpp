class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> seen;
        for (auto x : magazine){
            seen[x]++;
        }
        
        for (auto x : ransomNote){
            if (seen[x]>0){
                seen[x]--;
                
            }else {
                return false;
            }
        }

        return true;
    }
};