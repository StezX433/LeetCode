class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        
        int sum = 0;
        for (int i = 0; i<k;i++){
            sum+=nums[i];
        }

        double avg = (double)sum/k;

        for (int right = k ; right < nums.size(); right++){
            sum-=nums[right-k];
            sum+=nums[right];
            avg=max(avg,(double)sum/k);
        }

        return avg;
    }
};