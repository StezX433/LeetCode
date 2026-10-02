class Solution {
public:
    int findMin(vector<int>& nums) {
        int right = *min_element(nums.begin(),nums.end());
        return right;
    }
};