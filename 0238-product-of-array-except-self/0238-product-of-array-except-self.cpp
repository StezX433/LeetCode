
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product = 1;
        int zprod = 1;
        bool zero = false;
        int zeros = 0;

        for (int i = 0; i < nums.size(); i++) {
            product *= nums[i];

            if (nums[i] == 0) {
                zero = true;
                zeros++;
            } else {
                zprod *= nums[i];
            }
        }

        vector<int> ans;

        for (int i = 0; i < nums.size(); i++) {
            if (zero) {
                if (zeros > 1) {
                    ans.push_back(0);
                } else if (nums[i] == 0) {
                    ans.push_back(zprod);
                } else {
                    ans.push_back(0);
                }
            } else {
                ans.push_back(product / nums[i]);
            }
        }

        return ans;
    }
};
