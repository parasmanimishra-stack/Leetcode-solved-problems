class Solution {
public:
    vector<bool> canEat(vector<int>& can, vector<vector<int>>& queries) {
        vector<bool > ans(queries.size());
        int n  = can.size();
        long long  preSum[n];
        preSum[0] = can[0];
        for(int i=1; i<n; i++){
            preSum[i] = preSum[i-1] + can[i];

        }  
        int i=0;
        for(auto query : queries){
            int favCandy = query[0];
            long long  favDay = query[1];
            long long dailyCap = query[2];

            long long candyEatenBefore = (favCandy == 0) ? 0 :  preSum[favCandy-1];

            if((favDay+1)* dailyCap <= candyEatenBefore){
                ans[i] = false;
                
            }
            else if(favDay+1 > preSum[favCandy]){
                ans[i] = false;
            }
            else ans[i]= true;
            i++;
        }
        return ans;
        
    }
};