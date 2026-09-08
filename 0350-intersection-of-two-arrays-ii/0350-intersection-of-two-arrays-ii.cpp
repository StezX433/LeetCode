class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {

        unordered_map<int, int> seen;

        // Count frequencies in nums1
        for (int x : nums1) {
            seen[x]++;
        }

        vector<int> ans;

        // Check nums2
        for (int x : nums2) {

            if (seen[x] > 0) {
                ans.push_back(x);
                seen[x]--;
            }
        }

        return ans;
    }
};