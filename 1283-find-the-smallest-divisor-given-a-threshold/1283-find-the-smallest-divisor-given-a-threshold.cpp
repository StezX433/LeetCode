class Solution {
public:

    bool canDivide(vector<int>& nums, int divisor, int threshold){
        int sum =0;
        for (int n : nums){
            sum += (n+divisor-1)/divisor;
        }

        return sum<=threshold;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int left = 1;
        int right = *max_element(nums.begin(),nums.end());
        while (left < right){
            int mid = left + (right - left)/2;
            if (canDivide(nums,mid,threshold)){
                right = mid;
            }else{
                left = mid +1; 
            }
        }

        return left;
    }
};