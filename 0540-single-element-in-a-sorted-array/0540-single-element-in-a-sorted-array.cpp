class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int left = 0;

        if (nums.size()<=2){
            return nums[0];
        }
        for (int right = 1; right < nums.size();right+=2){
            if (nums[left]!=nums[right]){
                return nums[left];
            }

            left+=2;
        }

        return nums[left];
    }
};