class Solution {
public:
    bool canFinish(vector<int>& time, long long mid, int totalTrips) {
        long long trips = 0;

        for (int t : time) {
            trips += mid / t;

            if (trips >= totalTrips)
                return true;
        }

        return false;
    }

    long long minimumTime(vector<int>& time, int totalTrips) {
        long long left = 1;
        long long right = 1LL * (*min_element(time.begin(), time.end())) * totalTrips;

        while (left < right) {
            long long mid = left + (right - left) / 2;

            if (canFinish(time, mid, totalTrips)) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }

        return left;
    }
};