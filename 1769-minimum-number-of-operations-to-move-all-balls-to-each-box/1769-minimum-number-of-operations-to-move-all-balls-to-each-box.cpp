class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n = boxes.size();
        int b = 0;
        int cost = 0;
        vector<int> ans(n, 0);

        for(int i = 0; i < n; i++) {
            ans[i] += cost;
            if(boxes[i] == '1')    
                b++;
                cost += b;
            
        }

        b = 0;
        cost = 0;

        for(int i = n-1; i >= 0; i--) {
            ans[i] += cost;
            if(boxes[i] == '1') 
                b++;
                cost += b;
            
        }

        return ans;
    }
};