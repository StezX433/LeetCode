class Solution {
public:
    string reverseWords(string s) {
        string rev = "";
        string temp = "";

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == ' ') {
                reverse(temp.begin(), temp.end());
                rev += temp;
                rev += " ";
                temp = "";
            }
            else {
                temp += s[i];
            }
        }

        reverse(temp.begin(), temp.end());
        rev += temp;

        return rev;
    }
};