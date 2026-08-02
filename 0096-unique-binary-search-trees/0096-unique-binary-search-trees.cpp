class Solution {
public:
vector<int> dp;
int f(int i){
    if(i == 0 || i == 1) return 1;
    if (i == 2) return 2;
    int sum = 0;

    for(int k=0; k <= i; i++){
        sum += f(k-1)*f(i-k); 

    }
    return dp[i] = sum;
}
    int numTrees(int n) { 
        dp.clear();
        dp.resize(30);
       dp[0] =  dp[1] = 1;
       dp[2] = 2;
       for(int i=3; i<= n; i++){
        for(int k = 1; k<=i; k++){
            dp[i] += dp[k-1]*dp[i-k];
        }
       }
       return dp[n];

 
        
    }
};