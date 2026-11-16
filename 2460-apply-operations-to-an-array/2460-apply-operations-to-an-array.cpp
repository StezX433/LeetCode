
class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {

        // Step 1: Apply operations
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] == nums[i+1]) {
                nums[i] *= 2;
                nums[i+1] = 0;
            }
        }

        // Step 2: Move zeroes to the end
        int left = 0;

        for (int right = 0; right < nums.size(); right++) {
            if (nums[right] != 0) {
                swap(nums[left], nums[right]);
                left++;
            }
        }

        return nums;
    }
};
