class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int> st;
        int left = 0;
        int count = 0;
        for (int right = 0 ; right < fruits.size() ; right++){
            st[fruits[right]]++;
            while (st.size()>2){
                st[fruits[left]]--;
                if (st[fruits[left]]==0){
                    st.erase(fruits[left]);
                }
                left++;
            }
            count = max(count , right - left + 1);

        }
        return count;
    }
};