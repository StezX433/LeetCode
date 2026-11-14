class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int mini = INT_MAX;
        int count = 0 ;
        for (int i = 0 ; i < k ; i++){
            if (blocks[i]=='W'){
                count+=1;
            }
        }

        mini = min(mini,count);

        for (int i = k ; i < blocks.size() ; i++){
            if (blocks[i]=='W') count++;
            if (blocks[i-k]=='W') count--;
            mini = min(mini,count);
        }

        return mini;
    }
};