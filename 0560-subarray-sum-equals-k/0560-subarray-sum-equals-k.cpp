
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> seen;
        seen[0] = 1;

        int sum = 0;
        int count = 0;

        for (int x : nums) {
            sum += x;

            if (seen.count(sum - k)) {
                count += seen[sum - k];
            }

            seen[sum]++;
        }

        return count;
    }
};
