class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {

        unordered_map<int, int> seen;

        // Count occurrences of every number
        for (int x : arr) {
            seen[x]++;
        }

        unordered_set<int> frequencies;

        // Check whether frequencies are unique
        for (auto x : seen) {

            if (frequencies.count(x.second)) {
                return false;
            }

            frequencies.insert(x.second);
        }

        return true;
    }
};