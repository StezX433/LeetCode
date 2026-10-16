class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> seen;
        for (auto x : nums){
            seen[x]++;
        }
        for (auto x : seen){
            if (x.second > 1){
                return true;
            }
        }
        return false;
    }
};