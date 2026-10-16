class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> seen;
        vector<int> ans;

        for (int x : nums) {
            seen[x]++;
        }

        for (auto x : seen) {
            if (x.second > nums.size() / 3) {
                ans.push_back(x.first);
            }
        }

        return ans;
    }
};