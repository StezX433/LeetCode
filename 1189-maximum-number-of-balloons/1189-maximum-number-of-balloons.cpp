
class Solution {
public:
    int maxNumberOfBalloons(string text) {

        unordered_map<char, int> seen;

        for (char ch : text) {
            if (ch == 'b' || ch == 'a' || ch == 'l' ||
                ch == 'o' || ch == 'n') {
                seen[ch]++;
            }
        }

        int ans = INT_MAX;

        ans = min(ans, seen['b']);
        ans = min(ans, seen['a']);
        ans = min(ans, seen['l'] / 2);
        ans = min(ans, seen['o'] / 2);
        ans = min(ans, seen['n']);

        return ans;
    }
};
