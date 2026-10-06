class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> seen;
        for (int i = 0 ; i < nums.size() ; i++){
            seen[nums[i]]++;
        }
        vector<int> ans;
        for (auto& n : seen){
            if (n.second > nums.size()/3){
                ans.push_back(n.first);
            }
            
        }

        return ans;
    }
};