class Solution {
public:
    bool canDivide(vector<int>& nums, int limit, int maxOperations) {
        long long operations = 0;

        for (int balls : nums) {
            operations += (balls - 1) / limit;
        }

        return operations <= maxOperations;
    }

    int minimumSize(vector<int>& nums, int maxOperations) {
        int left = 1;
        int right = *max_element(nums.begin(), nums.end());

        while (left < right) {
            int mid = left + (right - left) / 2;

            if (canDivide(nums, mid, maxOperations)) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }

        return left;
    }
};