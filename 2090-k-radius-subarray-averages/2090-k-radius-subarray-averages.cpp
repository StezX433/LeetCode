class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int left = 0;
        long long sum = 0;

        vector<int> arr(nums.size(), -1);

        for (int right = 0; right < nums.size(); right++) {
            sum += nums[right];

            if (right - left + 1 == 2 * k + 1) {
                arr[right - k] = sum / (2 * k + 1);

                sum -= nums[left];
                left++;
            }
        }

        return arr;
    }
};