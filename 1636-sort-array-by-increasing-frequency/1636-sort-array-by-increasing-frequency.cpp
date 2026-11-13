
class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {

        unordered_map<int,int> seen;

        for (int a : nums) {
            seen[a]++;
        }

        vector<pair<int,int>> sorted;

        for (auto a : seen) {
            sorted.push_back({a.first, a.second});
        }

        sort(sorted.begin(), sorted.end(),
            [](auto a, auto b) {
                if (a.second != b.second)
                    return a.second < b.second;

                return a.first > b.first;
            }
        );

        vector<int> ans;

        for (auto a : sorted) {
            for (int i = 0; i < a.second; i++) {
                ans.push_back(a.first);
            }
        }

        return ans;
    }
};
