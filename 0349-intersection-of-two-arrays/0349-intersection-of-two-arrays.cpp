class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

        unordered_set<int> seen(nums1.begin(), nums1.end());

        vector<int> ans;

        for (auto x : nums2) {

            if (seen.count(x)) {
                ans.push_back(x);
                seen.erase(x);
            }
        }

        return ans;
    }
};
