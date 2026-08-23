class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        int size = n*n;
        vector<int> count(size+1, 0);
        
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
               count[grid[i][j]]++;
            }


        }
        int a = -1;
        int b = -1;
        for(int k = 1; k<= size; k++){
            if(count[k] == 2) a = k;
            else if(count[k] == 0) b = k;
        }
        return {a, b};
        
        
    }
};