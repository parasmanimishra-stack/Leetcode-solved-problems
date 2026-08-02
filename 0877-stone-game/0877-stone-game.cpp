class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        int n=piles.size();
        int s1=0;
        int s2=0;
        sort(piles.begin(),piles.end());
        reverse(piles.begin(),piles.end());
        
        for(int i=0;i<n;i++){
            if(i%2==0) s1+=piles[i];
            else s2+=piles[i];
        }
        return(s1>s2);
        
    }
};