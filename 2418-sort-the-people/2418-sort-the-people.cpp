class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        unordered_map<int,string> seen;
        for (int i = 0 ; i < names.size() ; i++){
            seen[heights[i]]=names[i];
        }

        sort(heights.begin(),heights.end());
        reverse(heights.begin(),heights.end());


        vector<string> ans;
        for (int a : heights){
            for (auto b : seen){
                if (b.first == a){
                    ans.push_back(b.second);
                }
            }
        }

        return ans;

    }
};