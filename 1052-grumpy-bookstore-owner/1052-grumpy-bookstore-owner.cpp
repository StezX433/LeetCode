class Solution {
public:
    int maxSatisfied(vector<int>& customers,
                     vector<int>& grumpy, int minutes) {

        int n = customers.size();

        int total = 0;

        // Count already satisfied customers
        for(int i = 0; i < n; i++) {
            if(grumpy[i] == 0) {
                total += customers[i];
            }
        }

        // Calculate first window
        int windowSum = 0;

        for(int i = 0; i < minutes; i++) {
            if(grumpy[i] == 1) {
                windowSum += customers[i];
            }
        }

        int maxSum = windowSum;

        // Sliding window
        for(int i = minutes; i < n; i++) {

            if(grumpy[i] == 1) {
                windowSum += customers[i];
            }

            if(grumpy[i - minutes] == 1) {
                windowSum -= customers[i - minutes];
            }

            maxSum = max(maxSum, windowSum);
        }

        return total + maxSum;
    }
};