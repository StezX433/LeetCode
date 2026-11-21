class Solution {
public:
    int rob(vector<int>& nums) {
        
        int prev = 0;
        int curr = 0;

        for(int i = 0; i < nums.size(); i++) {
            int c = max(curr, nums[i] + prev);
            prev = curr;
            curr = c;
        }

        return curr;
    }

};