class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum = nums[0];
        for(int i = 1;i<k;i++){
            sum += nums[i];
        }

        int maxSum = sum;

        for(int i = k;i<nums.size();i++){
            sum += nums[i];
            sum -= nums[i-k];

            maxSum = max(maxSum,sum);
        }

        return (double)maxSum/k;
    }
};