class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int , int> map;
        for (int x : nums){
            map[x]++;
        }
        for(auto x: map){
            if (x.second>n/2){
                return x.first;
            }
        }
        return -1;
    }
};