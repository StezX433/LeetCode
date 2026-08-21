class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        int sum =0;
        for (int i =0;i<k;i++) sum += nums[i];
        int best = sum;
        for (int i = k ;i<n;i++){
            if (best>=sum){
                sum += nums[i] - nums[i-k];
                best = max(best,sum);
            }
        }
        return (double)best/k;
    }
};