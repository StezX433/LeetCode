class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> seen;
        for (auto x : nums){
            seen[x]++;
        }

        for (auto x : seen){
            if (x.second > nums.size()/2){
                return x.first;
            }
        }

        return -1;
    }
};