class Solution {
public:
    int maxVowels(string s, int k) {
        int n = s.size();
        auto isVowel = [](char c){
            return  c=='a' || c=='e' || c=='i' || c=='o' || c=='u';
        };

        int cnt = 0;
        for (int i=0;i<k;++i) cnt+=isVowel(s[i]);
        int best = cnt;
        for (int i =k; i<n;++i){
            cnt += isVowel(s[i])-isVowel(s[i-k]);
            best = max(best,cnt);
            if (best==k) return k;
        }

        return best;
    }
};