class Solution {
public:
    int sumOfGoodIntegers(int n, int k) {
        long long sum = 0;
        int lo = max(1, n-k);
        int hi = n+k;
        for(int x=lo; x<=hi; x++){
            if((n & x)==0)
            sum+=x;
        }
        return sum;
        
    }
};