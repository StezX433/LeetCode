class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int vishesh = 0;
        int left = 0;
        int ans = 0;

        for (int right = 0 ; right < nums.size() ; right++){
            if (nums[right]==0){
                vishesh++;
            }

            while (vishesh>k){
                if (nums[left]==0){
                    vishesh--;
                }
                left++;
            }

            ans = max (ans,right-left+1);
        }

        return ans;
    }
};