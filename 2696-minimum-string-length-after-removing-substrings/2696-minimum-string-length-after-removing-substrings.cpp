
class Solution {
public:
    int minLength(string s) {
        stack<char> seen;

        for (int i = 0; i < s.length(); i++) {
            if (!seen.empty() &&
                ((seen.top() == 'A' && s[i] == 'B') ||
                 (seen.top() == 'C' && s[i] == 'D'))) {
                
                seen.pop();
            }
            else {
                seen.push(s[i]);
            }
        }

        return seen.size();
    }
};
