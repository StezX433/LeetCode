class Solution {
public:
    int maxVowels(string s, int k) {
        int left = 0;
        int right = 0;
        int count = 0;
        int ans = 0;

        while (right < s.length()) {

            // Add current character
            if (s[right] == 'a' || s[right] == 'e' ||
                s[right] == 'i' || s[right] == 'o' ||
                s[right] == 'u') {
                count++;
            }

            // Window size becomes k
            if (right - left + 1 == k) {
                ans = max(ans, count);

                // Remove left character before moving left
                if (s[left] == 'a' || s[left] == 'e' ||
                    s[left] == 'i' || s[left] == 'o' ||
                    s[left] == 'u') {
                    count--;
                }

                left++;
            }

            right++;
        }

        return ans;
    }
};