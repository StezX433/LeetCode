
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> seen;

        for (int x : nums) {
            seen[x]++;
        }

        vector<pair<int, int>> arr;

        for (auto x : seen) {
            arr.push_back({x.second, x.first});
        }

        sort(arr.rbegin(), arr.rend());

        vector<int> ans;

        for (int i = 0; i < k; i++) {
            ans.push_back(arr[i].second);
        }

        return ans;
    }
};
