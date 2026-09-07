class Solution {
public:

    bool canShip(vector<int>& weights, int days, int capacity) {
        int dayCapacity = 0;
        int day = 1;

        for (int i = 0; i < weights.size(); i++) {

            if (dayCapacity + weights[i] > capacity) {
                day++;
                dayCapacity = weights[i];
            }
            else {
                dayCapacity += weights[i];
            }
        }

        return day <= days;
    }

    int shipWithinDays(vector<int>& weights, int days) {

        int left = *max_element(weights.begin(), weights.end());

        int right = 0;
        for (int w : weights) {
            right += w;
        }

        while (left < right) {

            int mid = left + (right - left) / 2;

            if (canShip(weights, days, mid)) {
                right = mid;
            }
            else {
                left = mid + 1;
            }
        }

        return left;
    }
};