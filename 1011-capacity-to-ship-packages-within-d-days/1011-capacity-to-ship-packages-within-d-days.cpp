class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(),weights.end());
        int high = 0;

        for (int weight : weights){
            high += weight;
        }

        while (low < high){
            int mid = low + (high - low)/2;

            if (canShip(weights , mid ,days)){
                high = mid;
            }else{
                low = mid +1;
            }   
        }
        return low ;
    }

    int canShip(vector<int>& weights, int capacity , int days){
        int currentWeight = 0;
        int daysUsed = 1;

        for (int weight:weights){
            if (currentWeight+weight<=capacity){
                currentWeight += weight;
            }else{
                daysUsed++;
                currentWeight=weight;
            }
        }

        return daysUsed<=days;
    }
};