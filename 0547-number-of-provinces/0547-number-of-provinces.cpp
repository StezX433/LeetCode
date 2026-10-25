class Solution {
    void dfs( vector<vector<int>>& isConnected,int city, vector<int>& visited) {
        visited[city]=1;
        int n = isConnected.size();
        for (int nextCity = 0; nextCity < n; nextCity++) {
            if (isConnected[city][nextCity] == 1 && visited[nextCity] == 0) {
                dfs( isConnected,nextCity, visited);
            }
        }
    }
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<int> visited(n,0);
        int provinces  = 0;

        for (int city = 0 ; city < n ; city++){
            if (visited[city]==0){
                provinces++;
                dfs(isConnected,city,visited);
            }
        }

        return provinces;
    }
};