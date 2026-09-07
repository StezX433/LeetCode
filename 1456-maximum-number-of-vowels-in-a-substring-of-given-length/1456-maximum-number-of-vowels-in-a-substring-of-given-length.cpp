class Solution {
public:
    int maxVowels(string s, int k) {
        int n = s.length();
        int current = 0;

        for (int i =0;i<k;i++){
            if (s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o'|| s[i]=='u'){
                current++;
            }
        }

        int maxS = current;
        for (int i =k ; i< n ; i++){
            if (s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o'|| s[i]=='u'){
                current++;
            }
            if (s[i-k]=='a' || s[i-k]=='e' || s[i-k]=='i' || s[i-k]=='o'|| s[i-k]=='u'){
                current--;
            }

            maxS = max(maxS,current);
        }

        return maxS;
    }
};