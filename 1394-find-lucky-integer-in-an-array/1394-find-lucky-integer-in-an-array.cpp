class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int, int> map;

        // Count frequency
        for (int x : arr) {
            map[x]++;
        }

        int best = -1;

        // Find largest number whose frequency equals the number
        for (auto x : map) {
            if (x.first == x.second) {
                best = max(best, x.first);
            }
        }

        return best;
    }
};