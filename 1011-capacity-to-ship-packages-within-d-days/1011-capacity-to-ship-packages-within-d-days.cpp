class Solution {
public:
    bool canShip(vector<int>&weights,int capacity,int days){
        int day = 1;
        int daycap = 0;
        for (int w : weights){
            if (daycap+w<=capacity){
                daycap+=w;
            }else{
                daycap=w;
                day++;
            }
        }

        return day<=days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int left = *max_element(weights.begin(),weights.end());
        int right = 0;
        for (int w : weights){
            right +=w;
        }

        while (left < right){
            int mid = left + (right - left)/2;
            if (canShip(weights,mid,days)){
                right = mid;
            }else{
                left = mid + 1;
            }
        }

        return left;
    }
};