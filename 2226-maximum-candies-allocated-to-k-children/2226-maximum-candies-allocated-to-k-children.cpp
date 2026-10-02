class Solution {
public:
    bool canAllocate(vector<int>& candies, long long x, long long k) {
        long long children = 0;

        for (int pile : candies) {
            children += pile / x;
        }

        return children >= k;
    }

    int maximumCandies(vector<int>& candies, long long k) {
        long long left = 1;
        long long right = *max_element(candies.begin(), candies.end());
        long long ans = 0;

        while (left <= right) {
            long long mid = left + (right - left) / 2;

            if (canAllocate(candies, mid, k)) {
                ans = mid;
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        return ans;
    }
};