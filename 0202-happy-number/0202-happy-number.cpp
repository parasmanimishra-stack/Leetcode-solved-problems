class Solution {
public:   

   int nextN(int n){
    int sum = 0;
    while(n>0){
        int res = n%10;
        sum += res*res;
        n /= 10;
    }
    return sum;
   }

    bool isHappy(int n) {
        unordered_set<int> vis;
        while(vis.find(n) == vis.end()){
            vis.insert(n);
            n = nextN(n);
            if(n == 1){
                return true;
            }
        }
        return false;

     
        
    }
};