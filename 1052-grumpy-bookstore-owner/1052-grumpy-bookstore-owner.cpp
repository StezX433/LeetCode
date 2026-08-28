class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {

        int base = 0;

        // Customers already satisfied
        for (int i = 0; i < customers.size(); i++) {
            if (grumpy[i] == 0) {
                base += customers[i];
            }
        }

        int left = 0;
        int window = 0;
        int best = 0;

        for (int right = 0; right < customers.size(); right++) {

            // Only grumpy customers are gained by using the technique
            if (grumpy[right] == 1) {
                window += customers[right];
            }

            // Keep window size <= minutes
            if (right - left + 1 > minutes) {

                if (grumpy[left] == 1) {
                    window -= customers[left];
                }

                left++;
            }

            best = max(best, window);
        }

        return base + best;
    }
};