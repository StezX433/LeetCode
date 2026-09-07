class Solution {
public:
    bool canFinish(vector<int>& piles , int h , int k){
        int hours = 0;

        for (int i = 0; i < piles.size(); i++) {
            hours += (piles[i] + k - 1) / k;
        }

        return hours <= h;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1;
        int right = *max_element(piles.begin(),piles.end());

        while (left < right){
            int mid = left + (right - left)/2;

            if (canFinish(piles,h,mid)){
                right = mid;
            }else{
                left = mid + 1;
            }
        }

        return right;

    }
};