class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int leftP = 1;
        int rightP  =1;
        int ans = nums[0];
        for (int i =0; i < nums.size() ; i++){
            leftP = leftP == 0 ? 1 : leftP;
            rightP = rightP == 0 ? 1 : rightP;
            leftP*=nums[i];
            rightP*=nums[n-i-1];
            ans = max(ans,max(leftP,rightP)); 
        }

        return ans;
    }
};