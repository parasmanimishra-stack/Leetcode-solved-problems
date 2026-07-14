class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int> store;
        int i = 0; 
        while(n > i  ){
            store.push_back(start + 2*i);
            i++;

        }
        int sum=0;
        for(int i=0; i<n; i++){
            sum ^= store[i];
        }
        return sum;
        
    }
};