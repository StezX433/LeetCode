class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        unordered_map<char, int> map;

        // Count characters in first word
        for (char x : words[0]) {
            map[x]++;
        }

        // Compare with every other word
        for (int i = 1; i < words.size(); i++) {
            unordered_map<char, int> current;

            for (char x : words[i]) {
                current[x]++;
            }

            // Keep the minimum frequency
            for (auto x : map) {
                map[x.first] = min(map[x.first], current[x.first]);
            }
        }

        // Build answer
        vector<string> ans;

        for (auto x : map) {
            for (int i = 0; i < x.second; i++) {
                ans.push_back(string(1, x.first));
            }
        }

        return ans;
    }
};