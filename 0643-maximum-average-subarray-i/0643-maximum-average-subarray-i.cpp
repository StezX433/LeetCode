class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();

        long long sum = 0;

        // First window
        for (int i = 0; i < k; i++) {
            sum += nums[i];
        }

        double maxAvg = (double)sum / k;

        // Slide the window
        for (int i = k; i < n; i++) {
            sum += nums[i];
            sum -= nums[i - k];

            maxAvg = max(maxAvg, (double)sum / k);
        }

        return maxAvg;
    }
};