
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {

        unordered_map<int,int> seen;

        for (int n : nums) {
            seen[n]++;
        }

        vector<int> ans;

        for (int i = 1; i <= nums.size(); i++) {
            if (seen[i] == 0) {
                ans.push_back(i);
            }
        }

        return ans;
    }
};
