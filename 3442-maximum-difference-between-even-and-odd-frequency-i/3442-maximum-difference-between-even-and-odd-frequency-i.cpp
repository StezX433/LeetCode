
class Solution {
public:
    int maxDifference(string s) {

        unordered_map<char,int> seen;

        for (char ch : s) {
            seen[ch]++;
        }

        int maxOdd = INT_MIN;
        int minEven = INT_MAX;

        for (auto it : seen) {

            int freq = it.second;

            if (freq % 2 == 1) {
                maxOdd = max(maxOdd, freq);
            }
            else {
                minEven = min(minEven, freq);
            }
        }

        return maxOdd - minEven;
    }
};
