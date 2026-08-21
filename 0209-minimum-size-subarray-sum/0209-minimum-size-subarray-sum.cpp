class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left = 0;
        int sum =0;
        int best = INT_MAX;

        for (int right =0 ; right < nums.size();right++){

            sum+=nums[right];
            while (sum >= target){
                best = min(best,right - left + 1);
                sum-=nums[left];
                left++;
            }
            
        }
        if (best == INT_MAX)
            return 0;

        return best;
    }
};