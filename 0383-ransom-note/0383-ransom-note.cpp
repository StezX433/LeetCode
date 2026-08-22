class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> mag;
        for(char x : magazine){
            mag[x]++;
        }

        for (char y : ransomNote){
            if (mag[y]>0){
                mag[y]--;
            }else{
                return false;
            }
        }

        return true;
    }
};