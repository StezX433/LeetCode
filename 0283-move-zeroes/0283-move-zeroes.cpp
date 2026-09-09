class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int left = 0;
        

        for (int right = 1; right< nums.size(); right++){
            if (nums[left]==0){
                swap(nums[left],nums[right]);
            }

            if (nums[left]!=0){
                left++;
            }
        }
        


    }
};