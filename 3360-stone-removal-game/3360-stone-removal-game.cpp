class Solution {
public:
    bool canAliceWin(int n) {
        if(n < 10) return false;

       int take = 10;
       int k = 0;

       while(n >= take){
        k++;
        n -= take;
        take--;
       
       }
       return k%2==1 ;
        
    }
};