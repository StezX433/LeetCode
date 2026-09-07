class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();

        int curr = 0;
        int minimal = INT_MAX;
        int left = 0;

        for (int right = 0; right < n; right++) {
            curr += nums[right];

            while (curr >= target) {
                minimal = min(minimal, right - left + 1);

                curr -= nums[left];
                left++;
            }
        }

        if (minimal == INT_MAX)
            return 0;

        return minimal;
    }
};