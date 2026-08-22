class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0;
        int dsum=0;
        int posum=1;
        int total=n;
        while(n){
           int r=n%10;
            dsum+=r;
            posum*=r;
            n/=10;

        }
        sum=dsum + posum;
        return (total%sum==0);
        
    }
};