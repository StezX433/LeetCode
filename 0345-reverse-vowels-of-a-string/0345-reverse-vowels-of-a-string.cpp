class Solution {
public:
    string reverseVowels(string s) {
        unordered_set<char> st={'A','E','I','O','U','a','e','i','o','u'};

        int left =0;
        int right = s.size();

        while (left < right){
            if ((st.count(s[left]))&&(st.count(s[right]))){
                swap(s[left],s[right]);
                left++;
                right--;
            }else if ((st.count(s[left]))&&(!st.count(s[right]))){
                right--;
            }else if((!st.count(s[left]))&&(st.count(s[right]))){
                left++;
            }else{
                right--;
                left++;
            }
        }

        return s;
    }
};