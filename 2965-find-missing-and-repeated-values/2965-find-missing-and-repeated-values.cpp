
class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {

        int a = 0;
        int b = 0;

        unordered_map<int,int> seen;

        int n = grid.size();

        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {

                int x = grid[i][j];

                if (seen[x] == 1) {
                    a = x;
                }

                seen[x]++;
            }
        }

       
        for (int i = 1; i <= n*n; i++) {
            if (seen[i] == 0) {
                b = i;
                break;
            }
        }

        return {a, b};
    }
};
