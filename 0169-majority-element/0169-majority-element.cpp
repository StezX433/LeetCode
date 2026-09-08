class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> seen;
        for (auto x:nums){
            seen[x]++;
        }
        int n = nums.size();
        for (auto x : nums){
            if (seen[x]>n/2){
                return x;
            }
        }

        return -1;
    }
};