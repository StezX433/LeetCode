class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> seen;
        for (int i = 0; i<nums.size();i++){
            seen.push_back(nums[i]*nums[i]);
        }

        sort(seen.begin(),seen.end());
        return seen;
    }
};