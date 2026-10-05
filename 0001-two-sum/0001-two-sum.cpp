class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> seen;
        for (int i = 0 ; i < nums.size() ; i++){
            int contam =  target - nums[i];
            if (seen.count(contam)){
                return {i,seen[contam]};
            }
            seen[nums[i]] = i;
        }

        return {-1,-1};
    }
};