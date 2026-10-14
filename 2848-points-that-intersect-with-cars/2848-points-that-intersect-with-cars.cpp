class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
        int preSum[102] = {0};
        int count = 0;
        for(auto num : nums){
            int left = num[0];
            int right = num[1];
            preSum[left] += 1;
            preSum[right+1] -=1;
        }

        

    
        
        
        for(int i=1; i<102; i++){
            preSum[i] += preSum[i-1];
            if(preSum[i] != 0){
            count++;
        }
    }
        return count;
        
    }
};