class Solution {
public:
    bool isPalindrome(string s) {
        string st = "";

        for (auto c: s){
            if (isalnum(c)){
                st.push_back(tolower(c));
            }
        }

        int left = 0;
        int right = st.size()-1;

        while (left<right){
            if (st[left]!=st[right]){
                return false;
            }else{
                right--;
                left++;
            }
        }

        return true;
    }
};