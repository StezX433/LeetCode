class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        unordered_map<int,int> seen;
        for (int i = 0 ; i < nums2.size(); i++){
            seen[nums2[i]]=i;
        }
        for (int a : nums1){
            bool found = false;

            for (int i = seen[a] + 1; i < nums2.size(); i++) {

                if (nums2[i] > a) {
                    ans.push_back(nums2[i]);
                    found = true;
                    break;
                }
            }

            if (!found) {
                ans.push_back(-1);
            }
        }

        return ans;
    }
};