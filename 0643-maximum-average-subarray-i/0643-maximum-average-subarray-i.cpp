class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        if (n < k){
            return -1;
        }

        int currentSum =0;
        for (int i = 0 ; i < k ; i++){
            currentSum+=nums[i];
        }

        double maxAVG = (double)currentSum/k;
        for (int i = k ; i< n;i++){
            currentSum+=nums[i];
            currentSum-=nums[i-k];

            maxAVG = max(maxAVG,(double)currentSum/k);
        }

        return maxAVG;
    }
};