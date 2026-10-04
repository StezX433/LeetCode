class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> ans(n, -1);

        if (k == 0) return nums;

        int window = 2 * k + 1;

        if (window > n) return ans;

        long long sum = 0;

        for (int i = 0; i < window; i++) {
            sum += nums[i];
        }

        ans[k] = sum / window;

        for (int right = window; right < n; right++) {
            sum -= nums[right - window];
            sum += nums[right];

            int center = right - k;
            ans[center] = sum / window;
        }

        return ans;
    }
};