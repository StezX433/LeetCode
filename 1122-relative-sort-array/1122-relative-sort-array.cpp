class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> ans;

        for (auto a : arr2) {
            for (auto b : arr1) {
                if (b == a) ans.push_back(b);
            }
        }

        vector<int> remaining;

        for (auto a : arr1) {
            if (find(arr2.begin(), arr2.end(), a) == arr2.end()) {
                remaining.push_back(a);
            }
        }

        sort(remaining.begin(), remaining.end());

        for (auto a : remaining) {
            ans.push_back(a);
        }

        return ans;
    }
};