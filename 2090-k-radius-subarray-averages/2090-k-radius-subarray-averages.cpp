class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n = nums.size();

        vector<int> ans(n, -1);

        int windowSize = 2 * k + 1;

        // If the entire window cannot fit
        if (windowSize > n) {
            return ans;
        }

        long long sum = 0;

        // First window: indices 0 to 2*k
        for (int i = 0; i < windowSize; i++) {
            sum += nums[i];
        }

        // Center of first window
        ans[k] = sum / windowSize;

        // Slide the window
        for (int i = windowSize; i < n; i++) {
            sum += nums[i];
            sum -= nums[i - windowSize];

            int center = i - k;

            ans[center] = sum / windowSize;
        }

        return ans;
    }
};