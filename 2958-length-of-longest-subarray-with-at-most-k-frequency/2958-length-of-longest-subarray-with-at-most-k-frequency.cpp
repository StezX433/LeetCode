class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int> seen;
        int j = 0;
        int maxc = 0;
        for (int i = 0 ; i < nums.size() ; i++){
            seen[nums[i]]++;

            while(seen[nums[i]] > k) {
                seen[nums[j]]--;
                j++;
            }

            maxc = max(maxc, i - j + 1);
        }

        return maxc;
    }
};