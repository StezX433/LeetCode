class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> map;
        for(int x:arr){
            map[x]++;
        }
        unordered_set<int> seen;
        for(auto x : map){
            if(seen.count(x.second)){
                return false;
            }

            seen.insert(x.second);
        }

        return true;
    }
};