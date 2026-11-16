class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string a = "";
        string b = "";
        for (int i = 0 ; i < word1.size() ; i++){
            for (int j = 0 ; j < word1[i].size() ; j++){
                a+=word1[i][j];
            }
        }
        for (int i = 0 ; i < word2.size() ; i++){
            for (int j = 0 ; j < word2[i].size() ; j++){
                b+=word2[i][j];
            }
        }
        if (a.length()!=b.length()) return false;
        

        for (int i = 0 ; i < a.length() ; i++){
            if (a[i]!=b[i]) return false;
        }

        return true;
    }
};