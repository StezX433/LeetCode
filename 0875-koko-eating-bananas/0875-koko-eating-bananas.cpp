class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left =1;
        int right = *max_element(piles.begin(),piles.end());

        while (left <=right){
            int mid = left + (right - left)/2;

            if (canFinish(piles,h,mid)){
                right = mid-1;
            }else{
                left = mid +1;
            }
        }
        return left;

    }

    bool canFinish(vector<int>& piles, int h , int k){
        int sum =0;
        for (auto i : piles){
            sum += (i + k -1)/k;

            if (sum > h){
                return false;
            }
        }

        return true;
    }
};