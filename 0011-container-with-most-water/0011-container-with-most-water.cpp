class Solution {
public:
    int maxArea(vector<int>& height) {
        int left  = 0;
        int right = height.size()-1;
        int maxCAP = INT_MIN;

        while (left < right){
            int cap = 0;
            if (height[left]>=height[right]){
                cap = height[right] * (right-left);
            }else {
                cap = height[left] * (right-left);
            }
            maxCAP = max(maxCAP,cap);

            if (height[left] < height[right]) {
                left++;
            }
            else {
                right--;
            }
        }

        return maxCAP;
    }
};