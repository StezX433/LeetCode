class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int cnt =0;
        int left =0;
        int sum =0;

        for (int right = 0; right < arr.size(); right++){
            sum += arr[right];
            if (right - left +1 == k){
                if (((double)sum/k)>=threshold){
                    cnt++;
                }
                sum-=arr[left];
                left++;
            }
        }

        return cnt;
    }
};