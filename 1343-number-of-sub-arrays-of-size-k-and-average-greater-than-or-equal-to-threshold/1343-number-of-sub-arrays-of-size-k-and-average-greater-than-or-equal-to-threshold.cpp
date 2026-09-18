class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int sum = arr[0];
        for (int i = 1 ;i <k ;i++){
            sum+=arr[i];
        }

        int count = 0;
        if (sum/k>=threshold){
            count++;
        }
        for (int i=k;i<arr.size();i++){
            sum+=arr[i];
            sum-=arr[i-k];
            if (sum/k>=threshold){
                count++;
            }
        }

        return count;
    }
};