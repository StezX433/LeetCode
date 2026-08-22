class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> map;
        for(int x : arr){
            map[x]++;
        }

        for (auto x : map){
            for(auto y: map){
                if(x.first!=y.first && x.second==y.second){
                    return false;
                }
            }
        }

        return true;

        
    }
};