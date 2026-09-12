class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos;
        vector<int> neg;

        for (int x : nums) {
            if (x > 0)
                pos.push_back(x);
            else
                neg.push_back(x);
        }

        int p = 0, n = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (i % 2 == 0)
                nums[i] = pos[p++];
            else
                nums[i] = neg[n++];
        }

        return nums;
    }
};