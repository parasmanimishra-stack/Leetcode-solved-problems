class Solution {
public:
   int multi(int n){
    int digit=1;
    while(n>0){
        digit*=n%10;
        n/=10;
    }
    return digit;
   }
    int smallestNumber(int n, int t) {
        while(multi(n)%t!=0){
            n++;
        }
       
        return n;
        
    }
};