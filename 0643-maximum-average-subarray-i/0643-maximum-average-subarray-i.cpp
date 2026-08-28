class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int left = 0;
        long long sum = 0;
        double avg = INT_MIN;

        for (int right = 0; right < nums.size(); right++) {

            sum += nums[right];

            // window size = right - left + 1
            if (right - left + 1 == k) {
                avg = max(avg, (double)sum / k);

                sum -= nums[left];
                left++;
            }
        }

        return avg;
    }
};